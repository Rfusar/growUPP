from bs4 import BeautifulSoup
import subprocess
from datetime import datetime as dt

path = "C:\\Users\\Utente\\Desktop\\Superhero\\HOME_STUDIO\\apps\\code\\notizie"

variabili={
    "link": {
        "governoIta" : "https://www.governo.it/it",
        "agenzieEntrate" : "https://www.agenziaentrate.gov.it/portale/web/guest/home",
        "indiciBorsa" : "https://www.milanofinanza.it/mercati/indici?refresh_cens",
        "ISTAT": "https://www.istat.it/"
    },
    "file":{
        "governoIta" : "GI_home.html",
        "agenzieEntrate" : "AE_home.html",
        "indiciBorsa" : "indiciBorsa.html",
        "ISTAT" : "ISTAT.html"
    }
}

def creazione_foglio(tipo): 
    subprocess.call(f"curl -o {path}\\{variabili['file'][tipo]} -k {variabili['link'][tipo]}", shell=True)

def eliminazione_foglio(tipo):
    subprocess.call(f"del {path}\\{variabili['file'][tipo]}", shell=True)

def oreaAggiornamento(pathToFile):
    def setTime(var):
        if len(str(var)) < 2:
            var = f"0{var}"
            return var
        
        else: return str(var)
        
    variabile_tempo = dt.now()

    data = variabile_tempo.strftime('%d/%m/%Y')
    ora = setTime(variabile_tempo.hour)
    minuti = setTime(variabile_tempo.minute)


    with open(pathToFile, "a", encoding="utf-8") as f:
        f.write(f"\t Ultimo aggiornamento: {data} alle {ora}:{minuti}\n\n")



class Notizie():
    def __init__(self, nomeKeyFile, nomeFileOutput, nomeFileHTML):
        self.nomeKeyFile = nomeKeyFile,
        self.pathFileOutput = f"{path}\\{nomeFileOutput}",
        self.pathFileHTML = f"{path}\\{nomeFileHTML}"

    def salvataggio(self, lavorazione):
        creazione_foglio(self.nomeKeyFile[0])
        #*lettura
        with open(self.pathFileHTML, "r",encoding="utf-8") as file:
            HOME = file.read()

        #*pulizia\creazione foglio Output
        with open(self.pathFileOutput[0], "w",encoding="utf-8") as f:
            f.write("")

        #*registrazione data dell'aggiornamento
        oreaAggiornamento(self.pathFileOutput[0])

        soup = BeautifulSoup(HOME, "html.parser")
        lavorazione(soup, self.pathFileOutput[0])

        eliminazione_foglio(self.nomeKeyFile[0])

    
from bs4 import BeautifulSoup
import subprocess
import datetime

path = "C:\\Users\\Utente\\Desktop\\growUPP\\apps\\code\\notizie"

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

def news():
    creazione_foglio("governoIta")

    with open(f"{path}\\GI_home.html", "r",encoding="utf-8") as file:
        HOME = file.read()

    soup = BeautifulSoup(HOME, "html.parser")

    card = soup.find_all(class_="box_text_container clearfix")

    with open(f"{path}\\notizia.txt", "w",encoding="utf-8") as f:
            f.write("")
    for v in card: 
        h3 = v.find('h3') 
        p = v.find('p') # paragrafo in mezzo al div      
        with open(f"{path}\\notizia.txt", "a",encoding="utf-8") as f:
            f.write("♦♦♦♦♦ GovernoItalianoSite ♦♦♦♦♦♦♦♦♦♦♦♦♦ NOTIZIA\n\n")
            f.write(f"titolo: {h3.text}\n\n")
            f.write(f"{v.text}\n\n\n")

    eliminazione_foglio("governoIta")
     
def news_agenzia_entrate():
    creazione_foglio("agenzieEntrate")

    with open(f"{path}\\AE_home.html", "r",encoding="utf-8") as file:
        HOME = file.read()

    soup = BeautifulSoup(HOME, "html.parser")

    card = soup.find_all(class_="col-xs-12 col-sm-12 col-md-8")

    with open(f"{path}\\AE.txt", "w", encoding="utf-8") as f:
        f.write("")
    for i in card:
        data_notizia = i.find("span")
        titolo = i.find("h2")
        notizia = i.find("p")
        with open(f"{path}\\AE.txt", "a", encoding="utf-8") as f:
            f.write("☺☺☺☺☺☺☺☺☺ agenziaEntrate ☺☺☺☺☺☺☺☺☺☺☺☺ NOTIZIA\n\n")
            f.write(f"DATA: {data_notizia.text}\n\n")
            f.write(f"TITOLO: {titolo.text}\n\n")
            f.write(f"{notizia.text}\n\n\n")

    eliminazione_foglio("agenzieEntrate")

def check_indiciBorseMondiali():
    creazione_foglio("indiciBorsa")

    with open(f"{path}\\indiciBorsa.html", "r",encoding="utf-8") as file:
        HOME = file.read()

    soup = BeautifulSoup(HOME, "html.parser")

    tabella = soup.find(class_="table")
    elementi = tabella.find_all("tr")
 
    with open(f"{path}\\indici_banche.txt", "w", encoding="utf-8") as f:
        f.write("")

    with open(f"{path}\\indici_banche.txt", "a", encoding="utf-8") as f:
        #DATA
        f.write(f"\t Ultimo aggiornamento: {datetime.date.today()} alle {datetime.datetime.now().hour}:{datetime.datetime.now().minute}\n")

    titoli = []
    for i in elementi:
        titolo_campi = i.find_all("th")
        valori = i.find_all("td")

        for v in titolo_campi: titoli.append(v.text)
        count2=0

        for j2, J2 in enumerate(valori):
            with open(f"{path}\\indici_banche.txt", "a", encoding="utf-8")as f:
                #CONTENUTO
                while count2 < len(titoli):
                    if count2 >= 0 and count2 != 8:
                        var = ""
                        var += titoli[count2]
                        count2+=1
                        break
                    elif count2 == 8:
                        count2 = 0
                
                x = valori[j2].text.split()

                f.write(f"\n{var}: {x[0]}")
                if count2 == 0:
                    pass
                elif count2 % 7 == 0:
                    f.write("\n\n")

    eliminazione_foglio("indiciBorsa")

def notizieISTAT():
    creazione_foglio("ISTAT")

    with open(f"{path}\\ISTAT.html", "r",encoding="utf-8") as file:
        HOME = file.read()

    soup = BeautifulSoup(HOME, "html.parser")

    n0 = soup.find_all(class_="article list d-none d-sm-block")
    n1 = soup.find_all(class_="article list")

    with open(f"{path}\\ISTAT.txt", "w",encoding="utf-8") as f:
        f.write("")

    for i in n1:
        data = i.find("p")
        paragrafo = i.find("h2")
        titolo = i.find("h1")
        with open(f"{path}\\ISTAT.txt", "a",encoding="utf-8") as file:
            file.write("♠♠♠♠♠♠♠♠♠♠♠♠♠♠ISTAT-NEWS♠♠♠♠♠♠♠♠♠♠♠\n")
            file.write(f"data: {data.text}\n")
            file.write(f"titolo: {titolo.text}\n")
            file.write(f"paragrafo: {paragrafo.text}\n\n")

    for i in n0:
        data = i.find("p")
        paragrafo = i.find("h2")
        titolo = i.find("h1")
        with open(f"{path}\\ISTAT.txt", "a",encoding="utf-8") as file:
            file.write("♠♠♠♠♠♠♠♠♠♠♠♠♠♠ISTAT-NEWS♠♠♠♠♠♠♠♠♠♠♠\n")
            file.write(f"data: {data.text}\n")
            file.write(f"titolo: {titolo.text}\n")
            file.write(f"paragrafo: {paragrafo.text}\n\n")

    eliminazione_foglio("ISTAT")


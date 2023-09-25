from bs4 import BeautifulSoup
import subprocess

path = "C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2"

variabili={
    "link": {
        "governoIta" : "https://www.governo.it/it",
        "agenzieEntrate" : "https://www.agenziaentrate.gov.it/portale/web/guest/home"
    },
    "file":{
        "governoIta" : "GI_home.html",
        "agenzieEntrate" : "AE_home.html"
    }
}

def creazione_foglio(tipo): #*SITO -GOVERNO
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




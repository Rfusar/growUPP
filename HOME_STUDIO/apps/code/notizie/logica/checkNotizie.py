from variabili import Notizie

'''
    ricordati che se cambi i nomi dei fileOutput, devi cambiarli anche nel file checkNotizie.bat
'''

#*Governo italiano
def news():
    nomeFileOutput = "News_governoItaliano.txt"

    def func(soup, allPathOutput):
        card = soup.find_all(class_="box_text_container clearfix")

        for v in card: 
            h3 = v.find('h3') 
            p = v.find('p') # paragrafo in mezzo al div      
            with open(allPathOutput, "a",encoding="utf-8") as f:
                f.write("♦♦♦♦♦ GovernoItalianoSite ♦♦♦♦♦♦♦♦♦♦♦♦♦ NOTIZIA\n\n")
                f.write(f"titolo: {h3.text}\n\n")
                f.write(f"{v.text}\n\n\n")

    Notizie("governoIta", nomeFileOutput, "GI_home.html").salvataggio(func)



#*Agenzia Delle Entrate     
def news_agenzia_entrate():
    nomeFileOutput = "News_agenzieEntrate.txt"
    
    def func(soup, allPathOutput):
        card = soup.find_all(class_="col-xs-12 col-sm-12 col-md-8")

        for i in card:
            data_notizia = i.find("span")
            titolo = i.find("h2")
            notizia = i.find("p")
            with open(allPathOutput, "a", encoding="utf-8") as f:
                f.write("☺☺☺☺☺☺☺☺☺ agenziaEntrate ☺☺☺☺☺☺☺☺☺☺☺☺ NOTIZIA\n\n")
                f.write(f"DATA: {data_notizia.text}\n\n")
                f.write(f"TITOLO: {titolo.text}\n\n")
                f.write(f"{notizia.text}\n\n\n")

    Notizie("agenzieEntrate", nomeFileOutput, "AE_home.html").salvataggio(func)



#*Indici borsa 
def check_indiciBorseMondiali():
    nomeFileOutput = "indici_banche.txt"

    def func(soup, allPathOutput):

        tabella = soup.find(class_="table")
        elementi = tabella.find_all("tr")
    
        titoli = []
        for i in elementi:
            titolo_campi = i.find_all("th")
            valori = i.find_all("td")

            for v in titolo_campi: titoli.append(v.text)
            count2=0

            for j2, J2 in enumerate(valori):
                with open(allPathOutput, "a", encoding="utf-8")as f:
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

    Notizie("indiciBorsa", nomeFileOutput, "indiciBorsa.html").salvataggio(func)


#*Istat
def notizieISTAT():
    nomeFileOutput = "News_ISTAT.txt"

    def func(soup, allPathOutput):
        n0 = soup.find_all(class_="article list d-none d-sm-block")
        n1 = soup.find_all(class_="article list")

        for i in n1:
            data = i.find("p")
            paragrafo = i.find("h2")
            titolo = i.find("h1")
            with open(allPathOutput, "a",encoding="utf-8") as f:
                f.write("♠♠♠♠♠♠♠♠♠♠♠♠♠♠ISTAT-NEWS♠♠♠♠♠♠♠♠♠♠♠\n")
                f.write(f"data: {data.text}\n")
                f.write(f"titolo: {titolo.text}\n")
                f.write(f"paragrafo: {paragrafo.text}\n\n")

        for i in n0:
            data = i.find("p")
            paragrafo = i.find("h2")
            titolo = i.find("h1")
            with open(allPathOutput, "a",encoding="utf-8") as f:
                f.write("♠♠♠♠♠♠♠♠♠♠♠♠♠♠ISTAT-NEWS♠♠♠♠♠♠♠♠♠♠♠\n")
                f.write(f"data: {data.text}\n")
                f.write(f"titolo: {titolo.text}\n")
                f.write(f"paragrafo: {paragrafo.text}\n\n")

    Notizie("ISTAT", nomeFileOutput, "ISTAT.html").salvataggio(func)
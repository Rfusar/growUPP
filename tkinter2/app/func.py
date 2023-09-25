import sqlite3
import hashlib
import re
import subprocess
from bs4 import BeautifulSoup


#AGG HASH
path = "C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\"
conn = sqlite3.connect(f'{path}user.db')



def setting_database(nome_file):
    global conn
    IN = nome_file.split()
    try:
        #*ELIMNA TABELLA
        if IN[0] == "X" or IN[0] == "x":
            cur = conn.cursor()
            cur.execute("DROP TABLE IF EXISTS user")

        #*SET UTENTE
        #user
        elif IN[0] == "set":
            cur = conn.cursor()
            cur.execute(f"UPDATE user SET stato = 'user', nome = '{IN[2]}', liv = '{IN[3]}', pass = '{IN[4]}' WHERE nome = '{IN[1]}'")
            conn.commit()
        #admin
        elif IN[0] == "setX":
            cur = conn.cursor()
            cur.execute(f"UPDATE user SET stato = 'admin', nome = '{IN[2]}', liv = '{IN[3]}', pass = '{IN[4]}' WHERE nome = '{IN[1]}'")
            conn.commit()

        #*AGGIUNGI UTENTE
        elif IN[0] == "creaAdmin":
            cur = conn.cursor()
            cur.execute(f"""
                CREATE TABLE IF NOT EXISTS user(
                    stato VARCHAR(5),
                    nome VARCHAR(50),
                    liv INT,
                    pass VARCHAR(255)
                )""")
            conn.commit()
            cur.execute(f"INSERT INTO user (stato, nome, liv, pass) VALUES ('admin', '{IN[1]}', '{IN[2]}', '{IN[3]}')")
            conn.commit()

        elif IN[0] == "crea":
            cur = conn.cursor()
            cur.execute(f"""
                CREATE TABLE IF NOT EXISTS user(
                    stato VARCHAR(5),
                    nome VARCHAR(50),
                    liv INT,
                    pass VARCHAR(255)
                )""")
            conn.commit()
            cur.execute(f"INSERT INTO user (stato, nome, liv, pass) VALUES ('user', '{IN[1]}', '{IN[2]}', '{IN[3]}')")
            conn.commit()

        #*CHECK
        else:
            cur = conn.cursor()
            cur.execute(f"SELECT pass FROM user WHERE nome = '{IN[0]}'")
            p = cur.fetchone()
            if IN[2] == p[0]:
                return True

    except Exception as e:
        print(e)


def gestione_inserimento_tab_CODE(text):

    def ricercaInternet(ricerca):# segno --> ##
        ric = ricerca.split()
        r = ""
        c = 0
        while c < len(ric):
            if c == 0:
                r += ric[c]

            elif ric[c] != " ":
                r += f"+{ric[c]}"
            c+=1

        subprocess.call(f"start msedge https://www.google.com/search?q={r}", shell=True)

    def ricercaDizionario(ricerca):# segno $$
        def creazione():
            subprocess.call(f"curl -o C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.html -k https://www.treccani.it/vocabolario/{ricerca}",shell=True)
        def del_html():
            subprocess.call(f"del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.html",shell=True)
        def del_txt():
            subprocess.call(f"del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.txt",shell=True)


        creazione()
        with open("C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.html", "r",encoding="utf-8") as file:
            HOME = file.read()
        soup = BeautifulSoup(HOME, "html.parser")

        card = soup.find(class_="text spiega")
        e = card.find_all("p")

        with open("C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.txt", "w") as f:
            f.write("")
        with open("C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.txt", "a", encoding="utf-8") as f:
            f.write(f"termine: {e[1].text}\n\n")
            f.write(f"{e[2].text}")


        del_html()
        subprocess.call("notepad C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\vocabolo.txt", shell=True)
        del_txt()
        

    pattern1 = r'\#(.*?)\#'#* RICERCA INTERNET
    pattern2 = r'\$(.*?)\$'#* RICERCA NEL VOCABOLARIO TRECCANI
    pattern3 = r'\£(.*?)\£'

    match1 = re.search(pattern1, text)
    match2 = re.search(pattern2, text)
    match3 = re.search(pattern3, text)

    if match1:
        contenuto = match1.group(1)
        ricercaInternet(contenuto)  

    if match2:
        contenuto = match2.group(1)
        ricercaDizionario(contenuto)
        
    if match3:
        contenuto = match3.group(1)
     
    

                

        

    
    



    
    

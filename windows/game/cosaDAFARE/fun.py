import sqlite3
import subprocess
import datetime
import os


def data():
    data_ora_correnti = datetime.datetime.now()
    giorno = data_ora_correnti.day
    mese = data_ora_correnti.month
    anno = data_ora_correnti.year

    ris = f"{giorno}\{mese}\{anno}"
    return ris




def ADD():
    pulisciSchermo()
    print("")
    print("q per uscire")
    print("")
    print("seleziona database OPPURE AGGIUNGI")
    print("")
    print("")
    dir = f"C:\\Users\\Utente\\Desktop\\esperimenti-master\\database"
    lista_file = os.listdir(dir)
    for file in lista_file:        
        print(f"|database: {file}\n|_____")
        print("")
    
    print("")
    print("")
    print("")
    nome_database = input()
    print("")
    print("")
    print(f"crea promemoria su {nome_database}? ")
    print("")
    print("promemoria [\n")
    try:
        if (nome_database[:-3] != ".db"):
            conn = sqlite3.connect(f"{dir}\\{nome_database}.db")
            print("\n]\n\n")
            daFare = input()
            print("inserisci il CODICE da salvare(max 5 caratteri):\n\n")
            codice = input()
            try:
                cur = conn.cursor()
                cur.execute(f"CREATE TABLE IF NOT EXISTS {nome_database} (id VHARCHAR(5), descrizione VARCHAR(255), data DATE)")
                conn.commit()
                cur.execute(f"INSERT INTO {nome_database} VALUES (?, ?, ?)",(codice, daFare, data()))
                conn.commit()
                cur.close()
                conn.close()

            except:
                pass
        else:
            conn = sqlite3.connect(f"{dir}\\{nome_database}")
            print("\n]\n\n")
            daFare = input()
            print("inserisci il CODICE da salvare(max 5 caratteri):\n\n")
            codice = input()
            try:
                cur = conn.cursor()
                cur.execute(f"CREATE TABLE IF NOT EXISTS {nome_database[:-3]} (id VHARCHAR(5), descrizione VARCHAR(255), data DATE)")
                conn.commit()
                cur.execute(f"INSERT INTO {nome_database[:-3]} VALUES (?, ?, ?)",(codice, daFare, data()))
                conn.commit()
                cur.close()
                conn.close()

            except:
                pass

    except:
        pass
    





def DEL():
        print("")
        print("q oppure -q per uscire")
        print("")
        print("INSERISCI NOME DATABASE")
        print("")
        print("")
        dir = f"C:\\Users\\Utente\\Desktop\\esperimenti-master\\database"
        lista_file = os.listdir(dir)
        for file in lista_file:        
            print(f"|database: {file}\n|_____")
            print("")

        print("")
        f = input()
        if (f == "q" or f == "-q"):
            pulisciSchermo()
            
        elif (f in lista_file):
            parte2 = True
            while(parte2):
                print("SELEZIONA COSA VUOI ELIMINARE (inserici 'codice' oppure ALL oppure database)")
                print("")
                conn = sqlite3.connect(f"{dir}\\{f}")
                cur = conn.cursor()
                cur.execute(f"SELECT * FROM {f[:-3]}")
                dati = cur.fetchall()
                for t in dati:
                    print(f"|codice: {t[0]}\n|\n|compito: {t[1]}\n|\n| data: {t[2]}\n|\n|____\n\n")

                cur.close()
                conn.close()
                print("")
                print("")
                codice = input()


                if (codice == "ALL"):
                    cur.execute(f"DELETE FROM {f[:-3]}")
                    conn.commit()
                    cur.close()
                    conn.close()
                    parte2 = False

                elif (codice == "q"):
                    parte2 = False
                    pulisciSchermo()
                    break

                elif (codice == "database"):
                    path = f"{dir}\\{f}"
                    if os.path.exists(path):
                        os.remove(path)
                        parte2 = False

                elif (codice != "ALL" and codice != "q" and codice != "database" and len(codice) <= 5 ):
                    conn = sqlite3.connect(f"{dir}\\{f}")
                    cur = conn.cursor()
                    cur.execute(f"DELETE FROM {f[:-3]} WHERE id = ?",(codice,))
                    conn.commit()
                    cur.close()
                    conn.close()
                    parte2 = False
                else:
                    pass
        else:
            DEL()
        


def GOTO():
        pulisciSchermo()
        print("")
        print("q oppure -q per uscire")
        print("")
        print("seleziona DATABASE")
        dir = f"C:\\Users\\Utente\\Desktop\\esperimenti-master\\database"
        lista_file = os.listdir(dir)
        fi = []
        for file in lista_file:      
            print(f"|database: {file}\n|_____\n\n")
            print("")
            fi.append(file)

        print("inserisci database: \n\n\n")
        f = input()
       
        if(f in lista_file):
            conn = sqlite3.connect(f"{dir}\\{f}")
            cur = conn.cursor()
            cur.execute(f"SELECT * FROM {f[:-3]}")
            tot = cur.fetchall()
            pulisciSchermo()
            for t in tot:
                print(f"|codice: {t[0]}\n|\n|compito: {t[1]}\n|\n| data: {t[2]}\n|\n|____\n\n")
                print("")

            input()

        elif (f == "q" or f == "-q"):
            pass

        else:
            GOTO()

        


def createDB():
    pulisciSchermo()
    creazione = True
    print("")
    print("-q per uscire")
    print("")
    print("")
    print("nome DATABASE: ")
    nomeDB = input()
    if(nomeDB == "-q"):
        creazione = False
        pulisciSchermo()
    
    if (nomeDB[:-3] == ".db"):
        nomeDB = nomeDB[:-3]
            
    while(creazione):
        print("")
        print("")
        print(f"default PARAMETRI: codice VARCHAR(10), descrizione VARCHAR(255), data DATE")
        print("")
        print("Vuoi cambiare? [Y/N]")
        ris = input()
        if(ris == "Y"):
            print("")
            print("")
            print("inserisci query: ")
            print("")
            query = input()
            try:
                if(query == "-q"):
                    creazione = False
                    pulisciSchermo()
                    break
                elif (query != " " or query != "" or query != "-q"):
                    nomeDATABASE = sqlite3.connect(f"C:\\Users\\Utente\\Desktop\\esperimenti-master\\database\\{nomeDB}.db")
                    cur = nomeDATABASE.cursor()
                    cur.execute(query)
                    nomeDATABASE.commit()
                    cur.close()
                    nomeDATABASE.close()
                    creazione = False
         
                else:
                    pass
            except:
                pass

        elif(ris == "N"):
            try:
                nomeDATABASE = sqlite3.connect(f"C:\\Users\\Utente\\Desktop\\esperimenti-master\\database\\{nomeDB}.db")
                cur = nomeDATABASE.cursor()
                cur.execute(f"CREATE TABLE {nomeDB} (codice VARCHAR(10), descrizione VARCHAR(255), data DATE)")
                nomeDATABASE.commit()
                cur.close()
                nomeDATABASE.close()
                creazione = False
         
            except:
                pass
         
            

       
    
        









def pulisciSchermo():
   comando_cls = "cls" 
   subprocess.call(comando_cls, shell=True)



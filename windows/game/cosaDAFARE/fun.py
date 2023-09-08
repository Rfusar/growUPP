import sqlite3
import subprocess
import datetime

#DATABASE
DB = sqlite3.connect("C:\\Users\\Utente\\Desktop\\esperimenti-master\\cosedafare.db")



def data():
    data_ora_correnti = datetime.datetime.now()
    giorno = data_ora_correnti.day
    mese = data_ora_correnti.month
    anno = data_ora_correnti.year

    ris = f"{giorno}\{mese}\{anno}"
    return ris

def checkDB():
    cur = DB.cursor()
    cur.execute("SELECT * FROM cosaDaFare")
    THINGS = cur.fetchall()
    for t in THINGS:
        
        print(f"|codice: {t[0]}\n|\n|compito: {t[1]}\n|\n| data: {t[2]}\n|\n|____\n\n")
        
        







def ADD():
    print("che cosa vuoi aggiungere? ")
    print("")
    print("")
    print("")
    daFare = input()
    pulisciSchermo()
    print("inserisci il CODICE da salvare(max 5 caratteri): ")
    codice = input()
    try:
        cur = DB.cursor()
        cur.execute("CREATE TABLE IF NOT EXISTS cosaDaFare (id VHARCHAR(5), descrizione VARCHAR(255), data DATE)")
        DB.commit()
        cur.execute("INSERT INTO cosaDaFare VALUES (?, ?, ?)",(codice, daFare, data()))
        DB.commit()
        cur.close()

    except Exception as e:
        print(e)

def DEL():
        print("SELEZIONA COSA VUOI ELIMINARE (inserici 'codice' oppure ALL)")
        print("")
        print("")
        print("q per uscire")
        print("")
        try:
            checkDB()
        except:
             pass
        print("")
        print("")
        codice = input("    ")
        if (codice == "ALL"):
            cur = DB.cursor()
            cur.execute("DELETE FROM cosaDaFare")
            DB.commit()
            cur.close()
        elif (codice == "q"):
            pass
        else:
            cur = DB.cursor()
            cur.execute("DELETE FROM cosaDaFare WHERE id = ?",(codice,))
            DB.commit()
            cur.close()
             
        


def GOTO():
        print("dove vuoi andare")
        print("")
        print("")
        print("")


def createDB():
    pulisciSchermo()
    print("\n\nQUERY: ")
    query = input()
    try:
        cur = DB.cursor()
        cur.execute(query)
        DB.commit()
        cur.close()
    except:
        pulisciSchermo()
        print("database non creato perche gia presente\n")
        input()


def pulisciSchermo():
   comando_cls = "cls" 
   subprocess.call(comando_cls, shell=True)
import py7zr
from getpass import getpass
import subprocess

def estrai_file_7zip(file_archivio, password):
    try:
        with py7zr.SevenZipFile(file_archivio, mode='r', password=password) as z:
            z.extractall(path="C:\\Users\\Utente\\Desktop\\info\\variabili")
            print("Contenuto estratto con successo.")
    except py7zr.Bad7zFile:
        print("Errore: File 7z danneggiato o password errata.")

if __name__ == "__main__":
    file_archivio = "C:\\Users\\Utente\\Desktop\\info\\variabili\\.env.7z"  
    password = getpass("Inserisci la password dell'archivio 7z: ")

    estrai_file_7zip(file_archivio, password)
    subprocess.call("cls && type C:\\Users\\Utente\\Desktop\\info\\variabili\\.env",shell=True)
    print("\n\n\n\n\n")
    subprocess.call("pause",shell=True)
    subprocess.call("del C:\\Users\\Utente\\Desktop\\info\\variabili\\.env && cls",shell=True)
    

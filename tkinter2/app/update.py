import subprocess
from checkNotizie import news, news_agenzia_entrate,check_indiciBorseMondiali

news()
news_agenzia_entrate()
check_indiciBorseMondiali()

subprocess.call("del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\AE.txt",shell=True)
subprocess.call("del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\notizia.txt", shell=True)
subprocess.call("del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\checkPROVAA.txt", shell=True)

import subprocess
from checkNotizie import news, news_agenzia_entrate

news()
news_agenzia_entrate()

subprocess.call("del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\AE.txt",shell=True)
subprocess.call("del C:\\Users\\Utente\\Desktop\\esperimenti-master\\tkinter2\\notizia.txt", shell=True)

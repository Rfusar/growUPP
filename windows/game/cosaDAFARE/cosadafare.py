from fun import ADD,DEL,GOTO, pulisciSchermo,createDB




def INIZIO():

    add = False
    delete = False
    vai_a = False
    crea_DB = False
    
    pulisciSchermo()
    print("\n               COSE DA FARE        ")
    print("\n                                   ")
    print("\n                                   ")
    print("\n                                   ")
    print("\n                                   ")
    print("\n1. aggiungi      2.elimina     3.vai a...    4.crea tabella\n\n\n")
    print("\n\n5. esci\n\n\n")

    ris = input("")

    if(ris == "1"):
        add = True

    elif(ris == "2"):
        delete = True

    elif(ris == "3"):
        vai_a = True

    elif(ris == "4"):
        crea_DB = True
    
    elif(ris == "5"):
        global GAME
        GAME = False
        pulisciSchermo()






    if(add):
        delete = False
        vai_a = False
        crea_DB = False
        pulisciSchermo()
        ADD()

    if(delete):
        add = False
        vai_a = False
        crea_DB = False
        pulisciSchermo()
        DEL()
    
    if(vai_a):
        delete = False
        add = False
        crea_DB = False
        pulisciSchermo()
        GOTO()

    if(crea_DB):
        delete = False
        add = False
        vai_a = False
        pulisciSchermo()
        createDB()

GAME = True
while GAME:
    INIZIO()
    
    

        
        

   


    
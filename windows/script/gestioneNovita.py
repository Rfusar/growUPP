def novita():

    dir = "C:\\Users\\Utente\\Desktop\\esperimenti-master\\windows\\"

    with open(dir + "novita.bat", "r") as file:
        cont = file.readline()

    file.close()
    return cont.strip()
print("")
print("")
print("************************** NOVITA")
print("|")
print("|"+novita()[3:])
print("|")
print("|")
print("|_________________________________")
print("")
print("")
print("")
print("")
print("")
print("")
    


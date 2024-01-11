@echo off

if "%1" == "update" ( 
    cd C:\Users\Utente\Desktop\Superhero
    code .

) else if "%1" == "start" ( 
    C:\Users\Utente\Desktop\Superhero\HOME_STUDIO\home_page.exe


) else if "%1" == "github" (
     cd C:\Users\Utente\Desktop\Superhero
    git add .
    git commit -m "0.0.0"
    git push origin master


) else if "%1" == "workout" (
    cls
    type C:\Users\Utente\Desktop\Superhero\cose_da_fare.txt
)
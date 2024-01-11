@echo off

if "%1" == "update" ( 
    cd C:\Users\Utente\Desktop\Superhero\HOME_STUDIO
    code .

) else if "%1" == "start" ( 
    cd HOME_STUDIO
    .\home_page.exe
    cd ..

) else if "%1" == "github" (
     cd C:\Users\Utente\Desktop\Superhero
    git add .
    git commit -m "0.0.0"
    git push origin master
    
)
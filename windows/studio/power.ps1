$game = $true

function aposto{
    param([bool]$Y)

    $set1 = read-host "Aposto? [Y/N]"

    if ($set1 -eq "Y"){return $false}  
    else {return $true}
}
function impara {
    param([bool]$man, [string]$nome)
    while ($man) {
            clear-host
            get-content -path prove\Powershell\$nome.txt
            write-host
            write-host
            $man = aposto -Y $man
            
        }

} 

#INIZIO
while($game){
    clear-host 
    write-host "SINTASSI:"
    write-host 
    write-host 
    write-host 
    write-host "    variabili                  funzioni                 policy"
    write-host 
    write-host "                estensioni                  condizioni" 
    write-host
    write-host
    write-host "METODI"
    write-host
    write-host "    internet    "

    $domanda1 = read-host "cosa vuoi sapere di POWERSHELL? "

    switch ($domanda1){

        "policy" {
            $manuale = "policy"
            $valoreManuale = $true
            impara -man $valoreManuale -nome $manuale
        }

        "variabili" {
            $manuale = "variabili"
            $valoreManuale = $true
            impara -man $valoreManuale -nome $manuale 
        }
        "estensioni" {
            $manuale = "estensioni"
            $valoreManuale = $true
            impara -man $valoreManuale -nome $manuale 
        }
        "funzioni" {
            $manuale = "funzioni"
            $valoreManuale = $true
            impara -man $valoreManuale -nome $manuale 
        }
        "q" {$game = $false}
        "condizioni" {
            clear-host
            write-host "`tif-else"
            write-host "`tswitch" 
            write-host "`twhile" 
            write-host "`tfor" 
            write-host 
            write-host "`tq per uscire" 
            write-host 
            write-host 
            write-host 

            $domanda2 = read-host "cosa vuoi sapere? "

            switch ($domanda2){

                "if-else" {
                    $manuale = "if-else"
                    $valoreManuale = $true
                    impara -man $valoreManuale -nome $manuale 
                }
                "switch" {
                    $manuale = "switch"
                    $valoreManuale = $true
                    impara -man $valoreManuale -nome $manuale 
                }
                "while" {
                    $manuale = "while"
                    $valoreManuale = $true
                    impara -man $valoreManuale -nome $manuale 
                }
                "for" {
                    $manuale = "for"
                    $valoreManuale = $true
                    impara -man $valoreManuale -nome $manuale 
                }
                
            } 
        }
        
        default {$game = $true}
    }
}
    



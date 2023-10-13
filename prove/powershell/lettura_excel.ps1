# Crea un oggetto COM per LibreOffice
$libreOffice = New-Object -ComObject "C:\Program Files\LibreOffice\program\scalc.exe"



# Specifica il percorso del tuo documento Excel
$excelFilePath = "C:\Users\Utente\Desktop\esperimenti-master\prove\powershell\excel\Cartella.xlsx"

# Carica il documento Excel
$document = $libreOffice.loadComponentFromURL("file:///$excelFilePath", "_blank", 0, @())

# Ottieni il foglio di lavoro attivo
##$sheet = $document.Sheets.getByIndex(0) # Cambia l'indice se necessario

# Esempio: Leggi il valore da una cella
$cell = $sheet.getCellByPosition(0, 0) # Specifica la posizione della cella
$valore = $cell.getString()
Write-Host "Valore nella cella A1: $valore"

# Esempio: Modifica il valore di una cella
#$cell.setString("NuovoValore")

# Salva il documento
$document.store()

# Chiudi il documento
$document.close($true)

# Chiudi LibreOffice
$libreOffice = $null


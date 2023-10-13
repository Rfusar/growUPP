cls

# Avvia LibreOffice Calc
Start-Process "C:\Program Files\LibreOffice\program\scalc.exe" -NoNewWindow

# Attendi un po' per permettere a LibreOffice di avviarsi completamente
Start-Sleep -Seconds 5

# Crea un oggetto COM per LibreOffice
$libreOffice = New-Object -ComObject "com.sun.star.ServiceManager"

# Crea un oggetto desktop di LibreOffice
$desktop = $libreOffice.createInstance("com.sun.star.frame.Desktop")

# Specifica il percorso del tuo documento Excel
$excelFilePath = "C:\percorso\del\tuo\file.xlsx"

# Carica il documento Excel
$document = $desktop.loadComponentFromURL("file:///$excelFilePath", "_blank", 0, @())

# Ottieni il foglio di lavoro attivo
$sheet = $document.Sheets.getByIndex(0) # Cambia l'indice se necessario

# Scrivi il valore nella cella A1
$cell = $sheet.getCellByPosition(0, 0) # Specifica la posizione della cella
$cell.setString("NuovoValore")

# Salva il documento
$document.store()

# Chiudi il documento
$document.close($true)

# Chiudi LibreOffice
$libreOffice = $null

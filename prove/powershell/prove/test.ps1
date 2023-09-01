$response = Invoke-WebRequest -Uri "https://www.google.com"  -websession "chrome"
$formattedContent = $response.ParsedHtml.DocumentElement.OuterHtml

# Stampa il contenuto HTML formattato
Write-Host $formattedContent

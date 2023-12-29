cls
#rilascio password
#https://security.google.com/settings/security/apppasswords

# Function to handle key events
function HandleKeyPress {
    param (
        [object]$key
    )

    # Check if the key is a special key (non-character key)
    if ($key.Key -eq 'Enter') {
        Write-Host ""  # Move to a new line after pressing Enter
    } elseif ($key.VirtualKeyCode -eq 22) {
        # Handle backspace (erase the last character)
        if ($Password.Length -gt 0) {
            $Password = $Password.Substring(0, $Password.Length - 1)
            Write-Host -NoNewline "`b `b"  # Erase the last asterisk
        }
    } else {
        # Handle regular key press
        $Password += $key.Character
        Write-Host -NoNewline "*"
    }
}


write-host "oggetto email: "
$oggetto = read-host 
Write-Host "`nbody email: "
$corpo = read-host 
Write-Host "`nvuoi inserire un file?"
$file = read-host
Write-Host "`na chi vuoi inviare l'email?"
$aChi = read-host

write-host "`n`n`nAUTENTICAZIONE:"
write-host "Email:"
$myEmail = read-host
# SET PASSWORD
$Password = ""
$p = ""
$key = $null
$valore = $true
Write-Host "`nInserisci Password: $Password"
while ($valore) {
    if ($Host.UI.RawUI.KeyAvailable) {
        $key = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")
        HandleKeyPress -key $key
        $p += $key.Character
        # Check for a specific key press to proceed to the next option
        if ($key.VirtualKeyCode -eq 13) {
            $p = $p.Substring(0, $p.Length - 1)
            $valore = $false
        }
    }
}

if ($file -eq ""){
    $SMTP = "smtp.gmail.com"
    $From = $myEmail
    $To = $aChi
    $Subject = $oggetto
    $Body = $corpo

    $Email = New-Object Net.Mail.SmtpClient($SMTP, 587)
    $Email.EnableSsl = $true

    $MailMessage = New-Object Net.Mail.MailMessage
    $MailMessage.From = $From
    $MailMessage.To.Add($To)
    $MailMessage.Subject = $Subject
    $MailMessage.Body = $Body

    $Email.Credentials = New-Object System.Net.NetworkCredential($myEmail, $p)

    $Email.Send($MailMessage)
    Write-Host "`n`nfatto"
}
else{
    $SMTP = "smtp.gmail.com"
    $From = $myEmail
    $To = $aChi
    $Subject = $oggetto
    $Body = $corpo
    $AttachmentPath = $file

    # Crea l'oggetto SmtpClient
    $Email = New-Object Net.Mail.SmtpClient($SMTP, 587)
    $Email.EnableSsl = $true

    # Crea l'oggetto MailMessage
    $MailMessage = New-Object Net.Mail.MailMessage
    $MailMessage.From = $From
    $MailMessage.To.Add($To)
    $MailMessage.Subject = $Subject
    $MailMessage.Body = $Body

    # Allega il file
    $Attachment = New-Object Net.Mail.Attachment($AttachmentPath)
    $MailMessage.Attachments.Add($Attachment)

    # Passa le credenziali correttamente
    $Email.Credentials = New-Object System.Net.NetworkCredential($myEmail, $p)

    # Invia l'email
    $Email.Send($MailMessage)

    # Chiudi l'oggetto Attachment
    $Attachment.Dispose()

    Write-Host "`n`nfatto"
}

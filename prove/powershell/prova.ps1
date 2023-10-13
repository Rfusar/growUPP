Add-Type -AssemblyName System.Windows.Forms
Add-Type -AssemblyName System.Drawing

cd C:\Users\Utente\Desktop\esperimenti-master\prove\powershell

.\func_prova.ps1


##ELEMENTO
$form = New-Object System.Windows.Forms.Form
$form.Text = 'esperimento1'
$form.StartPosition = 'CenterScreen'


##BTNs
#1
$okButton = New-Object System.Windows.Forms.Button
$okButton.Location = New-Object System.Drawing.Point(75,120)
$okButton.Size = New-Object System.Drawing.Size(100,23)
$okButton.Text = 'fai un cosa'
#funzione -ciao
$okButton.add_click({ciao})
$okButton.DialogResult = [System.Windows.Forms.DialogResult]::OK
$form.AcceptButton = $okButton
$form.Controls.Add($okButton)
#2
$cancelButton = New-Object System.Windows.Forms.Button
$cancelButton.Location = New-Object System.Drawing.Point(150,120)
$cancelButton.Size = New-Object System.Drawing.Size(75,23)
$cancelButton.Text = 'Cancel'
$cancelButton.DialogResult = [System.Windows.Forms.DialogResult]::Cancel

$form.CancelButton = $cancelButton
$form.Controls.Add($cancelButton)


$label = New-Object System.Windows.Forms.Label
$label.Location = New-Object System.Drawing.Point(10,20)
$label.Size = New-Object System.Drawing.Size(280,20)
$label.Text = 'scrivi qualcosa: '
$form.Controls.Add($label)


$form.Topmost = $true



$result = $form.ShowDialog()



if ($result -eq [System.Windows.Forms.DialogResult]::OK)
{
    $x = $textBox.Text
    $x
}
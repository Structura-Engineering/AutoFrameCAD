param (
    [string]$prefix
)

$pythonPath = Get-Command python -ErrorAction SilentlyContinue
if ($null -eq $pythonPath) {
    Write-Host -NoNewline "$prefix " -ForegroundColor Red; Write-Host "Python is not installed. Installing Python..."
    Invoke-WebRequest -Uri "https://www.python.org/ftp/python/3.9.7/python-3.9.7-amd64.exe" -OutFile "python-installer.exe"
    Start-Process -FilePath "python-installer.exe" -ArgumentList "/quiet InstallAllUsers=1 PrependPath=1 Include_test=0" -Wait
    Remove-Item -Path "python-installer.exe"
    Write-Host -NoNewline "$prefix " -ForegroundColor Red; Write-Host "Python installation complete!"
} else {
    Write-Host -NoNewline "$prefix " -ForegroundColor Red; Write-Host "Python is already installed."
}

# TODO: Make it in such a way that it gets the newest version from the folder (BRXSDK).
function installFromCloud() {
    url=$1
    filename=$(basename $url)
    foldername=${filename%.*}
    sudo wget $url
    sudo mkdir -p /usr/local/lib/$foldername
    sudo unzip -d /usr/local/lib/$foldername $filename
    sudo rm $filename
    echo 'export PATH=$PATH:/usr/local/lib/' >> ~/.bashrc
    source ~/.bashrc
}

function onCreateCommand() {
    pip install --upgrade pip && pip install -r requirements.txt
    sudo apt-get update && sudo apt-get install -y gdb
    # TODO: Use Onedrive or some sort of api to get it straight from BricsCAD.
    # installFromCloud "https://cloud.structura-engineering.com/storage/BRXSDK/BRXSDK_Bcad_V24_2_01.zip"
}

onCreateCommand

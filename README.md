# Tutorials
Tuts

### How to install NODE and NPM using NodeSource
add source
```bash
curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
```
install from apt
```bash
curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
sudo apt install -y nodejs
sudo apt-get install gcc g++ make
curl -sL https://dl.yarnpkg.com/debian/pubkey.gpg | gpg --dearmor | sudo tee /usr/share/keyrings/yarnkey.gpg >/dev/null
echo "deb [signed-by=/usr/share/keyrings/yarnkey.gpg] https://dl.yarnpkg.com/debian stable main" | sudo tee /etc/apt/sources.list.d/yarn.list
sudo apt-get update && sudo apt-get install yarn
```
build tools
```bash
sudo apt install build-essential
```
### How to install YARN
 ```bash
 curl -o- -L https://yarnpkg.com/install.sh | bash
 ```
 
 or 
 

 ```bash
curl -sL https://dl.yarnpkg.com/debian/pubkey.gpg | gpg --dearmor | sudo tee /usr/share/keyrings/yarnkey.gpg >/dev/null
echo "deb [signed-by=/usr/share/keyrings/yarnkey.gpg] https://dl.yarnpkg.com/debian stable main" | sudo tee /etc/apt/sources.list.d/yarn.list
sudo apt-get update && sudo apt-get install yarn
 ```
### How to DISABLE Gnome and use Console only
```bash
sudo systemctl set-default multi-user
gnome-session-quit
```
### How to ENABLE Gnome
```bash
sudo systemctl set-default graphical
sudo systemctl start gdm3
```
### CLI mode in ubuntu
 - to switch in console mode press `ctrl + alt + f{1-6}`
 - turn off gnome `sudo service gdm stop`

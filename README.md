# Tutorials
Tuts

### How to install NODE and NPM using NodeSource
add source
```bash
curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
```
install from apt
```bash
sudo apt install nodejs
```
build tools
```bash
sudo apt install build-essential
```
### How to install YARN
 ```bash
 curl -o- -L https://yarnpkg.com/install.sh | bash
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

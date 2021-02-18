### WSL
open powershell v2 as admin and type:
```
dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
```
 - To install kali linux, download [Kali Distro](https://aka.ms/wsl-kali-linux-new), after downloading rename the file as `kali.appx` then type on powershell `Add-AppxPackage path\app_name.appx` then run kali. More to this tutorial, please follow [WSL2 installation](https://docs.microsoft.com/en-us/windows/wsl/install-win10) and [WSL Offline installation](https://docs.microsoft.com/en-us/windows/wsl/install-manual) 
 - [WSL Installation Alternative](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
 - [WSL GUI Tutorial](https://techcommunity.microsoft.com/t5/windows-dev-appconsult/running-wsl-gui-apps-on-windows-10/ba-p/1493242)

# GLFW
To compile and Execute C++ program with glfw using WSL Kali
### dependencies
copy and paste to wsl terminal
```
sudo apt-get update && \
sudo apt-get upgrade && \
sudo apt-get build-essential && \
version="3.3.2" && \
wget "https://github.com/glfw/glfw/releases/download/${version}/glfw-${version}.zip" && \
unzip glfw-${version}.zip && \
cd glfw-${version} && \
sudo apt-get install cmake xorg-dev libglu1-mesa-dev && \
sudo cmake -G "Unix Makefiles" && \
sudo make && \
sudo make install
```
### compilation and execution

```
g++ -std=c++11 -c main.cpp 
g++ main.o -o main.exec -lGL -lGLU -lglfw3 -lX11 -lXxf86vm -lXrandr -lpthread -lXi -ldl -lXinerama -lXcursor
./main.exec
```


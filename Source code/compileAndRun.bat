@echo off
g++ -o Terminally main.cpp includes/rgb.cpp ICON.res VER.res -lWinmm
Terminally.exe
pause
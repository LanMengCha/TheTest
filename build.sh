#!/bin/sh
gcc -v || sudo apt install gcc || sudo pacman -S gcc || echo "请自行安装gcc/g++...." 
sudo apt-get install libncurses5-dev || sudo pacman -S ncurses || echo "请自行安装ncurses库"
g++ -o test function.cpp main.cpp Player.cpp -lncurses
echo "完成"

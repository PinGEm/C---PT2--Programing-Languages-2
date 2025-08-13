@echo on

g++ -m64 -Wall -O2 -std=c++17 -c helper.cpp
g++ -m64 -Wall -O2 -std=c++17 -c main.cpp
g++ -m64 -Wall -O2 -std=c++17 main.o helper.o -o pt_2

pause
exit
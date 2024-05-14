## SERIAL KEY ACTIVATION

* les commandes que j'avais executé  
 g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o
 g++ -o lib/libActivation.so -shared lib/Activation.o
 sudo ldconfig
 g++ main.cpp -L/home/misa2026/mit/doc1 -lActivation -o main.exe
 ./main.exe


g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o
g++ -o lib/libActivation.so -shared lib/Activation.o

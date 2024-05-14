g++ -fPIC -c carre.cpp -o carre.o 
g++ -fPIC -c cercle.cpp -o cercle.o
g++ -fPIC -c cube.cpp -o cube.o
g++ -fPIC -c cylindre.cpp -o cylindre.o
g++ -fPIC -c point.cpp -o point.o
g++ -fPIC -c point3D.cpp -o point3D.o
g++ -fPIC -c rectangle.cpp -o rectangle.o
g++ -fPIC -c sphere.cpp -o sphere.o
g++ -o libgeometrie.so -shared *.o
mv libgeometrie.so ./../lib/libDynamic/libgeometrie.so

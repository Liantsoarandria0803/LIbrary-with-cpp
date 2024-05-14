# I Un library des formes geometriques
 on y trouve quelques attributs et methode d'une forme (Triangle, carre, rectangle,...) \\
 Pour y acceder :
  *Pour la librairie statique:
    g++ -fPIC -c carre.cpp -o carre.o 
    g++ -fPIC -c cercle.cpp -o cercle.o
    g++ -fPIC -c cube.cpp -o cube.o
    g++ -fPIC -c cylindre.cpp -o cylindre.o
    g++ -fPIC -c point.cpp -o point.o
    g++ -fPIC -c point3D.cpp -o point3D.o
    g++ -fPIC -c rectangle.cpp -o rectangle.o
    g++ -fPIC -c sphere.cpp -o sphere.o
    ar -rv libgeometrie.a *.o
    mv libgeometrie.a ./../lib/libStatic/libgeometrie.a
    après :
    g++ main.cpp -L/chemin/vers/libActivation.a -lgeometrie -mainstatic.exe
    ./mainstatic.exe

  *Pour la librairie dynamique:
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
  Et après il faut configurer les fichiers de configuration /etc/ld.so.conf en y ajoutant le chemin de la repetoire parentale de libActivation.s
  sudo ldconfig
  g++ votreMain.cpp -L/path/vers/repertoire parentale de cette librairie -lActivation -o maindynamic.exe
  ./maindynamic.exe

  ## II SERIAL KEY ACTIVATION
Un programme qui fonctionne en fonction d'un librairie d'Activation (c'est à dire le programme fonctionne avec une clée qui est dans la librairie "LibActivation")

Vous avez un programme et un fichier(dont vous devez remplisser par le serial key ) le programme fonctionne si le serial key correspond avec la clée dans le librairie Activation

* les commandes à executer pour la librairie Dynamique  
Se placer dans le repertoire SerialActivation 
 g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o
 g++ -o lib/libActivation.so -shared lib/Activation.o
 Et après il faut configurer les fichiers de configuration /etc/ld.so.conf en y ajoutant le chemin de la repetoire parentale de libActivation.so
 sudo ldconfig
 g++ main.cpp -L/home/misa2026/mit/doc1 -lActivation -o main.exe
 ./main.exe
* Les commandes à executer pour la librairie statique : 
ar -rv libActivation.a lib/ Activation.o
après :
g++ main.cpp -L/chemin/vers/libActivation.a -lActivation -mainstatic.exe
./mainstatic.exe
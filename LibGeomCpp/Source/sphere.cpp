
#include <iostream>
#include "../Header/sphere.hpp"
#include "../Header/point3D.hpp"
#define pi 3.14
using namespace std;
// constructeur de la classe cercle 
Sphere::Sphere()
{
	
}
Sphere::Sphere(Point3D O, float x)
{
	origine = O;
	rayon = x;
}
Sphere::~Sphere()
{
	
}
float Sphere::getRayon()
{
	return rayon;
}
Point3D Sphere::getOrigine()
{
	return origine;
}
void Sphere::setRayon(float nvRayon)
{
	rayon = nvRayon;
}
void Sphere::setOrigine(Point3D nvOrigine)
{
	origine = nvOrigine;
}

// Affichage des données

void Sphere::display()
{
	cout << "Sphere de: " << "centre O" ;
	origine.display();
	cout << "Rayon: " << rayon << " " << endl;
}
// Calcul d'aire
void Sphere::surface()
{
    float aire = 4*pi*rayon*rayon;
    cout << "L'aire de ce sphere est: " << aire  << endl;
}
// Calcul d'volume
void Sphere::volume()
{
    float volume = (4/3)*pi*rayon*rayon*rayon;
    cout << "Le volume de ce sphere est: " << volume << endl;
}
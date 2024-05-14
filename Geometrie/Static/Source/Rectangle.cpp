#include <iostream>
#include "../Header/Rectangle.hpp"
using namespace std;

// Constructeur de la classe Rectangle
Rectangle::Rectangle(float x, float y)
{
	longueur = x;
	largeur = y;
}
Rectangle::~Rectangle()
{

}
// Acceseur aux données
float Rectangle::getLongueur()
{
	return longueur;
}
float Rectangle::getLargeur()
{
	return largeur;
}
// Mutateur de donnée
void Rectangle::setLongueur(float newLongueur)
{
	longueur = newLongueur;
}
void Rectangle::setLargeur(float newLargeur)
{
	largeur = newLargeur;
}

// Affichage de donnée
void Rectangle::display()
{
	cout << "Rectangle de: " << "longueur = " << longueur << " cm" << " et " << "largeur: " << largeur << " cm" << endl;
}

// Calcul du perimetre
void Rectangle::perimetre()
{
    float perimetre = (longueur+largeur)*2;
    cout << "le perimetre est: " << perimetre << " cm" << endl;
} 
// Calcul d'aire
void Rectangle::aire()
{
    float aire = longueur*largeur;
    cout << "L'aire de ce rectangle est: " << aire << " cm²" << endl;
}

	

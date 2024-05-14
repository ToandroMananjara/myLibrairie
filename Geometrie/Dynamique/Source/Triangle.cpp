#include <iostream>
#include "../Header/Triangle.hpp"
using namespace std;

// Constructeur de la classe Triangle
Triangle::Triangle()
{

}
Triangle::Triangle(float x, float y, float z)
{
	coteA = x;
	coteB = y;
    coteC = z;
}
Triangle::~Triangle()
{

}
// Acceseur aux données
float Triangle::getCoteA()
{
	return coteA;
}
float Triangle::getCoteB()
{
	return coteB;
}
float Triangle::getCoteC()
{
	return coteC;
}
// Mutateur de donnée
void Triangle::setCoteA(float newCoteA)
{
	coteA = newCoteA;
}
void Triangle::setCoteB(float newCoteB)
{
	coteB = newCoteB;
}
void Triangle::setCoteC(float newCoteC)
{
	coteA = newCoteC;
}

// Affichage de donnée
void Triangle::display()
{
	cout << "Triangle de: " << "Cote A = " << coteA << " cm" << " et " << "Cote B: " << coteB << " cm" << "Cote C: " << coteC << " cm" << endl;
}

// Calcul du perimetre
void Triangle::perimetre()
{
    float perimetre = coteA + coteB + coteC;
    cout << "le perimetre est: " << perimetre << " cm" << endl;
} 
// Calcul d'aire
void Triangle::aire()
{
    /** */
}


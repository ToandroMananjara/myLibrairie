#include "../Header/carre.hpp"
#include "../Header/cercle.hpp"
#include "../Header/cylindre.hpp"
#include "../Header/point.hpp"
#include "../Header/point3D.hpp"
#include "../Header/sphere.hpp"
#include "../Header/triangle.hpp"
#include "../Header/rectangle.hpp"
#include "../Header/cube.hpp"
#include <iostream>
using namespace std;
int main()
{
    Point A(1,2);
    Cercle c1(A, 5);
    Carre carre(4);
    Cube cube(6);
    Cylindre cylindre(c1, 12);
    cube.volume();
    cylindre.display();
    cylindre.aire();
    carre.display();
    c1.display();
    return 0;
}

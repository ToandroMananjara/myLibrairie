g++ -fPIC -c Source/Carre.cpp -o Carre.o 
g++ -fPIC -c Source/Cercle.cpp -o Cercle.o
g++ -fPIC -c Source/Cube.cpp -o Cube.o
g++ -fPIC -c Source/Cylindre.cpp -o Cylindre.o
g++ -fPIC -c Source/Point.cpp -o Point.o
g++ -fPIC -c Source/Point3D.cpp -o Point3D.o
g++ -fPIC -c Source/Rectangle.cpp -o Rectangle.o
g++ -fPIC -c Source/Sphere.cpp -o Sphere.o
g++ -fPIC -c Source/Triangle.cpp -o Triangle.o
ar -rv libgeometrie.a *.o 

g++ -c ./Source/Activation.cpp -o Activation.o
g++ -fPIC -c ./Source/Activation.cpp -o Activation.o
ar -rv libactivation.a *.o 
mkdir -p /home/$(logname)/libActiveStat
cp libactivation.a /home/$(logname)/libActiveStat

g++ -c ./Source/Activation.cpp -o Activation.o
g++ -fPIC -c ./Source/Activation.cpp -o Activation.o
g++ -o libactivation.so -shared Activation.o
#g++ main.cpp -L/home/misa2026/Documents/Bens/examMrTahiry/Activation -lActivation -o main.exe

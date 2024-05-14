# Création d'un Bibliothèque 
Ce projet consiste à développer une bibliothèque simple en C++ qui gère l'activation d'un produit ou service via une clé d'activation. La bibliothèque vérifie si la clé d'activation est valide et permet une certaine quantité d'essais avant de bloquer l'accès.

## Pour le dossier Librairie Dynamique
### Compilez et exécutez ce programme avec les commandes suivantes :
sh run.sh
g++ main.cpp -L/(chemin absolu vers le dossier contenant le .so) -lactivation -o main.exe
./main.exe


## Pour le dossier Librairie Statique
### Compilation

Pour compiler le projet, vous devez d'abord générer un fichier objet à partir de `CodeActivation.cpp`, puis créer une bibliothèque partagée (`libactivation.a`) à partir de ce fichier objet. Voici les commandes à utiliser :


### Utilisation

Pour utiliser la bibliothèque dans un autre programme, vous devez inclure `CodeActivation.hpp` et lier contre `libactivation.a`. Voici un exemple de programme qui utilise la bibliothèque :


### Compilez et exécutez ce programme avec les commandes suivantes :
sh run_statique.sh
g++ main.cpp -L/home/chemin -lactivation -o teststatique.exe
./teststatique.exe


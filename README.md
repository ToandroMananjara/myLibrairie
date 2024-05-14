# Création d'un Bibliothèque 
Ce projet consiste à développer une bibliothèque simple en C++ qui gère l'activation d'un produit ou service via une clé d'activation. La bibliothèque vérifie si la clé d'activation est valide et permet une certaine quantité d'essais avant de bloquer l'accès.

## Pour le dossier Librairie Dynamique
### Compilez et exécutez ce programme avec les commandes suivantes :
* executer le fichier run.sh: sh run.sh
* creer un fichier de configuration .conf dans /etc/ld.so.conf.d/
      Par exemple: libActiveDyn.conf
* executer le commande: ldconfig
* compiler le fichier main.cpp :  g++ main.cpp -L/home/$(logname)/libActiveDyn -lactivation -o main.exe
* executer: ./main.exe

## Pour le dossier Librairie Statique
### Compilez et exécutez ce programme avec les commandes suivantes :
* executer le fichier run.sh: sh run.sh
* compiler le fichier main.cpp: g++ main.cpp -L/home/$(logname)/libActiveStat -lactivation -o main.exe
* executer: ./main.exe


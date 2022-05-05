//Fichier main.cpp
//Version 1.0
//Branch release

#include<stdio.h>
#include"TVect.h"
#include "CVecteur.h"



int main() {

	
	printf_s("Introduction POO C++\n");

	//Type Structure
	vecteur tvect;

	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5, 2, 9);

	//Type classe objet
	CVecteur cVect;

	cVect.setX(5);
	cVect.setY(2);
	cVect.setZ(0);


	printf_s("X:%d", cVect.getX());
	printf_s("Y:%d", cVect.getY());
	printf_s("Z:%d", cVect.getZ());






	return 0;
}


//Fichier main.cpp
//Version 1.0
//Branch release

#include<stdio.h>
#include"TVect.h"
#include "CVecteur.h"

//#define TAILLE 255 c'est une macro

//Creation d'une constante TAILLE en memoire
//const int TAILLE = 255;


void incI();

static int fct(int n_val);




int main() {

	
	printf_s("Introduction POO C++\n");

	//Type Structure
	vecteur tvect;

	tvect.n_x = 0;
	tvect.n_y = 0;
	tvect.n_z = 0;

	initVecteur(&tvect, 5, 2, 9);

	//Type classe objet
	
	CVecteur cVect;//Appel du constructeur sans parametres

	CVecteur cVect1(9);

	CVecteur cVect2(0, 0, 0);//Appel du constructeur avec parametres

	
	cVect.setX(5);
	cVect.setY(2);
	cVect.setZ(0);


	printf_s("X:%d", cVect.getX());
	printf_s("Y:%d", cVect.getY());
	printf_s("Z:%d", cVect.getZ());


	
	//Variable static
	incI();
	incI();
	incI();


	fct(5);



	return 0;
}


//Static

void incI() {

	//variable static
	static int n_i = 0;
	n_i = n_i + 1;
	printf_s("%d\n", n_i);
}


static int fct(int n_val) {

	return n_val;
}


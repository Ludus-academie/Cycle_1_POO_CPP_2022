#pragma once


class CVecteur
{

private :


	//Donnes membres de la classe
	int m_nX;
	int m_nY;
	int m_nZ;


public :


	//fonctions membres
	
	//Un constructeur
	CVecteur();


	//Set

	void setX(const int nX); //ici const ne peut pas modifier l'argument
	void setY(const int nY);
	void setZ(const int nZ);

	//Get
	int getX()const; //ici const n'a pas le droit de modifier la donnee membre
	int getY()const;
	int getZ()const;





};


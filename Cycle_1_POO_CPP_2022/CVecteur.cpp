#include "CVecteur.h"

CVecteur::CVecteur()
{
	this->m_nX = 0;
	this->m_nY = 0;
	this->m_nZ = 0;

}

CVecteur::CVecteur(int nX, int nY, int nZ):m_nX(nX),m_nY(nY),m_nZ(nZ)
{

	/*this->m_nX = nX;
	this->m_nY = nY;
	this->m_nZ = nZ;*/

}

void CVecteur::setX(const int nX)
{
	this->m_nX = nX;
}

void CVecteur::setY(const int nY)
{
	this->m_nY = nY;
}

void CVecteur::setZ(const int nZ)
{
	
	this->m_nZ = nZ;
}

int CVecteur::getX() const
{
	return this->m_nX;
}

int CVecteur::getY() const
{
	return this->m_nY;
}

int CVecteur::getZ() const
{
	return this->m_nZ;
}

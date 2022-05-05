#include "CVecteur.h"

CVecteur::CVecteur()
{
	this->m_nX = 0;
	this->m_nY = 0;
	this->m_nZ = 0;

}

void CVecteur::setX(int nX)
{
	this->m_nX = nX;
}

void CVecteur::setY(int nY)
{
	this->m_nY = nY;
}

void CVecteur::setZ(int nZ)
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

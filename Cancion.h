#ifndef CANCION_H
#define CANCION_H

#include <iostream>
using namespace std;

class Cancion
{
	private:
		string sNombre;
		string sDisco;
		int iID;
	public:
		Cancion();
		Cancion(string, string, int);
		string getNombre();
		string getDisco();
		int getID();
		void setNombre(string);
		void setDiscto(string);
		void setID(int);
		void toString();
};

Cancion::Cancion()
{
	sNombre = "N/A";
	sDisco = "N/A";
	iID = -1;
}

Cancion::Cancion(string sN, string sD, int iID)
{
	sNombre = sN;
	sDisco = sD;
	this -> iID = iID;
}

string Cancion::getNombre()
{
	return sNombre;
}

string Cancion::getDisco()
{
	return sDisco;
}

int Cancion::getID()
{
	return iID;
}

void Cancion::setNombre(string sN)
{
	sNombre = sN;
}

void Cancion::setDiscto(string sD)
{
	sDisco = sD;
}

void Cancion::setID(int iID)
{
	this -> iID = iID;
}

void Cancion::toString()
{
	cout << "Nombre: " << sNombre << endl;
	cout << "Disco: " << sDisco << endl;
	cout << "ID: " << iID << endl;
}

#endif

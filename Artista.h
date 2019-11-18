#ifndef ARTISTA_H
#define ARTISTA_H

#include <iostream>
#include "Cancion.h"
using namespace std;

const int iMaxCanciones = 50;

class Artista
{
	private:
		int iNumCanciones;
		Cancion listaCanciones[iMaxCanciones];
		string sNombre;
		string sTipoMusica;
	public:
		Artista();
		Artista(string, string);
		string getNombre();
		string getTipoMusica();
		void setNombre(string);
		void setTipoMusica(string);
		void toString();
		bool agregaCancion(Cancion);
		Cancion buscaCancionPorID(int);
		void reemplazaCancion(Cancion, int);
};

Artista::Artista()
{
	iNumCanciones = 0;
	sNombre = "N/A";
	sTipoMusica = "N/A";
}

Artista::Artista(string sN, string sT)
{
	sNombre = sN;
	sTipoMusica = sT;
}

string Artista::getNombre()
{
	return sNombre;
}

string Artista::getTipoMusica()
{
	return sTipoMusica;
}

void Artista::setNombre(string sN)
{
	sNombre = sN;
}

void Artista::setTipoMusica(string sT)
{
	sTipoMusica = sT;
}

void Artista::toString()
{
	cout << "Nombre: " << sNombre << endl;
	cout << "Tipo de Musica: " << sTipoMusica << endl;
	cout << "Canciones:" << endl;
	for (int i = 0; i < iNumCanciones; ++i)
	{
		listaCanciones[i].toString();
	}
}

bool Artista::agregaCancion(Cancion c)
{
	if (iNumCanciones < iMaxCanciones)
	{
		listaCanciones[iNumCanciones] = c;
		++iNumCanciones;
		return true;
	}
	else
	{
		return false;
	}
}

Cancion Artista::buscaCancionPorID(int iID)
{
	for (int i = 0; i < iNumCanciones; ++i)
	{
		if (listaCanciones[i].getID() == iID)
		{
			return listaCanciones[i];
		}
	}
	return Cancion();
}

void Artista::reemplazaCancion(Cancion c, int iID)
{
	for (int i = 0; i < iNumCanciones; ++i)
	{
		if (listaCanciones[i].getID() == iID)
		{
			listaCanciones[i] = c;
		}
	}
}

#endif

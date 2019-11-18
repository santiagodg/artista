#include <iostream>
#include "Artista.h"
#include "Cancion.h"
using namespace std;

int main()
{
	string sNombreArtista;
	string sTipoMusica;
	cout << "Ingrese el nombre del artista: ";
	cin >> sNombreArtista;
	cout << "Ingrese el tipo de musica: ";
	cin >> sTipoMusica;

	Artista artista(sNombreArtista, sTipoMusica);

	char cOpcion = '0';
	while (cOpcion != 'e')
	{
		cout << "MENU" << endl;
		cout << "a) Agrega cancion" << endl;
		cout << "b) Busca cancion por ID" << endl;
		cout << "c) Reemplaza cancion" << endl;
		cout << "d) Muestra datos del artista" << endl;
		cout << "e) Finalizar" << endl;
		cout << "Ingrese la opcion: ";
		cin >> cOpcion;

		switch (cOpcion)
		{
			case 'a':
			{
				string sNombreCancion;
				string sDisco;
				int iID;

				cout << "Ingrese el nombre de la cancion: ";
				cin >> sNombreCancion;
				cout << "Ingrese el nombre del disco: ";
				cin >> sDisco;
				cout << "Ingrese el identificador: ";
				cin >> iID;
				Cancion cancionDefault;
				int iIDDefault = cancionDefault.getID();
				while (artista.buscaCancionPorID(iID).getID() != iIDDefault)
				{
					cout << "Ingrese otro identificador: ";
					cin >> iID;
				}

				Cancion c(sNombreCancion, sDisco, iID);
				if (artista.agregaCancion(c))
				{
					cout << "Se agrego la cancion con exito." << endl;
				}
				else
				{
					cout << "No se pudo agregar cancion." << endl;
				}

				break;
			}
			case 'b':
			{
				int iID;
				cout << "Ingrese el identificador de la cancion: ";
				cin >> iID;
				artista.buscaCancionPorID(iID).toString();
				break;
			}
			case 'c':
			{
				string sNombreCancion;
				string sDisco;
				int iID;

				cout << "Ingrese el nombre de la cancion: ";
				cin >> sNombreCancion;
				cout << "Ingrese el nombre del disco: ";
				cin >> sDisco;
				cout << "Ingrese el identificador: ";
				cin >> iID;
				Cancion cancionDefault;
				int iIDDefault = cancionDefault.getID();
				while (artista.buscaCancionPorID(iID).getID() == iIDDefault)
				{
					cout << "Ingrese otro identificador: ";
					cin >> iID;
				}

				Cancion c(sNombreCancion, sDisco, iID);
				artista.reemplazaCancion(c, iID);

				break;
			}
			case 'd':
			{
				artista.toString();
				break;
			}
			case 'e':
			{
				break;
			}
			default:
			{
				cout << "Ingrese otra opcion: ";
				cin >> cOpcion;
				break;
			}
		}
	}
	return 0;
}
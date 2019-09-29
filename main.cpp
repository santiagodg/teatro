#include <iostream>
#include "Asiento.h"
using namespace std;

int main()
{
	Asiento asientos[8][8];

	char cOpcion = ' ';
	while (cOpcion != 'd')
	{
		cout << "MENU" << endl;
		cout << "a) Reservar lugar" << endl;
		cout << "b) Consultar lugar" << endl;
		cout << "c) Mostrar lugares del teatro" << endl;
		cout << "d) Terminar" << endl;
		cout << "Ingrese su opcion: ";
		cin >> cOpcion;

		switch (cOpcion)
		{
			case 'a':
			{
				char cFila;
				int iAsiento;

				cout << "Ingrese la fila: ";
				cin >> cFila;
				cout << "Ingrese el asiento: ";
				cin >> iAsiento;

				if (asientos[cFila - 65][iAsiento - 1].getOcupado())
				{
					cout << "Asiento ocupado" << endl;
				}
				else
				{
					string sNombre;
					cout << "Ingrese el nombre: ";
					cin >> sNombre;

					asientos[cFila - 65][iAsiento - 1].setNombre(sNombre);
					asientos[cFila - 65][iAsiento - 1].setOcupado(true);
				}

				break;
			}

			case 'b':
			{
				char cFila;
				int iAsiento;

				cout << "Ingrese la fila: ";
				cin >> cFila;
				cout << "Ingrese el asiento: ";
				cin >> iAsiento;

				if (asientos[cFila - 65][iAsiento - 1].getOcupado())
				{
					string sNombre;
					sNombre = asientos[cFila - 65][iAsiento - 1].getNombre();
					cout << sNombre << endl;
				}
				else
				{
					cout << "Asiento desocupado" << endl;
				}

				break;
			}

			case 'c':
			{
				cout << "  1 2 3 4 5 6 7 8" << endl;
				for (int i = 0; i < 8; ++i)
				{
					cout << char(65 + i);
					for (int j = 0; j < 8; ++j)
					{
						if (asientos[i][j].getOcupado())
						{
							cout << " *";
						}
						else
						{
							cout << " -";
						}
					}
					cout << endl;
				}
				break;
			}

			case 'd': break;

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

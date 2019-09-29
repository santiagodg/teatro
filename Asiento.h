// Asiento.h
// Santiago Díaz Guevara
// A01252554
// Programación Orientada a Objetos
// Actividad 4

#ifndef ASIENTO_H
#define ASIENTO_H

#include <iostream>
using namespace std;

class Asiento
{
	private:
		bool bOcupado;
		string sNombre;

	public:
		Asiento();
		bool getOcupado();
		string getNombre();
		void setOcupado(bool);
		void setNombre(string);
		void toString();
};

Asiento::Asiento()
{
	bOcupado = false;
	sNombre = "N/A";
}

bool Asiento::getOcupado()
{
	return bOcupado;
}

string Asiento::getNombre()
{
	return sNombre;
}

void Asiento::setOcupado(bool bO)
{
	bOcupado = bO;
}

void Asiento::setNombre(string sN)
{
	sNombre = sN;
}

void Asiento::toString()
{
	cout << "Ocupado: ";
	if (bOcupado)
	{
		cout << "Verdadero" << endl;
	}
	else
	{
		cout << "Falso" << endl;
	}
	cout << "Nombre: " << sNombre << endl;
}

#endif

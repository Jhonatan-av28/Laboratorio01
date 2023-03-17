#pragma once
#include<string>
#include "Tablero.h"

using namespace std;


class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string TipoBorde;
	string imagenFondo;
	int Puntaje;
	int MejorPuntaje;
	int nivel;
	int numeroVidas;
	///Tablero tablero;
	Tablero* tablero= new Tablero();
	//Tablero* tablero = nullptr;

 public:
	Escenario() {
		puntaje = 0;
		//tablero = new Tablero();
	}
	void setNombre(string _nombre) { nombre = nombre; }
	string getNombre() { return nombre; }

	void setTablero(Tablero _tablero) { tablero = _tablero;}
	Tablero getTablero() { return tablero; }

};

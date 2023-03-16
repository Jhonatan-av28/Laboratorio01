#pragma once
#include<iostream>
#include<string>

using namespace std;


class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string TipoFondo;
	string ImagenFondo;
	int Puntaje;
	int MejorPuntaje;
	int nivel;
	int numeroVidas;
	Tablero* tablero= nullptr;
public:
	Escenario() {
		puntaje = 0;
		tablero = new Tablero();
	}
	void setNombre(string _nombre) { nombre = nombre; }
	string getNombre() { return nombre; }

	void setTablero(Tablero _tablero) { tablero = _tablero;}
	Tablero getTablero() { return tablero; }

};

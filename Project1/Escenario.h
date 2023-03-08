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
public:
	void setNombre(string _nombre) { nombre = nombre; }
	string getNombre() { return nombre; }

	void setTablero(tablero _tablero) { tablero = _tablero;}
	Tablero getTablero()

};

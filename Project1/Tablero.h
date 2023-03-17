#pragma once
#include"Bloque.h"

using namespace std;


class Tablero
{
private:
	string nombre;
	int filaImiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	//Bloque bloqueSiguiente;

public:
	Tablero() {
		nombre = "Tablero sin nombre";
     }
	
	void inicializarTablero();

	bool rotarBloque();
	bool bajarBloque();
	bool moverBloque(int dirreccion);

	//Metodos accesores
	void getNombre(string _nombre) { nombre; _nombre; }
	string getNombre() { return nombre; }

};

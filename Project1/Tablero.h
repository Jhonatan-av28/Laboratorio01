#pragma once
#include"Bloque.h"

using namespace std;


class Tablero
{
private:
	string nombre;
	int filaLimiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	//Bloque bloqueSiguiente;

public:
	Tablero() {
		nombre = "Tablero sin nombre";
     }
	
	void incializarTablero();

	bool rotarBloque();
	bool bajarBloque();
	bool moverBloque(int direccion);

	//Metodos accesores
	void setNombre(string _nombre) { nombre= _nombre; }
	string getNombre() { return nombre; }

};

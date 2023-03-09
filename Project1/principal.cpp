#include <iostream>
#include "Escenario.h"
using namespace std;


int main() {
	cout << "Hola bienvenido al mundo de Tetris." << endl;

     Escenario escenarioInicial;

	escenarioInicial.getTablero().getNombre() << endl;
	cout << "El nombre del tablero que tiene este escenario es: " << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	escenarioInicial.setNombre("Inicia la historia Tetris");
	//Implementar la parte de 
	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;

	int Tablero;
	{
		cout << "Espacio donde se almacenan las figuras" << endl;
	}
	
	
	int Bloques;
	{
		cout << "Son los cuales depende todo el juego y dando asi la vida al mismo " << endl;
	}
	
	int Puntuacion;
	{
		cout << "Lugar donde se guardan todos los puntos que gana el usuario" << endl;
	}

	int Escenario;
	{
		cout << "Espacio que contrendra bloques que esten por ingresar,puntuacion,nivel,opciones" << endl;
	}


	 
	

}

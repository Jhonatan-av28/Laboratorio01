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
}
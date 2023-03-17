#include <iostream>
#include "Escenario.h"
#include "Bloque.h"
#include "BloqueAvanzado.h"
#include "BloqueConvencional.h"

using namespace std;


int main() {
	//int numeroCuenta = 120493243;
	// int*pNumeroCuenta = nullptr;
	
	//float cotizacionFDolar = 6.96f; 
	//bool posibleCambio = true;
	

	//cout<< "valor de la variable numeroCuenta: " << numeroCuenta <<endl;
	//cout<< direecion de memoria de la variable numeroCuenta: " << &numeroCuenta << endl;

	// pNumeroCuenta = &numeroCuenta;

	//cout << "direccion de memoria de la variable pNumeroCuenta: " << pNumeroCuenta << endl;
	//cout << "valor almacenado en la direccion que apunta pNumeroCuenta: " << *pNumeroCuenta << endl;
	//*pNumeroCuenta = 10;

	//cout << "valor almacenado en la direccion que apunta pNumeroCuenta: " << *pNumeroCuenta << endl;
	//cout << "valor de la variable numeroCuenta: " << numeroCuenta << endl;
	//cout << "direccion de memoria de la variable numeroCuenta: " << &numeroCuenta << endl;

	//Bloque objetoBloque;

	//objetoBloque.mostrar();
	BloqueAvanzado* objetoBloqueAvanzado01;
	//objetoBloqueAvanzado.rotar(10.5f);
	objetoBloqueAvanzado01->rotar(10.5f);

	//BloqueConvencional objetoBloqueConvencional;
	BloqueConvencional* objetoBloqueConvencional = nullptr;
	objetoBloqueConvencional = new BloqueConvencional();
	//objetoBloqueConvencional.rotar(90.3f);
	objetoBloqueConvencional->rotar(90.3f);

	BloqueAvanzado objetoBloqueAvanzado02;

	cout << "Se han creado: " << objetoBloqueAvanzado02.getCantidadBloques() << " objetos Bloque" << endl;
	
	cout << "Hola bienvenido al mundo de Tetris." << endl;

     Escenario escenarioInicial;

	 escenarioInicial.setNombre("Inicia la historia tetris");
	 cout << "El nombre del tablero que tiene este escenario es:" << (*escenarioInicial.getTablero()).getNombre() << endl;
	 //cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	 /*
	 string temp = "Inicia la historia tetris";
	 escenarioInicial.setNombre(temp);

	 cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	 */
}

	

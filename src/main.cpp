//============================================================================
// Name        : Listas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h"
using namespace std;
using namespace ITLA;

Nodo* cancion1 = new Nodo("Crimen");
Nodo* cancion2 = new Nodo("Persiana Americana");
Nodo* cancion3 = new Nodo("Adios");
Nodo* cancion4 = new Nodo("Puente");
Nodo* cancion5 = new Nodo("Hola");
Lista* lista = new Lista();



void recorrerLista()
{
	Nodo* i = lista -> getPrimer();
	while(i != NULL)
	{
		cout << i -> getNombre() << endl;
		i = i -> getSiguiente();
	}

}
int main()
{
	lista -> agregar(cancion1);
	lista -> agregar(cancion2);
	lista -> agregar(cancion3);
	lista -> agregar(cancion4);

//	Nodo* nodo = lista -> get(3);
//	if(nodo != NULL)
//	{
//		cout << nodo ->getNombre() << endl;
//	}else
//	{
//		cout << "Posición no encontrada" << endl;
//	}
	cout << " ================== ANTES DE INSERCION ==================" << endl<< endl;
	recorrerLista();
	lista -> agregar(cancion5,1);
	cout << " ================== DESPUES DE INSERCION ==================" << endl << endl;
	recorrerLista();
	return 0;
}

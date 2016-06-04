/*
 * Lista.cpp
 *
 *  Created on: Jun 4, 2016
 *      Author: raydelto
 */

#include "Lista.h"
#include <cstdlib>

namespace ITLA {

	Lista::Lista() : _primer(NULL) , _ultimo(NULL)
	{


	}

	void Lista::agregar(Nodo* nodo)
	{
		if( _primer == NULL ) //Si la lista está vacía
		{
			_primer = nodo;
			_ultimo = nodo;
		}else  // Si la lista no está vacía
		{
			_ultimo -> setSiguiente(nodo);
			_ultimo = nodo;
		}
	}

	Nodo* Lista::get(int indice)
	{
		int i = 0;
		Nodo* iterador = _primer;

		while(iterador != NULL)
		{
			if (i == indice)
			{
				return iterador;
			}else
			{
				iterador = iterador -> getSiguiente();
				i++;
			}
		}
		return NULL;
	}

	bool Lista::agregar(Nodo* nodo, int indice)
	{
		bool exito = true;
		Nodo* referencia = get(indice);
		if(referencia == NULL)
		{
			return false;
		}
		nodo -> setSiguiente(referencia -> getSiguiente());
		referencia -> setSiguiente(nodo);
		return exito;
	}

	Lista::~Lista()
	{

	}

} /* namespace ITLA */

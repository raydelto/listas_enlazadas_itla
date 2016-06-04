/*
 * Lista.h
 *
 *  Created on: Jun 4, 2016
 *      Author: raydelto
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Nodo.h"
namespace ITLA
{

	class Lista
	{
	private:
		Nodo* _primer;
		Nodo* _ultimo;
	public:
		Nodo* get(int indice);
		void agregar(Nodo* nodo);
		bool agregar(Nodo* nodo, int indice);
		Lista();
		virtual ~Lista();
		Nodo* getPrimer()  {	return _primer;	}
};

} /* namespace ITLA */

#endif /* LISTA_H_ */

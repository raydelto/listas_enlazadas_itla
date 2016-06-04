/*
 * Nodo.cpp
 *
 *  Created on: Jun 4, 2016
 *      Author: raydelto
 */

#include "Nodo.h"
#include <cstdlib>

namespace ITLA {

	Nodo::Nodo(std::string nombre) : _siguiente(NULL) ,  _nombre(nombre)
	{


	}

	Nodo::~Nodo()
	{

	}

} /* namespace ITLA */

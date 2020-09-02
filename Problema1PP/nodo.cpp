#include "nodo.h"


nodo::nodo(int dato)
{
	this->siguiente = NULL;
	this->dato = dato;
}

void nodo::setDato(int dato)
{
	this->dato = dato;
}

int nodo::getDato()
{
	return this->dato;
}

void nodo::setSiguiente(nodo* s)
{
	this->siguiente = s;
}

nodo* nodo::getSiguiente()
{
	return this->siguiente;
}

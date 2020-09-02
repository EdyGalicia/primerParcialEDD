#include "lista.h"

lista::lista() {
	this->cabeza = NULL;
	this->cola = NULL;
}

void lista::agregar(nodo* nuevo)
{
	if (cabeza == NULL)
	{
		this->cabeza = nuevo;
		this->cola = nuevo;
		nuevo->setSiguiente(NULL);
	}
	else
	{
		this->cola->setSiguiente(nuevo);
		this->cola = nuevo;
	}
}

void lista::imprimir()
{
	if (!vacia())
	{
		cout << "\n";
		nodo* actual = this->cabeza;
		while (actual!=NULL)
		{
			cout << "Dato: " << actual->getDato() << "-> ";

			actual = actual->getSiguiente();
		}
	}
	else
	{
		cout << "Lista vacia"<<endl;
	}
}

bool lista::vacia()
{
	return cabeza == NULL;
}

//nodo lista::getCabeza()
//{
//	return cabeza;
//}

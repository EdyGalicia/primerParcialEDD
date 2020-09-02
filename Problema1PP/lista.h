#pragma once
#include"nodo.h"

using namespace std;

class lista
{
public:
	lista();
	void agregar(nodo* nuevo);
	void imprimir();
	bool vacia();
	nodo getCabeza();
private:
	nodo* cabeza, * cola;
};


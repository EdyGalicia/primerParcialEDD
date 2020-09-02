#pragma once
#include<iostream>
using namespace std;

class nodo
{
public:
	nodo(int dato);
	void setDato(int dato);
	int getDato();
	void setSiguiente(nodo* s);
	nodo* getSiguiente();
private:
	int dato;
	nodo* siguiente;
};


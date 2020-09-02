


// SE DEJO UN ARREGLO PEQUENO PARA LINIALIZAR es de 2x2

#include <iostream>
#include<string>
#include"lista.h"
#include"nodo.h"

using namespace std;

typedef int arreglo[2][2];

void menu();
void opcion1(arreglo);
void opcion2(arreglo);

int main()
{
    menu();
}


void menu() {
    int opc = 0;
    arreglo m;
    do
    {
        cout << "\n\n1. Ingresar dato" << endl;
        cout << "2. Linealizar" << endl;

        cout << "3. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            opcion1(m);
            break;
        case 2:
            opcion2(m);
            break;
        default:
            break;
        }
    } while (opc != 3);
}

void opcion1(arreglo m) {
    int x = 0;
    int y = 0;
    int dato = 0;
    cout << "\nIngrese posicion x:";
    cin>> x;
    cout << "Ingrese posicion y: ";
    cin >> y;
    cout << "Ingrese dato (entero): ";
    cin >> dato;
    m[x][y] = dato;
}

void opcion2(arreglo m) {

    lista* l = new lista();


    //int filas = (sizeof(m) / sizeof(m[0]));
    //int columnas = (sizeof(m[0]) / sizeof(m[0][0]));
    

    //ROW MAJOR
    cout << "La matriz es:";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (m[i][j] != NULL)
            {
                nodo* n = new nodo(m[i][j]);
                l->agregar(n);
            }
            
        }
    }
    l->imprimir();
}
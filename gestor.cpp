#include "gestor.h"
#include <iostream>
#include <windows.h>

using namespace std;

Gestor::Gestor()
{
    //ctor
}

void Gestor::imprimirCabecera()
{
    cout << "**********************************" << endl;
    cout << "*  Gestor de listado de Compras  *" << endl;
    cout << "*\t By: Dariel Cruz\t *" << endl;
    cout << "**********************************\n\n" << endl;
}

void Gestor::imprimirMenu()
{
    cout << "1- Listar articulos" << endl;
    cout << "2- Agregar articulo" << endl;
    cout << "3- Eliminar articulo" << endl;
    cout << "4- Salir\n" << endl;
    cout << "Elija una opcion => ";
}


Articulo* Gestor::crearArticulo()
{
    cout << "\nAgregar articulo" << endl;
    string nombre;
    int cantidad;
    cout << "\nEscriba el nombre: " ;
    cin >> nombre;
    cout << "Escriba la cantidad: " ;
    cin >> cantidad;

    Articulo* articulo = new Articulo(nombre, cantidad);
    return articulo;
}

void Gestor::iniciar(Lista* lista)
{
    system("cls");
    int opcion;
    imprimirCabecera();
    imprimirMenu();
    cin >> opcion;
    switch(opcion)
    {
    case 1:
        system("cls");
        imprimirCabecera();
        lista -> mostrarArticulos();
        iniciar(lista);
        break;
    case 2:
        system("cls");
        imprimirCabecera();
        lista -> agregarArticulo(crearArticulo());
        iniciar(lista);
        break;
    case 3:
        int indice;
        cout << "Ingrese el numero del articulo a eliminar: ";
        cin >> indice;
        lista -> eliminarArticulo(indice, lista);
        iniciar(lista);
        break;
    case 4:
        break;
    default:
        iniciar(lista);
    }
}

Gestor::~Gestor()
{
    //dtor
}

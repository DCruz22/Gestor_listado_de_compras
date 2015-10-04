#include "articulo.h"

#include "string"

using namespace std;

Articulo::Articulo(string nombre, int cantidad)
{
    this -> nombre = nombre;
    this -> cantidad = cantidad;
    this -> siguiente = NULL;
}
void Articulo::setSiguiente(Articulo* siguiente)
{
    this -> siguiente = siguiente;
}

Articulo* Articulo::getSiguiente()
{
    return siguiente;
}

void Articulo::setNombre(string nombre)
{
    this -> nombre = nombre;
}

void Articulo::setCantidad(int cantidad)
{
    this -> cantidad = cantidad;
}

string Articulo::getNombre()
{
    return this -> nombre;
}

int Articulo::getCantidad()
{
    return this -> cantidad;
}

Articulo::~Articulo()
{
    //dtor
}

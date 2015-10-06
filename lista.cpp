#include "lista.h"
#include "articulo.h"
#include "iostream"

using namespace std;

Lista::Lista()
{
    primero = NULL;
    ultimo = NULL;
}

void Lista::agregarArticulo(Articulo* articulo)
{
    if(primero == NULL)
    {
        primero = articulo;
        ultimo = articulo;
    }else{
        ultimo -> setSiguiente(articulo);
        ultimo = articulo;
    }
}
Articulo* Lista::getPrimero()
{
    return this -> primero;
}

void Lista::setPrimero(Articulo* primero)
{
    this -> primero = primero;
}

Articulo* Lista::getUltimo()
{
    return this -> ultimo;
}

void Lista::setUltimo(Articulo* ultimo)
{
    this -> ultimo = ultimo;
}

void Lista::eliminarArticulo(Lista* lista)
{
    Lista* temp = new Lista();
    Articulo* i = this -> getPrimero();

    if(i != NULL){
        mostrarArticulos();
        int contador = 1, indice = 0;
        cout << "Ingrese el numero del articulo a eliminar: ";
        cin >> indice;
        while(i != NULL){
            if(indice != contador){
                temp -> agregarArticulo(i);
            }
            i = i -> getSiguiente();
            contador++;
        }
        *lista = *temp;
        delete temp;
        cout << "\n--Articulo Eliminado. Presione ENTER para regresar el menu principal--\n" << endl;
        cin.ignore();
        cin.get();
    }else{
        cout << "No hay articulos a borrar" << endl;
        cout << "--Presione ENTER para regresar el menu principal--\n" << endl;
        cin.ignore();
        cin.get();
    }
}

void Lista::mostrarArticulos()
{
    Articulo* i = this -> getPrimero();
    cout << "Listado de compras:" << endl << endl;
    if(i != NULL)
    {
        int contador = 1;
        while(i != NULL)
        {
            cout << contador << "- " << i -> getNombre() << " " << i -> getCantidad() << endl;
            i = i -> getSiguiente();
            contador++;
        }
    }else{
        cout << "No hay ningun articulo en la lista.\n" << endl;
    }
}

Lista::~Lista()
{
    //dtor
}

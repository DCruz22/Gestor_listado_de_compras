#ifndef LISTA_H
#define LISTA_H

#include "articulo.h"
#include "lista.h"

class Lista
{
    public:
        Lista();
        ~Lista();
        void agregarArticulo(Articulo* articulo);
        void eliminarArticulo(Lista* lista);
        void mostrarArticulos();
        Articulo* getPrimero();
        void setPrimero(Articulo* primero);
        Articulo* getUltimo();
        void setUltimo(Articulo* ultimo);
    protected:
    private:
        Articulo* primero;
        Articulo* ultimo;
};

#endif // LISTA_H

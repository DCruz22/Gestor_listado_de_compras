#ifndef GESTOR_H
#define GESTOR_H

#include "lista.h"
#include "articulo.h"
#include "string"

class Gestor
{
    public:
        Gestor();
        virtual ~Gestor();
        void iniciar(Lista* lista);
        void imprimirCabecera();
        void imprimirMenu();
        Articulo* crearArticulo();
    protected:
    private:
};

#endif // GESTOR_H

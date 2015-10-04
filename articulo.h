#ifndef ARTICULO_H
#define ARTICULO_H

#include "string"

class Articulo
{
    public:
        Articulo(std::string nombre, int cantidad);
        virtual ~Articulo();
        void setNombre(std::string nombre);
        void setCantidad(int cantidad);
        std::string getNombre();
        int getCantidad();
        void setSiguiente(Articulo* siguiente);
        Articulo* getSiguiente();
    protected:
    private:
        Articulo* siguiente;
        std::string nombre;
        int cantidad;
};

#endif // ARTICULO_H

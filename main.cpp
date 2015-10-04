#include <iostream>
#include <cstdlib>
#include "lista.h"
#include "gestor.h"

using namespace std;

int main()
{
    Gestor* gestor = new Gestor();
    Lista* lista = new Lista();
    gestor -> iniciar(lista);
    delete lista;
    return 0;
}

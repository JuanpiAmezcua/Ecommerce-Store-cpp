#ifndef TIENDA_H
#define TIENDA_H

#include "inventario.h"
#include "carrito.h"

class Tienda
{
    private:
    Inventario inventario;
    Carrito carrito;

    public:
    Tienda();
    void cargar_inventario();
    void menu();

};
#endif
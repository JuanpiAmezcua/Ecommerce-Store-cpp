#ifndef CARRITO_H
#define CARRITO_H

#include <vector>
#include "producto.h"

using std::vector;

class Carrito
{
    private:
    vector <Producto> productos;
    vector <int> cantidades;

    public:
    Carrito();
    void agregar(const Producto &p, int cantidad);
    double calcular_total()const;
    void imprimir() const;
    void vaciar();
    bool vacio() const;
};
#endif
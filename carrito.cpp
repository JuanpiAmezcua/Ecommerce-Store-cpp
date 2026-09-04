#include <iostream>
#include "carrito.h"

using std::cout;
using std::endl;

Carrito::Carrito(){}

void Carrito::agregar(const Producto &p, int cantidad)
{
    productos.push_back(p);
    cantidades.push_back(cantidad);
}

double Carrito::calcular_total()const
{
    double total = 0.0;
    for (size_t i = 0; i < productos.size(); ++i)
        total += cantidades[i] * productos[i].get_precio_venta();

    return total;
}
void Carrito::imprimir()const
{
    cout << "\n--- Carrito ---\n";
    if (productos.empty()) 
    {
        cout << "(vacío)\n";
        return;
    }
    for (size_t i = 0; i < productos.size(); ++i)
    {
        cout << cantidades[i] << "x";
        productos[i].imprimir();
    }
    cout << "Total = $" << calcular_total() << endl;
}

void Carrito::vaciar()
{
    productos.clear();
    cantidades.clear();
}

bool Carrito::vacio()const
{
   return productos.empty();
}
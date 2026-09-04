#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <string>
#include "producto.h"

using std::vector;
using std::string;

class Inventario
{
    private: 
    vector<Producto> productos;

    public:
    Inventario();
    void cargar();
    Producto* buscar(const string &id);
    bool reducir_stock(const string &id, int cantidad);
    void imprimir() const;
};
#endif 
#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using std::string;

class Producto
{
    private:
    string id;
    string desc;
    double precio_venta;
    int stock;

    public:
    Producto();
    Producto(string id, string desc, double precio_venta, int stock);
    string get_id() const;
    string get_desc() const;
    double get_precio_venta() const;
    int get_stock() const;
    void set_stock(int cantidad);
    void imprimir() const;
};
#endif 
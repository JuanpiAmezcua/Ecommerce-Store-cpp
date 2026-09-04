#include <iostream>
#include "producto.h"

using std::cout;
using std::endl;

Producto::Producto()
{
    id = "";
    desc = "";
    precio_venta = 0.0;
    stock = 0;
}

Producto::Producto(string id_p, string desc_p, double precio_p, int stock_p)
{
    id = id_p;
    desc = desc_p;
    precio_venta = precio_p;
    stock = stock_p;
}

string Producto::get_id()const
{
    return id;
}

string Producto::get_desc()const
{
    return desc;
}

double Producto::get_precio_venta()const
{
    return precio_venta;
}

int Producto::get_stock()const
{
    return stock;
}

void Producto::set_stock(int cantidad)
{
    stock = cantidad;
}

void Producto::imprimir()const
{
    cout<<id<<" - "<<desc<<" - $"<<precio_venta<<" - Stock: "<<stock<<endl;
}
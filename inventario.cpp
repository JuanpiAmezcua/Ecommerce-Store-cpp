#include <iostream>
#include <fstream>
#include <sstream>
#include "inventario.h"

using std::ifstream;
using std::stringstream;
using std::string;
using std::stoi;
using std::stod;

Inventario::Inventario(){}

void Inventario::cargar()
{
    ifstream f("inventario.csv");
    string linea;
    while (getline(f,linea))
    {
        if(linea.empty()) continue;
        stringstream ss(linea);
        string id, desc, precio_s, stock_s;
        getline(ss, id, ',');
        getline(ss, desc, ',');
        getline(ss, precio_s, ',');
        getline(ss, stock_s, ',');
        double precio = stod(precio_s);
        int stock = stoi(stock_s);
        productos.emplace_back(id, desc, precio, stock);
    }

    f.close();
}

Producto* Inventario::buscar(const string &id)
{
    for (auto &p : productos)
        if (p.get_id() == id)
            return &p;
    return NULL;
}

bool Inventario::reducir_stock(const string &id, int cantidad)
{
    Producto* p = buscar(id);
    if (!p) return false;
    if (p->get_stock() < cantidad) return false;
    p->set_stock(p->get_stock() - cantidad);
    return true;
}

void Inventario::imprimir()const
{
    for (const auto &p : productos)
        p.imprimir();
}
#include <iostream>
#include "tienda.h"

using std::cout;
using std::cin;
using std::endl;

Tienda::Tienda(){}

void Tienda::cargar_inventario()
{
    inventario.cargar();
}

void Tienda::menu()
{
    int opcion = 0;
    while (opcion != 4)
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Mostrar inventario\n";
        cout << "2. Agregar producto al carrito\n";
        cout << "3. Mostrar carrito\n";
        cout << "4. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada inválida\n";
            opcion = 0;
            continue;
        }

        if (opcion == 1)
        {
            inventario.imprimir();
        }
       
        else if (opcion == 2)
        {
            string id;
            int cantidad;
            cout << "ID del producto: ";
            cin >> id;
            Producto* p = inventario.buscar(id);
            
            if (!p)
            {
                cout << "Producto no encontrado.\n";
                continue;
            }
            
            cout << "Cantidad: ";
            cin >> cantidad;
            if(cin.fail() || cantidad <= 0)
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Cantidad inválida\n";
                continue;
            }

            if (!inventario.reducir_stock(id, cantidad))
            {
                cout << "No hay stock suficiente.\n";
                continue;
            }

            carrito.agregar(*p, cantidad);
            cout << "Producto agregado al carrito.\n";

        }

        else if (opcion == 3)
        {
            carrito.imprimir();
        }

        else if(opcion == 4)
        {
            cout << "Saliendo...\n";

            cout << "\nTotal de la compra: $" << carrito.calcular_total() << "\n";
        }

        else
        {
            cout << "Opción inválida. \n";
        }

    }
}
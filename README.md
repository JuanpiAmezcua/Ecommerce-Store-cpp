# Tienda Virtual en C++

Proyecto académico individual desarrollado en C++ que simula la operación básica de una tienda virtual mediante programación orientada a objetos.

El sistema carga un inventario desde un archivo CSV, permite consultar productos, agregar artículos a un carrito de compras, validar existencias y calcular el total de la compra.

## Funcionalidades

- Carga de inventario desde un archivo `CSV`.
- Consulta de productos disponibles y existencias.
- Búsqueda de productos por identificador.
- Validación de stock antes de agregar artículos al carrito.
- Manejo de cantidades por producto.
- Cálculo automático del total de la compra.
- Validación básica de entradas del usuario.
- Menú interactivo por consola.

## Conceptos aplicados

- Programación orientada a objetos.
- Encapsulamiento.
- Composición y agregación entre clases.
- Uso de `vector` para colecciones dinámicas.
- Lectura y procesamiento de archivos CSV con `fstream` y `stringstream`.
- Manejo de punteros para localizar productos dentro del inventario.
- Separación de responsabilidades en archivos `.h` y `.cpp`.

## Estructura del proyecto

- `Producto`: representa cada artículo con ID, descripción, precio y stock.
- `Inventario`: carga, almacena, busca y actualiza los productos disponibles.
- `Carrito`: administra los productos seleccionados, cantidades y total de compra.
- `Tienda`: coordina el inventario, carrito y menú principal.
- `main.cpp`: inicia la aplicación.
- `inventario.csv`: contiene los datos iniciales del inventario.
- `uml-diagram.drawio`: diagrama UML final del sistema.

## Ejemplo de uso

```text
--- Menu ---
1. Mostrar inventario
2. Agregar producto al carrito
3. Mostrar carrito
4. Salir

Elige una opción: 2
ID del producto: ID0001
Cantidad: 2
Producto agregado al carrito.

--- Carrito ---
2x ID0001 - Agua Embotellada - $15.54
Total = $31.08
```

## Compilación y ejecución

El proyecto incluye un `Makefile`.

```bash
make
./myapp
```

Para limpiar los archivos generados:

```bash
make clean
```

También puede compilarse directamente con `g++`:

```bash
g++ -std=c++11 main.cpp producto.cpp inventario.cpp carrito.cpp tienda.cpp -o tienda_virtual
./tienda_virtual
```

## Autor

**Juan Pablo Amezcua**  
Estudiante de Ingeniería en Tecnologías Computacionales — Tecnológico de Monterrey

# 🏪 Sistema de Gestión de Inventario en C++

## 📌 Descripción

Este proyecto es una aplicación de consola en **C++** que permite gestionar el inventario de productos en una tienda. Se utiliza **Programación Orientada a Objetos (POO)** para modelar los productos y diversas funciones para manejar la manipulación de datos.

## 🎯 Funcionalidades Principales

- **Agregar productos** con nombre, ID, precio y stock.
- **Mostrar el inventario** en una tabla formateada.
- **Buscar productos** por su ID.
- **Actualizar la cantidad en stock** después de una venta.
- **Calcular el valor total del inventario**.

## 🛠️ Tecnologías utilizadas

- **Lenguaje**: C++
- **Entorno de desarrollo**: Visual Studio Community
- **Bibliotecas utilizadas**:
  - `<iostream>` para la entrada/salida estándar.
  - `<vector>` para almacenar la lista de productos.
  - `<string>` para manipulación de textos.
  - `<iomanip>` para formateo de salida en consola.
  - `<Windows.h>` para control de la pantalla en Windows (opcional).

## 🏗️ Estructura del Código

### 🔹 Clase `Product`

Esta clase representa un producto dentro del inventario. Contiene:

- **Atributos privados**:

  - `name` (nombre del producto).
  - `id` (identificador único).
  - `price` (precio unitario).
  - `stock` (cantidad en inventario).

- **Métodos públicos**:
  - `showProduct()`: Muestra la información del producto en formato tabular.
  - `getId()`: Devuelve el ID del producto.
  - `getStock()`: Devuelve la cantidad en stock.
  - `updateStock(int cantidad)`: Reduce la cantidad en stock tras una venta.
  - `getValue()`: Calcula el valor total del producto en inventario.

### 🔹 Funciones de Inventario

1. **`isInventoryEmpty()`**

   - Verifica si el inventario está vacío y muestra un mensaje si lo está.

2. **`addProduct(vector<Product>& inventory)`**

   - Permite agregar un nuevo producto al inventario.

3. **`showInventory(const vector<Product>& inventory)`**

   - Muestra todos los productos en el inventario en una tabla con formato.

4. **`searchProduct(const vector<Product>& inventory)`**

   - Permite buscar un producto por su **ID**.

5. **`updateStock(vector<Product>& inventory)`**

   - Modifica la cantidad de un producto después de una venta.

6. **`totalValue(const vector<Product>& inventory)`**

   - Calcula el valor total del inventario sumando el valor de cada producto.

7. **`menu()`**
   - Genera la interfaz de menú para el usuario.

### 🔹 Función `main()`

- Maneja el ciclo principal del programa.
- Muestra el menú y permite al usuario interactuar con las opciones.
- Maneja errores de entrada para evitar fallos en el programa.
- Usa `system("cls")` para limpiar la pantalla antes de cada interacción.

## 🚀 Instalación y ejecución

Para ejecutar este programa en **Visual Studio Community**:

1. **Clonar el repositorio**:
   ```bash
   git clone https://github.com/FredyGus/Laboratorio-4.1.git
   cd Laboratorio-4.1
   ```

# Laboratorio 4.1 - Programación Orientada a Objetos en C++

## Descripción
Este proyecto implementa los conceptos de Programación Orientada a Objetos en C++ utilizando clases para modelar un **Animal**, un **Automóvil** y una **Persona**. Se realizó en el entorno de desarrollo **Visual Studio Community** y se gestiona con **GitHub**.

## Tecnologías utilizadas
- Lenguaje: **C++**
- Entorno de desarrollo: **Visual Studio Community**
- Control de versiones: **Git y GitHub**

## Clases implementadas
### 🔹 Clase `Animal`
Clase base con atributos protegidos y un método virtual para hacer sonidos.

### 🔹 Clase `Perro` (hereda de `Animal`)
Clase derivada que sobrescribe el método `hacerSonido()` para emitir un **"Guau!"**.

### 🔹 Clase `Automovil`
Contiene atributos de marca y velocidad, y un método para acelerar el automóvil.

### 🔹 Clase `Persona`
Modela una persona con atributos de nombre y edad, e incluye un método `saludar()`.

## Instalación y ejecución
Para ejecutar este proyecto en **Visual Studio Community**:

1. **Clonar el repositorio**:
   ```bash
   git clone https://github.com/FredyGus/Laboratorio-4.1.git
   cd Laboratorio-4.1

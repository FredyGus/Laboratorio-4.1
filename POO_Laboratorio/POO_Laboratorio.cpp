#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>

using namespace std;


class Product {
private:
	string name;
	int id;
	float price;
	int stock;

public:
	Product(string _name, int _id, float _price, int _stock) : name(_name), id(_id), price(_price), stock(_stock) {}
	void showProduct() {
		cout << "Id: " << id << ", Producto: " << name << ", Precio: " << price << ", Stock: " << stock << endl;
	}

	int getId() { return id; }
	int getStock() { return stock; }
	void updateStock(int cantidad) {
		if (cantidad > stock) {
			cout << "No hay suficiente stock disponible." << endl
		}
		else {
			stock -= cantidad;
			cout << "Stock actualizado. Nuevo stock: " << stock << endl;
		}
	
	}

	float getValue(){
		return stock * price;
	}
};

void addProduct(vector<Product>& inventario) {
	string name;
	int id, stock;
	float price;

	cout << "Ingrese el nombre del producto: ";
	cin >> ws;
	getline(cin, name);

	cout << "Ingrese el ID: ";
	cin >> id;

	cout << "Ingrese el precio: ";
	cin >> price;

	inventario.push_back(Product(name, id, price, stock));
}

void showInventory() {
		
}

void menu(){

	cout << "Sistema de Inventario" << endl;
	cout << "1. Agregar producto" << endl;
	cout << "2. Mostrar inventario" << endl;
	cout << "3. Buscar producto por codigo" << endl;
	cout << "4. Actualizar stock" << endl;
	cout << "5. Calcular valor total" << endl;
	cout << "6. Salir" << endl;
}


int main() {


	
}
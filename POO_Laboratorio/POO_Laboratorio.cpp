#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;


class Product {
private:
	string name;
	int id;
	float price;
	int stock;

public:
	Product(string _name, int _id, float _price, int _stock) : name(_name), id(_id), price(_price), stock(_stock) {}

	void showProduct() const {
		cout << "| " << setw(4) << left << id
			<< "| " << setw(20) << left << name
			<< "| " << setw(10) << fixed << setprecision(2) << price <<" "
			<< "| " << setw(6) << right << stock << " |\n";
		cout << string(51, '-') << endl;


		//cout << "Id: " << id << ", Producto: " << name << ", Precio: " << price << ", Stock: " << stock << endl;
	}

	int getId() const { return id; }
	int getStock() const { return stock; }

	void updateStock(int cantidad) {
		if (cantidad > stock) {
			cout << "No hay suficiente stock disponible." << endl;
		}
		else {
			stock -= cantidad;
			cout << "Stock actualizado. Nuevo stock: " << stock << endl;
		}

	}

	float getValue() const {
		return stock * price;
	}
};

bool isInventoryEmpty(const vector<Product>& inventory) {
	if (inventory.empty()) {
		cout << "No hay productos en el inventario." << endl;
		return true;
	}
	return false;
}

void addProduct(vector<Product>& inventory) {
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

	cout << "Ingrese la cantidad en stock: ";
	cin >> stock;

	inventory.push_back(Product(name, id, price, stock));
}

void showInventory(const vector<Product>& inventory) {
	if (isInventoryEmpty(inventory)) return;

	cout << string(51, '-') << endl;
	cout << "|" << string(20, ' ') << "INVENTARIO" << string(19, ' ') <<"|" << endl;
	cout << string(51, '-') << endl;
	cout << "| " << setw(4) << left << "ID"
		<< "| " << setw(20) << left << "Producto"
		<< "| " << setw(10) << fixed << "Precio (Q) "
		<< "| " << setw(6) << right << "Stock" << " |\n";
	cout << string(51, '-') << endl;



	for (const Product& product : inventory) {
		product.showProduct();
	}
}

void searchProduct(const vector<Product>& inventory) {
	if (isInventoryEmpty(inventory)) return;

	int id;
	cout << "Ingrese el id del producto a buscar: ";
	cin >> id;

	for (const Product& product : inventory) {
		if (product.getId() == id) {
			cout << "Producto encontrado: \n";
			product.showProduct();
			return;
		}
	}
	cout << "Producto no encontrado." << endl;
}

void updateStock(vector<Product>& inventory) {
	if (isInventoryEmpty(inventory)) return;

	int id, amount;

	cout << "Ingrese el id del producto a actualizar: ";
	cin >> id;

	for (Product& product : inventory) {
		if (product.getId() == id) {
			cout << "Ingrese la cantidad a restar del stock: ";
			cin >> amount;
			product.updateStock(amount);
			return;
		}
	}
	cout << "Producto no encontrado" << endl;
}

void totalValue(const vector<Product>& inventory) {
	if (isInventoryEmpty(inventory)) return;

	float total = 0;

	for (const Product& product : inventory) {
		total += product.getValue();
	}
	cout << "Valor total del inventario: Q " << total << endl;
}

void menu() {
	system("cls");
	cout << "Sistema de Inventario" << endl;
	cout << "1. Agregar producto" << endl;
	cout << "2. Mostrar inventario" << endl;
	cout << "3. Buscar producto por ID" << endl;
	cout << "4. Actualizar stock" << endl;
	cout << "5. Calcular valor total" << endl;
	cout << "6. Salir" << endl;
	cout << "Opcion: ";
}


int main() {
	vector<Product> inventory;
	int option;

	do {
		menu();
		cin >> option;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "Entrada Invalida. Intentlo de nuevo." << endl;
			system("pause");
			continue;
		}

		system("cls");
		switch (option) {
		case 1: addProduct(inventory); break;
		case 2: showInventory(inventory); break;
		case 3: searchProduct(inventory); break;
		case 4: updateStock(inventory); break;
		case 5: totalValue(inventory); break;
		case 6:
			cout << "Saliendo del programa...\n";
			return 0;
		default:
			cout << "Opcion invalida. Intentelo de nuevo." << endl;
		}

		system("pause");
	} while (true);
}
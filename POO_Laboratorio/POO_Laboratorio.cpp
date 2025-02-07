#include <iostream>

using namespace std;

class Animal {
private:
	string name;
	int edad;

protected:
	string getName() const { return name; }

public:
	//constructor
	Animal(string _name, int _edad) :name(_name), edad(_edad) {}

	//Metodo para mostrar informacion
	virtual void hacerSonido() {
		cout << "Hacer un sonido desconocido" << endl;

	}
};

class Perro : public Animal {
public:
	Perro(string _name, int _edad) : Animal(_name, _edad) {}

	void hacerSonido() override {
		cout << getName() << " dice: Guau!" << endl;
	}
};


class Automovil {
private:
	string marca;
	int velocidad;
public:
	Automovil(string _marca, int _velocidad) : marca(_marca), velocidad(_velocidad) {}

	void acelerar() {
		velocidad += 10;

		cout << "El automovil " << marca << " ahora va a " << velocidad << "km/h." << endl;
	}

};

class Persona{
private: 
	string name;
	int edad;

public: 
	Persona(string _name, int _edad) : name(_name), edad(_edad) {}

	void saludar() {
		cout << "Hola mi nombre es: " << name << " y tengo " << edad << endl;
	}
};


int main() {

	Perro miPerro("Rex", 5);
	miPerro.hacerSonido();

	Automovil miCoche("Honda", 80);
	miCoche.acelerar();

	Persona persona1("Fredy", 24);
	persona1.saludar();

	return 0;
}
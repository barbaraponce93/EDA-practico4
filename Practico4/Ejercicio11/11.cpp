/*
11. Cree una estructura Persona que tenga un array de 30 caracteres, y su edad. Precargue en el main, una variable de tipo Persona, 
y use una funci�n pedirDatos(Persona &) que la cargue; use getline para cargar el nombre. Otra funci�n cumpleanios(Persona*) aumenta la edad, 
y mostrarDatos(Persona) que reciba la estructura y la muestre. Declare el prototipo de las funciones pedirDatos, cumpleanios y mostrarDatos. 
Pru�belas desde funci�n main.
*/

#include <iostream>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
};

void pedirDatos(Persona &persona){
	
	cout << "Ingrese el nombre: ";
	cin.getline(persona.nombre, 30);
	
	cout << "Ingrese la edad: ";
	
	cin >> persona.edad;
	
	cout << endl;
}

void cumpleanios(Persona* persona){
	
	persona->edad++;
}

void mostrarDatos(Persona persona){
	
	cout << "Datos de la persona: " << endl;
	cout << "Nombre: " << persona.nombre << endl;
	cout << "Edad: " << persona.edad << endl;
}

int main(){
	
	Persona persona;
	
	pedirDatos(persona);
	
	cumpleanios(&persona);
	
	mostrarDatos(persona);
	
	return 0;
}

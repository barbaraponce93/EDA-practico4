#include <iostream>
#include <string>

using namespace std;


struct Abuela {
    string nombre;
    int edad;
    string hobby;
};


void modificarAbuela(Abuela &abue) {
    abue.nombre = "Mar�a";
    abue.edad = 75;
    abue.hobby = "Tejer";
}

int main() {
    
    Abuela abue1 = {"Ana", 70, "Cocinar"};

   
    cout << "Valores originales:" << endl;
    cout << "Nombre: " << abue1.nombre << endl;
    cout << "Edad: " << abue1.edad << endl;
    cout << "Hobby: " << abue1.hobby << endl;

  
    modificarAbuela(abue1);


    cout << "Despu�s de la modificaci�n:" << endl;
    cout << "Nombre: " << abue1.nombre << endl;
    cout << "Edad: " << abue1.edad << endl;
    cout << "Hobby: " << abue1.hobby << endl;

    return 0;
}


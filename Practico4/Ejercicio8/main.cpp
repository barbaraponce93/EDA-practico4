#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declare struct Fecha, declare en funci�n main variables FA(fecha actual), y FC(fecha cumple), luego se
//compruebe en funci�n esMiCumple(struct* fecha, struct* cumple) si corresponde al d�a del cumplea�os. Mostrar
//un mensaje de felicitaciones de ser as�. Cargar las struct por referencia, es decir cargarFecha(struct &fecha).

struct Fecha {
	int dia;
	int mes;
	int anio;
};

// hacemos la funcion para cargar la fecha

void cargarFecha(Fecha &fecha){

std::cout <<"Ingrese el dia:\n";
std::cin >> fecha.dia;
std::cout <<"Ingrese el mes:\n";
std::cin >> fecha.mes;
std::cout <<"Ingrese el a�o:\n";
std::cin >> fecha.anio;
}
bool esMiCumple(const Fecha &fecha, const Fecha &cumple){
	return (fecha.dia == cumple.dia && fecha.mes == cumple.mes && fecha.anio == cumple.anio);
}

int main(int argc, char** argv) {
	Fecha FA; // fecha atual que se debe ingresar
	Fecha FC; // fecha del cumplea�os
	
	std::cout << "Coloque la fecha atual:\n";
	cargarFecha(FA);
	
	std::cout << "Coloque la fecha del tu cumplea�os:\n";
	cargarFecha(FC);
	
	if(esMiCumple(FA,FC)){
		std::cout << "Feliz cumple!" <<std::endl;
	} else {
		std:: cout << "No es su comple" << std::endl;
	}
	
	return 0;
}






/*
19. Escriba las siguientes funciones:
A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población, recibe estos datos como parámetros y devuelve la tasa.
B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, recibe estos datos como parámetros y devuelve la tasa.
C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad, utilice las funciones descriptas en A y B
D. Densidad Poblacional: habitantes por km 2

Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, y luego de la opción de calcular: 
Densidad poblacional, 
Tasa de natalidad, 
Tasa de Mortalidad y 
Evolución demográfica, mientras el usuario lo desee.
*/

#include <iostream>

using namespace std;

struct Pais{
	string nombre;
	float poblacionTotal;
	float superficie;
	float nacimientos;
	float fallecimientos;
};

float tasaNatalidad(float &nacimientos, float &poblacionTotal){
	
	return (nacimientos/poblacionTotal)*100;
}

float tasaMortalidad(float &fallecimientos, float &poblacionTotal){
	
	return (fallecimientos/poblacionTotal)*100;
}

bool poblacionEnCrecimiento(float &nacimientos, float &fallecimientos, float &poblacionTotal){
	
	return tasaNatalidad(nacimientos, poblacionTotal) > tasaMortalidad(fallecimientos, poblacionTotal);
}

float densidadPoblacional(float &poblacionTotal, float &superficie){
	
	return poblacionTotal/superficie;
}

void cargaDeDatos(Pais &pais){
	
	cout << "Ingrese el nombre del pais: ";
    cin >> pais.nombre;
    cout << "Ingrese la poblacion de " << pais.nombre << ": ";
    cin >> pais.poblacionTotal;
    cout << "Ingrese la superficie de " << pais.nombre << " en km^2: ";
    cin >> pais.superficie;
    cout << "Ingrese la cantidad de nacimientos en " << pais.nombre << ": ";
    cin >> pais.nacimientos;
    cout << "Ingrese la cantidad de fallecimientos en " << pais.nombre << ": ";
    cin >> pais.fallecimientos;
    
    cout << endl;
}

int menu(Pais &pais){
	
	int opcion;
	
	cout << "Informacion de " << pais.nombre << ": " << endl;
	cout << endl;
    cout << "1. Densidad poblacional " << endl;
    cout << "2. Tasa de natalidad " << endl;
    cout << "3. Tasa de mortalidad " << endl;
    cout << "4. Poblacion en crecimiento " << endl;
    cout << "5. Salir " << endl;
    cout << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    
	switch(opcion){
		
		case 1:
			cout << "La densidad poblacional es " << densidadPoblacional(pais.poblacionTotal, pais.superficie) << " por KM2." << endl;
			break;
		case 2:
			cout << "La tasa de natalidad es " << tasaNatalidad(pais.nacimientos, pais.poblacionTotal) << "%." << endl;
			break;
		case 3:
			cout << "La tasa de mortalidad es " << tasaMortalidad(pais.fallecimientos, pais.poblacionTotal) << "%." << endl;
			break;	
		case 4:
			cout << "Poblacion en crecimiento?: " << (poblacionEnCrecimiento(pais.nacimientos, pais.fallecimientos, pais.poblacionTotal) ? "Si" : "No") << endl;
			break;
		case 5:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion incorrecta." << endl;	
	}
	
	cout << endl;
	
	return opcion;
}

int main(){
	
	Pais pais;
	
	cargaDeDatos(pais);
	
	do{
			
		if(menu(pais)==5){
			break;
		}		
		
	}while(true);
	
	return 0;
}


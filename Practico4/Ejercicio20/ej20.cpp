/*
20. En un club donde se practica combate, se carga el peso de los boxeadores. El club tiene una capacidad máxima de 80 deportistas. 
Llamar/invocar a todas las funciones/procedimientos. Usar al menos 1 arreglo. Debe haber con una función o procedimiento, según sea más conveniente que:
a) Permita ingresar Deportista (string/char * nombre, y float peso). Validar el peso entre 40 y hasta 120.
b) Calcule cuántas/os boxeadores son de las siguientes categorías:
A- Mosca (hasta 52kg)
B- Ligero (entre 52 y 63kg)
C- Wélter (entre 63 y 69kg)
D- Pesado más de 69 kg

c) Una función o procedimiento, para mostrar todos los pesos cargados en el club
d) También se debe encontrar el peso máximo de cada categoría cargada
e) Calcule y muestre la cantidad de deportista por cada categoría (mosca, ligero, wélter, pesado)
f) Encuentre el peso máximo cargado de todos los boxeadores, y lo devuelva al main
*/

#include <iostream>
#include <string>

using namespace std;

struct Deportista {
    string nombre;
    float peso;
};

void ingresarDeportista(Deportista deportistas[], int &numDeportistas) {
    if (numDeportistas >= 80) {
        cout << "No se pueden ingresar mas deportistas. Capacidad maxima alcanzada." << endl;
        return;
    }

    Deportista nuevo;
    cout << "Ingrese el nombre del deportista: ";
    cin >> nuevo.nombre;
    do {
        cout << "Ingrese el peso del deportista (entre 40 y 120 kg): ";
        cin >> nuevo.peso;
        if (nuevo.peso < 40 || nuevo.peso > 120) {
            cout << "Peso no valido. Debe estar entre 40 y 120 kg." << endl;
        }
    } while (nuevo.peso < 40 || nuevo.peso > 120);

    deportistas[numDeportistas++] = nuevo;
}

void calcularCategorias(Deportista deportistas[], int numDeportistas, int &mosca, int &ligero, int &welter, int &pesado) {
    mosca = ligero = welter = pesado = 0;
    for (int i = 0; i < numDeportistas; ++i) {
        if (deportistas[i].peso <= 52) {
            mosca++;
        } else if (deportistas[i].peso <= 63) {
            ligero++;
        } else if (deportistas[i].peso <= 69) {
            welter++;
        } else {
            pesado++;
        }
    }
}

void mostrarPesos(Deportista deportistas[], int numDeportistas) {
    cout << "Pesos cargados en el club:" << endl;
    for (int i = 0; i < numDeportistas; ++i) {
        cout << deportistas[i].nombre << ": " << deportistas[i].peso << " kg" << endl;
    }
}

void pesoMaximoPorCategoria(Deportista deportistas[], int numDeportistas, float &maxMosca, float &maxLigero, float &maxWelter, float &maxPesado) {
    maxMosca = maxLigero = maxWelter = maxPesado = 0;
    for (int i = 0; i < numDeportistas; ++i) {
        if (deportistas[i].peso <= 52) {
            if (deportistas[i].peso > maxMosca) {
                maxMosca = deportistas[i].peso;
            }
        } else if (deportistas[i].peso <= 63) {
            if (deportistas[i].peso > maxLigero) {
                maxLigero = deportistas[i].peso;
            }
        } else if (deportistas[i].peso <= 69) {
            if (deportistas[i].peso > maxWelter) {
                maxWelter = deportistas[i].peso;
            }
        } else {
            if (deportistas[i].peso > maxPesado) {
                maxPesado = deportistas[i].peso;
            }
        }
    }
}

float pesoMaximoGeneral(Deportista deportistas[], int numDeportistas) {
    float maxPeso = 0;
    for (int i = 0; i < numDeportistas; ++i) {
        if (deportistas[i].peso > maxPeso) {
            maxPeso = deportistas[i].peso;
        }
    }
    return maxPeso;
}

int main() {
    Deportista deportistas[80];
    int numDeportistas = 0;
    int opcion;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Ingresar Deportista\n";
        cout << "2. Calcular y mostrar categorias\n";
        cout << "3. Mostrar todos los pesos cargados\n";
        cout << "4. Mostrar peso maximo de cada categoria\n";
        cout << "5. Mostrar peso maximo general\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                ingresarDeportista(deportistas, numDeportistas);
                break;
            case 2: {
                int mosca, ligero, welter, pesado;
                calcularCategorias(deportistas, numDeportistas, mosca, ligero, welter, pesado);
                cout << "Mosca: " << mosca << endl;
                cout << "Ligero: " << ligero << endl;
                cout << "Welter: " << welter << endl;
                cout << "Pesado: " << pesado << endl;
                break;
            }
            case 3:
                mostrarPesos(deportistas, numDeportistas);
                break;
            case 4: {
                float maxMosca, maxLigero, maxWelter, maxPesado;
                pesoMaximoPorCategoria(deportistas, numDeportistas, maxMosca, maxLigero, maxWelter, maxPesado);
                cout << "Peso maximo Mosca: " << maxMosca << " kg" << endl;
                cout << "Peso maximo Ligero: " << maxLigero << " kg" << endl;
                cout << "Peso maximo Welter: " << maxWelter << " kg" << endl;
                cout << "Peso maximo Pesado: " << maxPesado << " kg" << endl;
                break;
            }
            case 5: {
                float maxPeso = pesoMaximoGeneral(deportistas, numDeportistas);
                cout << "Peso maximo general: " << maxPeso << " kg" << endl;
                break;
            }
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no valida." << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
}


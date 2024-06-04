#include <iostream>
#include <limits>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//12. Realice una función que, dada una matriz y un número de fila de la matriz, devuelva con la función masPeque,
//el menor de los elementos almacenados en dicha fila al main. masPeque llama en el if a la función filaValida.
const int FILAS = 3;
const int COLUMNAS = 4;

bool filaValida(int fila, int totalFilas) {
    return fila >= 0 && fila < totalFilas;
}

int masPeque(int matriz[FILAS][COLUMNAS], int fila) {
    if (!filaValida(fila, FILAS)) {
        std::cout << "No existe esa fila, intente un numero mas chico." << std::endl;
        return std::numeric_limits<int>::max(); // Valor máximo como indicación de error
    }

    int menor = matriz[fila][0];
    for (int j = 1; j < COLUMNAS; ++j) {
        if (matriz[fila][j] < menor) {
            menor = matriz[fila][j];
        }
    }
    return menor;
}
int main(int argc, char** argv) {
	
	    int matriz[FILAS][COLUMNAS] = {
        {5, 3, 8, 2},
        {4, 7, 1, 6},
        {9, 11, 5, 10}
    };
    int fila;
    std::cout << "Ingrese el número de fila, menor a 2, para encontrar el menor elemento: ";
    std::cin >> fila;

    int menor = masPeque(matriz, fila);
    if (filaValida(fila, FILAS)) {
        std::cout << "El menor elemento de la fila " << fila << " es: " << menor << std::endl;
    }
	return 0;
}

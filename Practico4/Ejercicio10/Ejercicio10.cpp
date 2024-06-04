#include <iostream>

using namespace std;

const int TAMANO = 4;


void cargaMatriz(float matriz[TAMANO][TAMANO]) {
    cout << "Ingrese los valores para la matriz de 4x4:" << endl;
    for (int i = 0; i < TAMANO; ++i) {
        for (int j = 0; j < TAMANO; ++j) {
            cin >> matriz[i][j];
        }
    }
}


void muestraMatriz(float matriz[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; ++i) {
        for (int j = 0; j < TAMANO; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}


void intercambioDiagonal(float matriz1[TAMANO][TAMANO], float matriz2[TAMANO][TAMANO]) {
    for (int i = 0; i < TAMANO; ++i) {
        
        float temp = matriz1[i][i];
        matriz1[i][i] = matriz2[i][i];
        matriz2[i][i] = temp;

        
        temp = matriz1[i][TAMANO - 1 - i];
        matriz1[i][TAMANO - 1 - i] = matriz2[i][TAMANO - 1 - i];
        matriz2[i][TAMANO - 1 - i] = temp;
    }
}

int main() {
    float matriz1[TAMANO][TAMANO];
    float matriz2[TAMANO][TAMANO];

    
    cout << "Carga de la primera matriz:" << endl;
    cargaMatriz(matriz1);
    cout << "Carga de la segunda matriz:" << endl;
    cargaMatriz(matriz2);

    
    cout << "Primera matriz antes del intercambio:" << endl;
    muestraMatriz(matriz1);
    cout << "Segunda matriz antes del intercambio:" << endl;
    muestraMatriz(matriz2);

   
    intercambioDiagonal(matriz1, matriz2);

   
    cout << "Primera matriz después del intercambio:" << endl;
    muestraMatriz(matriz1);
    cout << "Segunda matriz después del intercambio:" << endl;
    muestraMatriz(matriz2);

    return 0;
}


#include <iostream>
#include<locale.h>
using namespace std;
	
	/*Desde main declara un array de tama�o TAM, 
	se llama a 
 A) proceso cargaArray con par�metros un vector de int, y su tama�o,
 B) cambieSigno de los elementos del vector.
 C) Otra funci�n muestraArray a la consola.*/

	int TAM=6;
void cargaArray(int* array, int tamanio){
	for(int i=0;i<tamanio;i++){
		cout<<"Ingresa un n�mero:"<<endl;
		cin >> array[i];
	}
}
   void cambieSigno(int* array, int tamanio){
	for(int i=0;i<tamanio;i++){
			array[i]=-array[i];//negaci�n unaria,cambia el signo del n�mero	
	}
}
 	void muestra(int* array, int tamanio){
	for(int i=0;i<tamanio;i++){
	cout << "Elemento " << i + 1 << ": " << array[i] << endl;
	}
	cout<<endl;
}
int main(){
	setlocale(LC_ALL,"Spanish");
	int array[TAM];
	cargaArray(array,TAM);
	muestra(array,TAM);
	cambieSigno(array,TAM);
	muestra(array,TAM);
return 0;
}

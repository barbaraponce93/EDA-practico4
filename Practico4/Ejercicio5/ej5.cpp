#include <iostream>
#include<locale.h>
using namespace std;


	int TAM=3;
	void cargaArray(int* array, int tamanio){
		for(int i=0;i<tamanio;i++){
			cout<<"Ingresa un número:"<<endl;
			cin >> array[i];
		}
	
	}

 
 
 	void muestra(int* array, int tamanio){
 		cout<<"Array ingresado:"<<endl;
	for(int i=0;i<tamanio;i++){
	cout << "Elemento " << i + 1 << ": " << array[i] << endl;	
	}
	cout<<endl;
	
	}
	
	
 	void sumaPares(int* array, int tamanio){
 		int sumaP=0;
	for(int i=0;i<tamanio;i++){
		if(array[i]%2==0){
			sumaP+=array[i];
		}
	}
	cout<<"La suma de los pares da: "<<sumaP<<endl;

	
	}
	
	
int main(){

	setlocale(LC_ALL,"Spanish");
/*El programa main debe recibir un array y sumar sus elementos pares, reutilizar las funciones A y C del punto 4
para cargar y mostrar los arrays. Escriba otra función que reciba un array y sume sus elementos pares*/
	
	int array[TAM];
	cargaArray(array,TAM);
	sumaPares(array,TAM);
	muestra(array,TAM);



return 0;
}

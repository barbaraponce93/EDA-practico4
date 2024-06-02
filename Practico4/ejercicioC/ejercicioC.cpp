#include <iostream>
#include<locale.h>
using namespace std;

void esParOImpar(int* a){
	if(*a%2==0){
		cout<< "El número "<<*a<<" es par"<<endl;
	
	}
	else{  
		cout<< "El número "<<*a<<" es impar"<<endl;
			
	}
	
		cout<<"Posición: "<<a<<endl;
	
}

int main(){
/* C-Hacer una función que reciba un puntero y compruebe si el número es par o impar, y señalar la posición de
memoria donde se está guardando el número*/
	setlocale(LC_ALL,"Spanish");
int numero;

 		cout<<"Ingrese un número"<<endl;
 		cin>>numero;
 		
 		esParOImpar(&numero);// con & obtengo la direccion de memoria de la variable
 		

return 0;
}

#include <iostream>
#include<locale.h>
using namespace std;

void esParOImpar(int* a){
	if(*a%2==0){
		cout<< "El n�mero "<<*a<<" es par"<<endl;
	
	}
	else{  
		cout<< "El n�mero "<<*a<<" es impar"<<endl;
			
	}
	
		cout<<"Posici�n: "<<a<<endl;
	
}

int main(){
/* C-Hacer una funci�n que reciba un puntero y compruebe si el n�mero es par o impar, y se�alar la posici�n de
memoria donde se est� guardando el n�mero*/
	setlocale(LC_ALL,"Spanish");
int numero;

 		cout<<"Ingrese un n�mero"<<endl;
 		cin>>numero;
 		
 		esParOImpar(&numero);// con & obtengo la direccion de memoria de la variable
 		

return 0;
}

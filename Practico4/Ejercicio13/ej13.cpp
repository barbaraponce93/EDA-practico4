#include <iostream>
#include<locale.h>
#include<math.h>
using namespace std;



int funpot(int potencia, int baseEntero){
	if(potencia<0){
		cout<<"El exponente debe ser un n�mero entero positivo"<<endl;
	return -1;//corto aca si el expo en negativo
	}
    double resultado = pow(static_cast<double>(baseEntero), potencia);//tengo que castear ya que pow acepta double
	return resultado;
	

}

int main(){
	setlocale(LC_ALL,"Spanish");
	
	
/*Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una potencia en 
n�mero entero positivo y despliegue el resultado. El n�mero entero positivo deber� ser el segundo valor 
transmitido a la funci�n*/


int potencia;
int base;
cout<<"Ingrese un n�mero entero para la base"<<endl;
cin>>base;
cout<<"Ingrese un n�mero entero positivo"<<endl;
cin>>potencia;


double resultado=funpot(potencia,base);
if(resultado!=-1)
cout<<"El resultado de "<<base<<" elevado "<<potencia<<" es:"<<resultado<<endl;




return 0;
}

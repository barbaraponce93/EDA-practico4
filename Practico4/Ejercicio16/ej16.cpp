#include <iostream>
#include<locale.h>

using namespace std;

/*Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
 llamando a la funci�n correspondiente, 
 seg�n las que siguen: 
 A. Calcula la multiplicaci�n por sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2
(suma 4 veces el numero 2 generalizando nxm =n+n+�(m veces).
 B. Calcula la divisi�n por restas sucesivas Ej.
10/2=5 (5 indica la cantidad de veces que pude restar 2 al 10. 
 C. Calcule la potencia por multiplicaciones
sucesivas Ej 2 3= 2*2*2 (multiplica 2 por si mismo 3 veces)*/

void sumaSucesiva(int a,int b){
	int suma=0;
	for(int i=0;i<b;i++){
		suma+=a;
	}
	cout<<"El resultado multiplicaci�n por sumas sucesivas es "<< suma<<endl;
	
}
void restaSucesiva(int a,int b){

	 int contador=0;
   while(a >= b){
      a -= b; 
      contador++;//cociente

	
}
	cout<<"El resultado de la divisi�n por restas sucesivas es "<< contador<<endl;

}
void potenciaSucesiva(int base,int exp){
if (exp== 0) {
	 cout<<"cualquier n�mero elevado a la potencia a la potencia 0 es 1"<<endl;
  
  } else if (exp == 1) {
   cout<<"cualquier n�mero elevado a la potencia 1 es s� mismo"<<endl;
  } else {
    int resultado = base; // Almacena el resultado parcial.
    for (int i = 1; i < exp; ++i) {
      resultado *= base; // Multiplica el resultado por la base.
    }
    cout<<"el resultado de la potencia por multiplicaciones es "<<resultado<<endl;
  }
}





int main(){
setlocale(LC_ALL,"Spanish");
int a,b,opcion;


	cout<<"Ingrese el primer n�mero"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo n�mero"<<endl;
	cin>>b;
	cout<<"Ingrese una opci�n"<<endl;
	cout<<"1 -Para realizar la multiplicaci�n por sumas sucesivas"<<endl;
	cout<<"2 -Para realizar la divisi�n por restas sucesivas"<<endl;
	cout<<"3 -Para realizar la potencia por multiplicaciones sucesivas"<<endl;
	cin>>opcion;

switch(opcion){
	case 1:
		sumaSucesiva(a,b);
		break;
	case 2 :
		restaSucesiva(a,b);
		break;
	case 3:
		potenciaSucesiva(a,b);
	break;
	default:
		cout<<"La opci�n ingresada es incorrecta"<<endl;
		break;
	
	
	
}

return 0;
}

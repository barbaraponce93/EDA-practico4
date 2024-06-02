#include<iostream>
#include<locale.h>


using namespace std;

/*Un número es primo si solo es divisible por la unidad y por si mismo.
 Defina una función que determina si un número es primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones,
 1). Determinar si un número es primo 
 2). Calcular todos los números primos menores a un número ingresado por el usuario.
 El usuario debe poder realizar estas opciones todas las veces que desee.
*/

bool esPrimo(int numeroP){
	if(numeroP<=1){
		return false;
	}else if(numeroP==2){
		return true;
	}
	else {
		for(int i=2;i<numeroP;i++){
			if(numeroP%i==0){//si es divisible por otro numero menor a el
				return false;
			}
			
		}
			return true;
	}

}



void calcularPrimosMenores(int numero) {
    for (int i = 2; i < numero; ++i) {//recorro todos los num menores al ingresado
        if (esPrimo(i)) {//si el num en la pos i es primo
            cout << "Es primo " << i << " ";//lo muestro
             cout<<endl; 
        }
       
    }
   
}

int main(){
	
	setlocale(LC_ALL, "Spanish");
int numero;
int opcion;
bool resultado;


do{
cout<<"Ingrese un número entero positivo"<<endl;
	cin>>numero;
	
   if (numero <= 0) {
        cout << "Número ingresado invalido, por favor ingrese un número entero positivo" << endl;
    
      }else{
	 
			cout<<"Ingrese una opcion:"<<endl;
cout<<"1 - Para determinar si un número es primo "<<endl;	
cout<<"2 - Para calcular todos los números primos menores al número ingresado"<<endl;
cout<<"3 - Para Salir"<<endl;		

cin>>opcion;
switch(opcion){
	case 1 :    
			
				cout<<(esPrimo(numero)?"El número ingresado es Primo":"El número ingresado no es primo")<<endl;
				cout<<endl;
				break;
	case 2 : 	
			 	calcularPrimosMenores(numero);
				break;
	case 3 : 	
				cout<<"Fin de la ejecución"<<endl;
				numero=0;
				break;	
	default:
			cout<< "La opción ingresada es incorrecta"	 <<endl;
				break;	
	

	
}
}
}while(numero>0);






return 0;
}

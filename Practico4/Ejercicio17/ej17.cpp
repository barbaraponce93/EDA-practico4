#include<iostream>
#include<locale.h>


using namespace std;

/*Un n�mero es primo si solo es divisible por la unidad y por si mismo.
 Defina una funci�n que determina si un n�mero es primo, debe recibir el n�mero y retornar verdadero o falso.
- Realice un programa que, de 2 opciones,
 1). Determinar si un n�mero es primo 
 2). Calcular todos los n�meros primos menores a un n�mero ingresado por el usuario.
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
cout<<"Ingrese un n�mero entero positivo"<<endl;
	cin>>numero;
	
   if (numero <= 0) {
        cout << "N�mero ingresado invalido, por favor ingrese un n�mero entero positivo" << endl;
    
      }else{
	 
			cout<<"Ingrese una opcion:"<<endl;
cout<<"1 - Para determinar si un n�mero es primo "<<endl;	
cout<<"2 - Para calcular todos los n�meros primos menores al n�mero ingresado"<<endl;
cout<<"3 - Para Salir"<<endl;		

cin>>opcion;
switch(opcion){
	case 1 :    
			
				cout<<(esPrimo(numero)?"El n�mero ingresado es Primo":"El n�mero ingresado no es primo")<<endl;
				cout<<endl;
				break;
	case 2 : 	
			 	calcularPrimosMenores(numero);
				break;
	case 3 : 	
				cout<<"Fin de la ejecuci�n"<<endl;
				numero=0;
				break;	
	default:
			cout<< "La opci�n ingresada es incorrecta"	 <<endl;
				break;	
	

	
}
}
}while(numero>0);






return 0;
}

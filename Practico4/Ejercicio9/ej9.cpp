#include <iostream>
#include<locale.h>
#include <string.h>
#include <cctype> //para isalpha
using namespace std;



	void  contarPalabras(char frase[]){
		int contador=1;//me aseguro de contar la primer palabra
	
		for (int i = 0; frase[i] != '\0'; i++) {//va a recorrer hasta el fin de la cadena
		  if (frase[i] == ' ' && isalpha(frase[i + 1])){//isalpha aca lo uso para no contar carateres distintos a las letra, es decir para contar las palabras debe haber un espacio y una letras despues
				 contador++;
			};
			
		}
	cout<<"La frase ingresada contiene: "<<contador<<" palabras"<<endl;	
	
	}
	
	void contarOcurrencia(char *frase, char *palabra) {
  int contador = 0;
    int longitudFrase = strlen(frase);
    int longitudPalabra = strlen(palabra);

    for (int i = 0; i < longitudFrase; i++) {
        if (strncmp(frase + i, palabra, longitudPalabra) == 0) {
    //el segundo if es para asegurarnos de que no haya letras
// antes o despues de la subcadena (que no sean parte de otra palabra)
    if ((i == 0 || !isalpha(frase[i - 1])) &&//si i es igual 0 estamos al inicio de la oracion || si i no es 0 verificar que el caracter anterior no sea una letra (nos asegura que no es parte de otra palabra)
        (i + longitudPalabra == longitudFrase || !isalpha(frase[i + longitudPalabra]))) {//si longp y lonf son iguales es porque estamos al final de la cadena|| verificar que el carácter siguiente a la coincidencia no es una letra(nos asegura que no es parte de otra palabra)
        contador++;
    }
}
    }

  cout << "La palabra '" << palabra << "' se encuentra " << contador << " veces en la frase." << endl;
}

int main(){
		setlocale(LC_ALL,"Spanish");
/*Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de una palabra en
la frase, mientras el usuario lo desee. Para ello valerse de lo siguiente:
• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
• Otra función que determine cuantas veces se encuentra una palabra en una frase*/


	int opcion;
	char  cadena[250];
	char palabra [20];
	cout<<"Ingrese una frase"<<endl;
	cin.getline(cadena,250);
	cout<<"¿Que acción desea realizar? Ingrese su elección:"<<endl;
	cout<<"1 - Para contar las palabras de una frase"<<endl;
	cout<<"2 - Para contar la ocurrencia de una palabra en un frase"<<endl;
	cin>>opcion;
	cin.ignore();

	switch(opcion){
		case 1: contarPalabras(cadena);
			break;
		
		case 2: 
			cout<<"Ingrese la palabra que desea buscar:"<<endl;
			cin.getline(palabra,20);
				  contarOcurrencia(cadena, palabra) ;
			break;
			
		default:
            cout << "Opción no válida. Intente nuevamente." << std::endl;
            break;
	}


return 0;
}

/*
E. Crear un procedimiento amigosDeMario que contenga un arreglo de personajes {Luigi, Donkey, Yoshi} y 
reciba un puntero pt a string*, nos muestre los personajes incrementando pt++.
*/

#include <iostream>

using namespace std;

void amigosDeMario() {
    
    string personajes[] = {"Luigi", "Donkey", "Yoshi"};
    string* pt = personajes;
    
    for(int i=0;i<3;i++){
    	
    	cout << *pt << endl;
    	pt++;	
	} 
}

int main(){
	
	amigosDeMario();
	
	return 0;
}

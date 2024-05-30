/*
15. Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada. 
Suponga que los 3 argumentos serán del tipo float.
*/

#include <iostream>
#include <algorithm>

using namespace std;

float maximo(float a, float b, float c){
	
	return max(max(a, b), c);
}

int main(){
	
	float a,b,c;
	
	a=3.6;
	b=3.5;
	c=3.4;
	
	cout << "El valor maximo es: " << maximo(a,b,c) << endl;
	
	return 0;
}

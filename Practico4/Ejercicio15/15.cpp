/*
15. Escriba una funci�n llamada maximo() que devuelva el valor m�ximo de tres argumentos que se transmitan a la funci�n cuando sea llamada. 
Suponga que los 3 argumentos ser�n del tipo float.
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

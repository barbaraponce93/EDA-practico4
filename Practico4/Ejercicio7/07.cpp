/*
7. En la función main, llamar a otra función Friends que reciba un arreglo de estructuras y 
registre datos de 6 amigo/as con: nombre, sexo, si es soltero, y su Instagram. 
Luego un procedimiento muestra los datos de los soltera/os. 
Y una función medioPomelo, que carga el amigoElegido=“ ” (paso por referencia) el primer soltero menor a 30 años; 
debe además, retornar su Instagram.
*/

#include <iostream>

using namespace std;

struct Amigo{
	string nombre;
	char sexo;
	bool esSoltero;
	int edad;
	string instagram;
};

void Friends(Amigo amigos[]){
	
	for(int i = 0; i < 6; i++) {
		
        cout << "Ingrese los datos del amigo " << (i + 1) << ":" << endl;
        
        cout << "Nombre: ";
        cin >> amigos[i].nombre;
        
        cout << "Sexo (M/F): ";
        cin >> amigos[i].sexo;
        
        cout << "Soltero (1 para si, 0 para no): ";
        cin >> amigos[i].esSoltero;
        
        cout << "Edad: ";
        cin >> amigos[i].edad;
        
        cout << "Instagram: ";
        cin >> amigos[i].instagram;
        
        cout << endl;
    }	
}

void mostrarSolteros(const Amigo amigos[]) {
	
    cout << "Amigos solteros:" << endl;
    
    cout << endl;
    
    for(int i = 0; i < 6; i++) {
    	
        if(amigos[i].esSoltero) {
        	
            cout << "Nombre: " << amigos[i].nombre << "\nSexo: " << amigos[i].sexo << "\nEdad: " << amigos[i].edad << "\nInstagram: " << amigos[i].instagram << endl;
            
            cout << endl;
        }
    }
}

string medioPomelo(Amigo amigos[], string &amigoElegido) {
	
    for(int i = 0; i < 6; i++) {
    	
        if(amigos[i].esSoltero && amigos[i].edad < 30) {
        	
            amigoElegido = amigos[i].nombre;
            
            return amigos[i].instagram;
        }
    }
    
    amigoElegido = "";
    
    return "";
}

int main(){
	
	string amigoElegido;
	
	Amigo amigos[6];
	
	Friends(amigos);
	
	mostrarSolteros(amigos);
	
	cout << endl;
	
	string instagramAmigoElegido = medioPomelo(amigos, amigoElegido);
	
	if(instagramAmigoElegido==""){
	
		cout << "No hay amigos solteros menores de 30 años" << endl;
		
	} else {
		
		cout << "El primer amigo soltero menor a 30 años es: " << amigoElegido << "\ny su Instagram es: " << instagramAmigoElegido << endl;
	}
	return 0;
}



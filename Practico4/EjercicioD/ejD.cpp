#include <stdio.h>
#include <ctype.h>

void Hogwarts(char *hechizo) {
    int vocales = 0;
    int consonantes = 0;
    
 
    for (int i = 0; hechizo[i] != '\0'; i++) {
        char letra = hechizo[i];
        

        if (isalpha(letra)) {
            
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
                letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
                vocales++;
            } else {
                consonantes++;
            }
        }
    }
    

    printf("%s tiene: %d vocales, %d consonantes.\n", hechizo, vocales, consonantes);
}

int main() {
    char hechizo1[] = "Expelliarmus";
    char hechizo2[] = "Alohomora";
    
    Hogwarts(hechizo1); 
    Hogwarts(hechizo2); 
    
    return 0;
}


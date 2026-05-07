#include <stdio.h>

int main (){
    int numeros[] = {7,2,3};
    int guarda;

    for(int j = 0; j < 3; j++){
        for(int i = 0; i <2;i++) {
            if (numeros[i] > numeros[i+1]){
            guarda = numeros[i];
            numeros[i] = numeros[i+1];
            numeros[i+1] = guarda;
            }
         }
    }
     
     for(int i = 0; i <3 ;i++) {
         printf("%d ", numeros[i]);
         
     } 
    return 0;
}

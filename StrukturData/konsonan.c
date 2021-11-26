#include <stdio.h>
#include <stdlib.h>

void main(){
    char data[100];
    int index = 0;

    char vokal[100];
    char konsonan[100];
    int vokalCount = 0;
    int konsonanCount = 0;

    gets(data);

    while(data[index] != EOF){
        if(data[index] != " " && data[index]){
            if (data[index] == 'a' || data[index] == 'i' || data[index] == 'u' || data[index] == 'e' || data[index] == 'o'){
                vokal[vokalCount] = data[index];
                vokalCount++;
            }
            else{
                konsonan[konsonanCount] = data[index];
                konsonanCount++;
            }
        }
        index++;
    }
    printf("Vokal = %d = %s\n", vokalCount, vokal);
    printf("Konsonan = %d = %s", konsonanCount, konsonan);
}

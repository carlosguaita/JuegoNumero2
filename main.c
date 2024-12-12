#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    int n, num=0;
    
    srand(time(NULL));
	n = rand() % 101; 
    //printf("%d\n",n);
    for (int i = 0; i < 5; i++)
    {
        do{
        printf("Intento %d\n",i+1);
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if (num<1 || num>100)
        {
            printf("Error, el numero debe estar entre 1 y 100\n");
            //i--;
        }
        }while(num<1 || num>100);
        if (num==n)
        {
            printf("Ganaste, el numero era %d\n",n);
            break;
        }else if(num<n){
            printf("El numero secreto es mayor\n");
        }else{
            printf("El numero secreto es menor\n");
        }
        if (i==4)
        {
            printf("Perdiste el numero secreto era: %d\n",n);
        }  
    }
    return 0;
}
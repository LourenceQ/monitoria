#include <stdio.h>
#include <stdlib.h>
/*
Fazer um programa para ler 5 valores e, em seguida, 
mostrar a posic�ao onde se encontrar 
o maior e o menor valor.

*/
int main()
{
    int a, repetido, b, i;
    int vet[5],vet_i[5];

    printf("digite 5 vet");
    printf("\n");
    
    for (a=0;a<5;a++)
    {
      printf("nota %d : ",a+1);
      scanf("%d", &vet[a]);
    }
		
      for(a=1;a<=5;a++)
	  {
      	for(b=1;b<=5;b++)
		  {
      		if(vet[a]==vet[b])
      		{
      			        	  
      		}
		  }
	  }
      
	
	printf("Eis o algarismos iguais:\n");
	for (a=0;a<5;a++)
    {
      printf("%d: ",vet[repetido]);     
	} 
	
    return 0;
}


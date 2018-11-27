#include <stdio.h>

int main()
{
   int i, crescent=0, decresce=0, vetor[11];
   
   for(i=0;i<10;i++)
   {
      printf("Entre o numero %d do vetor", i+1);
      scanf("%d", &vetor[i]);
   }
   
   for(i=0;i<10;i++)
   {
      if(vetor[i]<vetor[i+1])
         crescent++;
      if(vetor[i]>vetor[i+1])
         decresce++;
   }
   
   if(crescent==10)
      printf("Crescente");
   else if(decresce==9)
      printf("Decrescente");
   else
      printf("Fora de Ordem");
      
 system("pause");
 return 0;
   
}

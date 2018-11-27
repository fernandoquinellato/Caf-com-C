#include <stdio.h>

int main()
{
   int i, j, veta[10], vetb[15], maxa=0, maxb=0;
   
   printf("Insira os elemetos do vetor A:\n");
   for(i=0;i<1=;i++)
   {
      printf("Elemento %d=",i+1);
      scanf("%d", &veta[i]);
   }
   
   printf("Insira os elementos do vetor B:\n");
   for(i=0;i<15;i++)
   {
      printf("Elementos %d=",i+1);
      scanf("%d", &vetb[i]);
   }
   printf("\n");
   
   for(i=0;i<10;i++)
   {
      if(veta[i]> maxa)
         maxa=veta[i];
   }
   printf("Maior valor de A= %d\n", maxa);
   
   for(i=0;i<15;i++)
   {
      if(vetb[i]> maxb)
         maxb=vetb[i];
   }
   printf("Maior valor de B= %d\n", maxb);
   
   if(maxa==maxb)
      printf("Ambos tem os mesmos valores maximos");
   
   if(maxa>maxb)
      printf("Vetor A tem o maior valor: %d", maxa);
   
   if(maxa<maxb)
      printf("Vetor B tem o maior valor: %d", maxb);
      
   printf("\n\Elementos comuns:\n");
   for(i=0;i<10;i++)
   {
      for(j=0;j<15;j++)
      {
         if(veta[i]==vetb[j])
         printf("%d,", &veta[i]);
         i++;
      }
   }
 system("pause");
 return 0;

}
      

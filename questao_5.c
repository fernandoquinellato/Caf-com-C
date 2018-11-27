#include <stdio.h>

int main()
{
   int i, andar, no_elevador=0, entraram, sairam;
   
   printf("Quantos andares o predio tem:\n");
   scanf("%d", &andares);
   
   for(i=0;i<andares;i++)
   {
      if(no_elevador<16)
      {
         printf("Andar %d\n", i+1);
         
         printf("Quantas pessoas entraram:");
         scanf("%d", &entraram);
         no_elevador=no_elevador+entraram;
         
         printf("Quantas pessoas sairam:");
         scanf("%d", &sairam);
         no_elevador=no_elevador-entraram;
      
         printf("Tem %d pessoas no elevador\n\n");
      }
      
      if(no_elevador=>15)
      {
         printf("Excesso de Pessoas\n\n");
         printf("Devem sair %d pessoas\n\n", no_elevador-entraram);
         scanf("%d", &sairam);
      }
  }
  printf("Sairao %d pessoas no ultimo andar", no_elevdor);
  
system("pause");
return 0;

}
   
   
   
   
   

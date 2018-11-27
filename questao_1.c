#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, idade, menor18, acima80, total_pessoas, NUM_TIMES=2, NUM_JOGADORES=3;
    float peso, alt, media_idade, media_alt, percent;
	  
	i=j=idade=menor18=acima80=0;
	peso=alt=media_idade, media_alt, percent=0.0;
	total_pessoas=NUM_TIMES*NUM_JOGADORES; 
	  
    for(i=0; i<NUM_TIMES ;i++) 
    {
       media_idade=0.0;
       for(j=0; j<NUM_JOGADORES ;j++)
       {
          printf("\nDigite a idade, o peso e a altura do jogador %d do time %d:", j+1, i+1);
          scanf("%d, %f, %f", &idade, &peso, &alt);
          media_idade+=idade;
          media_alt+=alt;
		  
		  if(idade < 18)
            menor18++;
		  
		  if(peso>80.0)
		    acima80++;		  
		
	    } 
	    media_idade=media_idade/NUM_JOGADORES;
	    printf("\nA media das idades do time %d e: %2.f", i+1, media_idade);
    }
	   media_alt= media_alt/total_pessoas;
	   percent=100.0*acima80/total_pessoas;
    
    
   printf("\nJogadores com menos de 18 anos: %d", menor18);
   printf("\nA media das alturas de todos os jogadores do campeonato e: %2.f", media_alt);
   printf("A porcentagem de jogadores com mais de 80KG e: %2.f%", percent);
    
 system("pause");
 return 0;   
		  
}

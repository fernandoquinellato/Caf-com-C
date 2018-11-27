#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    int s, n, resp, cont;
    s=1;
    n=0;
    printf("INVESTIGACAO\n\n\n");
    printf ("Responda com [s] Sim ou [n] Nao:\n\n");
    printf ("Telefonou para a vitima?\n");
    scanf ("%s", &resp);
    switch (resp)
    {
            case 's':
                printf ("sim\n\n");
                cont=cont+1;
                break;
           
            case 'n':
                printf ("nao\n\n");
    }
    printf ("Esteve no local do crime?\n");
    scanf ("%s", &resp);
    switch (resp)
    {
           case 's':
                printf ("sim\n\n");
                cont++;
                break;
               
           case 'n':
                printf ("nao\n\n");
    }
    printf ("Mora perto da vitima?\n");
    scanf ("%s", &resp);
    switch (resp)
    {
           case 's':
                printf ("sim\n\n");
                cont++;
                break;
               
           case 'n':
                printf ("nao\n\n");
    }
    printf ("Devia para a vitima?\n");
    scanf ("%s", &resp);
    switch (resp)
    {
           case 's':
                printf ("sim\n\n");
                cont++;
                break;
               
           case 'n':
                printf ("nao\n\n");
    }
    printf ("Ja trabalhou com a vitima?\n");
    scanf ("%s", &resp);
    switch (resp)
    {
           case 's':
                printf ("sim\n\n");
                cont++;
                break;
               
           case 'n':
                printf ("nao\n\n");
              
     }
                      
if (cont <= 1) 
{
  printf ("inocente\n\n");
}
else if (cont == 2)
{
  printf ("suspeito\n\n");
}
else if (cont == 3)
{
  printf ("cumplice\n\n");
}
else if (cont == 4)
{
  printf ("cumplice\n\n");
}
else
{
  printf ("assassino\n\n");
}

 system ("pause");
 return 0;
 
 }

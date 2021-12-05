#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{int i,t,estratto,cond;
 int ar[90];
 
 srand(time(NULL));
 
 printf("OHOHOH \nMi presento sono la tombola in C e sono pronto a farvi divertire\nQuindi senza indugio bevi il vino e premi invio\n");
 getchar();
 
 for(i=0;i<90;i++) ar[i]=0;
 
 estratto= (int)round(((float)rand()/RAND_MAX)*89)+1;

 printf("Il numero estratto è %d\n", estratto); 
 ar[estratto-1]=estratto;
 
  for(i=0;i<9;i++)
  {for(t=0;t<10;t++)
   {printf("%d| ", ar[i*10+t]);
   }
   printf("\n");
  }

 printf("\n\nZIO SMETTILA NON HAI FATTO AMBO\n\n");
 getchar();

 do
 {estratto= (int)round(((float)rand()/RAND_MAX)*89)+1;
  
  if (ar[estratto-1]!=estratto)
  {printf("Il numero estratto è %d\n", estratto);
  ar[estratto-1]=estratto;

   for(i=0;i<9;i++)
   {for(t=0;t<10;t++)
    {printf("%d| ", ar[i*10+t]);
    }
    printf("\n");
   }

   printf("avete finito la tombola? Se si premi 1\n");
   scanf("%d", &cond);
  } 
  else cond=0;

 } while (cond!=1);
 
 return EXIT_SUCCESS;
}
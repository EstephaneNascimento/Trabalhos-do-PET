

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Quest�o 1
/*
int main ()
{
    setlocale (LC_ALL, "portugu�s");
    int i, soma = 0, n;
    para (i = 0; i <10; i ++)
    {
        printf ("Digite um valor:");
        scanf ("%d", &n);
        soma + = n;
    }
    printf ("A soma desses n�meros �:% d", soma);
    retornar 0;
 
}
 
*/
 
 // Quest�o 2
/*
int main ()
{
    int num;
    setlocale (LC_ALL, "portugu�s");
    printf ("Digite um n�mero:");
    scanf ("%d", &num);
    if (num% 15 == 0)
    {
        printf ("Esse n�mero � divis�vel por 15");
    }
    outro
    {
        printf ("Esse n�mero n�o � divis�vel por 15");
    }
 
    retornar 0;
}
 
*/
// Quest�o 3
/*
int main ()
{
    float num;
    setlocale (LC_ALL, "portugu�s");
    printf ("Digite um n�mero:");
    scanf ("%f", &num);
    se (num <0)
    {
        printf ("% f", num * -1);
    }
    outro
    {
        se (num> 10)
        {
            printf ("% f", sqrt (num));
        }
        outro
        {
            if (num> 1 && num <10)
            {
                printf ("% f", num * num);
            }
        }
 
    }
 
    retornar 0;
}
 
*/
 // Quest�o 4

/*
int main ()
{
 
    char letra, n;
    printf("Digite uma letra:");
    scanf("%c", &letra);
    n = letra-32;
    printf("Letra:%c",n);
    return 0;
 
}
*/
 
 // Quest�o 5
/*
int main ()
{
    int periodo;
    printf ("Digite seu periodo:");
    scanf ("% d", & periodo);
 
    interruptor (periodo)
    {
    caso 1:
    printf ("Voc� deve fazer: C�lculo I, Geometria anal�tica ...");
    quebrar;
    caso 2:
    printf ("Voce deve fazer: calculo II, LP ...");
    quebrar;
    padr�o:
    printf ("O n�mero digitado n�o corresponde");
    }
 
    retornar 0;
}
*/
 
 // Quest�o 6
/*
int main ()
{
     int n, i;
    printf ("Digite um n�mero:");
    scanf ("%d", &n);
    for (i = 1; i <= n + n; i + = 2)
    {
        printf ("\n% d", i);
    }
    retornar 0;
}
*/
 
 //Quest�o 7
/*
int main ()
{
    int i, soma = 0;
    para (i = 1; i <60; i + = 2)
    {
       soma + = i;
       printf ("\ n% d", i);
    }
    printf ("% d", soma);
 
    retornar 0;
}
*/
 
 // Quest�o 8
/*
int main ()
{
    float maior = -10000,num;
    int i,quant, armazena = 1;
    printf ("Digite uma quantidade de numeros:");
    scanf ("%d", &quant);
    for (i = 0; i <= quant; i ++)
    {
        printf("\nDigite um numero:");
        scanf("%f",&num);
        if (num==maior)
        {
        	armazena = armazena + 1;
		}
        if (num>=maior)
        {
            maior = num;
        	printf("\nmaior:%d",maior);
		}
	}	
    printf("\nEsse e' o maior numero: %0.f, \nEle foi digitado %d vezes.",maior,armazena);
    return 0;
             
}
*/

// Quest�o 9
/*
int main()
{
	int par = 0,impar = 0,total,num=0;
	
	while (num!=1000)
	{
		printf("\nDigite um numero:");
		scanf("%d",&num);
		if(num%2==0)
		{
			par += 1;
		}
		else
		{
			impar += 1;
		}
		total += 1;
	}
	
	printf("\nQuantidade de numeros pares:%d\n Quantidade de numeros impares:%d\nQuantidades total de numeros:%d",par-1,impar,total-1);
	
}
	
*/

// Quest�o 12

/*
int main()
{
	
	int num1,num2,soma = 0,i,multiplicacao = 1;

	printf("Digite dois numero: que constituam um intervalo:");
	scanf("%d %d",&num1,&num2);
	
	for(i = num1; i <= num2; i++)
	{
		if (i%2==0)
		{
			soma += i;
		}
		else
		{
			multiplicacao *= i;
		}
	}
	
	printf("\nSoma dos numeros pares:%d  \nmultiplicacao dos numeros impares:%d",soma,multiplicacao);
	return 0;
}	

*/




































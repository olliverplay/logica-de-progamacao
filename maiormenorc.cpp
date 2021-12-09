#include<stdio.h>
#include<stdlib.h>

main()
{
	int n1, n2, n3, n4, n5, maior, menor;
	printf("Informe um numero: ");
    scanf("%d",&n1);
    printf("Informe outro numero: ");
    scanf("%d",&n2);
    printf("Informe mais um numero: ");
    scanf("%d",&n3);
    printf("Informe mais um numero: ");
    scanf("%d",&n4);
    printf("Informe mais um numero: ");
    scanf("%d",&n3);
  
            if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5))
                maior = n1;
            else
            if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5))
                maior = n2;
            else
            if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5))
                maior = n3;
            else
            if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5))
                maior = n4;
			else
			if ((n5 > n1) && (n5 > n2) && (n5 > n3) && (n5 > n4))
                maior = n5; 
			else
			
			
			if ((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5))
                menor = n1;
            else
            if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5))
                menor = n2;
            else
            if ((n3 < n1) && (n3 < n2) && (n3 < n4) && (n3 < n5))
                menor = n3;
            else
            if ((n4 < n1) && (n4 < n2) && (n4 < n3) && (n4 < n5))
                menor = n4;
			else
			if ((n5 < n1) && (n5 < n2) && (n5 < n3) && (n5 < n4))
                menor = n5;
			else	 
        
			
    printf("O maior número é %d\n",maior);
    printf("O menor número é %d",menor);
    
    system("pause");
}

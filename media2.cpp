#include<stdio.h>
#include<stdlib.h>

 int main ()
{
	float n1, n2, n3, n4, media;
		printf("Digite suas 4 notas:\n ");
		scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
		printf("%.2f %.2f %.2f %.2f", n1, n2, n3, n4);
	media = (n1+n2+n3+n4)/4;
		if(media >= 7) {
			printf("Voce foi aprovado! sua media e:%.1f\n ", media); 
			}
		if(media < 5) {
			printf("Voce foi reprovado! sua media e:%.1f\n", media);
				}
	    if(media < 6.9) {
				printf("Voce ficou de recuperacao! Sua media e:%.1f\n", media);
						}
						
						system("pause");			
}

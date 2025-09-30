/*
	Name: txNasc_populacao.cpp
	Author: Giovanni Tonsa
	Date: 30/09/25 11:39
	Description: programa que mostra a taxa de crescimento de 2 paises a < b e tx a > b
*/

# include <stdio.h>
# include <conio.h> 
# include <windows.h>

main()
{
	int populaA , populaB, anos;
	float taxaA , taxaB; 
	
		populaA = populaB = anos = 0;
		taxaA = taxaB = 0.0;
		
		puts("Programa para saber o crescimento de 2 paises");
		puts("=============================================");
		printf("Digite a populacao do pais A: ");
		scanf("%d", &populaA);
		printf("Digite a populacao do pais B: ");
		scanf("%d", &populaB);
		printf("Digite a taxa do pais A: ");
		scanf("%f", &taxaA);
		printf("Digite a taxa do pais B: ");
		scanf("%f", &taxaB);
		taxaA = taxaA / 100;
		taxaB = taxaB / 100;
		
		//calculo da população
		
		while (populaB > populaA)
		{
			populaA = populaA + (populaA * taxaA);
			printf("\nPais A: %d", populaA);
			
			populaB = populaB + (populaB * taxaB);
			printf("\nPais B: %d", populaB);
			
			anos = anos+ 1;
		}
		printf("\nO pais A levara %d anos para ultrapassar o pais B", anos);

}//fim do programa


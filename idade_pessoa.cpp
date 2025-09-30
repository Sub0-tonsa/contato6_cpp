/*
	Name: idade_pessoa.cpp
	Author: Giovanni Tonsa 
	Date: 30/09/25 10:45
	Description: programa que classificar a idade da pessoa
*/

# include <stdio.h>
# include <conio.h>
# include <windows.h>

main()
{
	int idade;
	
	while(1)
	{
		idade = 0; 
		
		puts("Programa para saber sua classificacao de idade");
		puts("==============================================");
		printf("Sua idade: ");
		scanf("%d", &idade);
		
		if(idade == 0)
			exit(0);
			
		//Clasificação da idade
		if(idade <= 2)
			puts("Voce e um bebe fofo!!!");
		else if (idade <= 12)
				puts("Voce e uma crianca");
			else if(idade <= 19)
					puts("Voce e um adolecente chato");
				else if(idade <= 65)
						puts("Voce e um adulto");
					else
						puts("Voce e um idoso");
		system("pause");
		system("cls");
	}// fim do while
}// fim do programa


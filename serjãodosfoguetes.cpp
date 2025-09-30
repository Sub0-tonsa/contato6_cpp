/*
	Name: serjãodosfoguetes.cpp
	Author: Giovanni Tonsa
	Date: 30/09/25 11:10
	Description: Programa que mostra a contagem regressiva de um foquete
*/

# include <stdio.h>
# include <conio.h> 
# include <windows.h>

main()
{
	int lanca;
	
	while(1)
	{
		lanca = 0;
		
		puts("Programa que mostra o lancamento de um foguete");
		puts("==============================================");
		printf("Digite seu tempo de lancamento: ");
		scanf("%d", &lanca);
		
		for (lanca = lanca; lanca >= 0; lanca--)
		{
			printf("\nContagem: %d", lanca);
			Sleep(1000);
		}
		puts("\nFogo!!!");
	system("pause");
	system("cls");
	}//fim do while
}//fim do programa



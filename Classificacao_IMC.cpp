/*
	Name: Classificacao_IMC.cpp
	Author: Giovanni Tonsa
	Date: 30/09/25 09:48
	Description: Programa para classificar o IMC a partir da leitura de peso e altura de uma pessoa
*/

# include <stdio.h>
# include <conio.h> //Console Input Output
# include <windows.h> //Biblioteca do sistama operacional

main()
{
	float peso, altura, imc;
 while(1)
 {
	altura = peso = imc = 0.0;
	
	puts("Programa para calcular e classificar o IMC"); //puts - string 
	puts("==========================================");
	printf("Altura: "); //printf - formatação
	scanf("%f", &altura); // & - levar para memoria
	printf("Peso: ");
	scanf("%f", &peso);
	
	if(peso == 0.0 || altura == 0.0)
		exit(0);

	//Calcular o IMC
	imc = peso / (altura * altura);
	printf("IMC: %3.f", imc);
	puts("\n==========================================");
	
	//Classificar o IMC
	if (imc < 16.5)
		puts("\nMagraza extrema!!!");
	else if (imc < 18.5)
			puts("\nMuito magro");
		else if (imc < 25.0)
				puts("\nPeso normal");
			else if (imc < 30.0)
					puts("\nSobrePeso");
				else if (imc < 35.0)
						puts("\nObesidade tipo I - Moderada");
					else if(imc < 40.0)
							puts("\nObesidade tipo II - Severa");
						else
							puts("\nObesidade tipo III - Morbida!!!");
 //system("pause"); //Supende a execução até precionar qualquer tecla
 Sleep(1000);
 system("cls"); //Limpa a tela
 }// fim do while
}//Fim de programa


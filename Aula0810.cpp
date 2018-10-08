// Aula0810.cpp : Defines the entry point for the console application.
//comentario de ate uma linha

/*
comentario longo
para mais de uma linha
*/

#include "stdafx.h" //biblioteca
#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> //biblioteca portugues
// biblioteca  STD= padrao, standart
// biblioteca i/0 entrada e saida

//Variaveis (Globais, visiveis em todo o codigo)
int a; //inteiro
float b; //real (ponto flutuante)
double c; // real(maior precisao do numero)
bool d; //booleano (verdadeiro/falso) (true/false)
int main()
{
	setlocale(LC_ALL, "Portuguese"); // local para mudar para portugues
	//varivel local (visivel somente nesta funcao, a partir dessa linha)
	int e;

	printf("Hello World!\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("A\t\tB\t\tC\n");
	printf("\n");

	//como imprimir valores

	printf("%i\n", 99);
	printf("%f\n", 100.01);

	// texto (string) e valores juntos
	printf("Aqui vai o valor %i, total da soma.\n", 98+5);
	printf("%i + %i = %i\n", 500, 600, 500 + 600);
	a = 150;
	e = 275;
	int f = a + e;
	printf("o resultado da some é: %i\n\n", f);

	//leitura SCANF / SCANF_S

	printf("digite um valor: ");

	scanf_s("%i", &f);

	printf("\nVoce digitou %i\n\n", f); //verificacao

	printf("Digite um valor real (float): ");
	scanf_s("%f", &b);

	printf("voce digitou %f\n\n: ",b);
	printf("/¹²³£¢¬nao aparece nada");

	system("pause");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
 
using namespace std;

void cls()
{

system("cls");

}

void color()
{

system("color c");

}

void desenhaborda ()
{
	cout << "|---------------------------------------|\n";
}

 
//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();

	float hora, salarioHr, salario;
	int opcao = 1;

	while (opcao == 1)
	{
		cls();
		desenhaborda();
		cout << "  Bem vindo(a) a calculadora de sal�rio \n";
		desenhaborda();
	
		cout << "\n\n\nQuanto voc� ganha por hora?: ";
		cin >> salarioHr;
		cout << "Quantas horas voc� trabalha por m�s?: ";
		cin >> hora;
		salario = salarioHr * hora;
		cout << "Seu sal�rio mensal �: " << salario;
		cout << "\n\n\nEscolha uma das op��es abaixo: \n";
		cout << "1 - Calcular outro sal�rio\n";
		cout << "2 - Sair\n";
		cin >> opcao;
		
		while (opcao < 1 || opcao > 2)
		{
			cls();
			cout << "Op��o inv�lida, por favor escolha uma das op��es abaixo:\n";
			cout << "1 - Calcular outro sal�rio\n";
			cout << "2 - Sair\n";
			cin >> opcao;
		}
	}
    return 0;
}

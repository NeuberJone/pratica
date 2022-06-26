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

 
//Função principal do programa
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
		cout << "  Bem vindo(a) a calculadora de salário \n";
		desenhaborda();
	
		cout << "\n\n\nQuanto você ganha por hora?: ";
		cin >> salarioHr;
		cout << "Quantas horas você trabalha por mês?: ";
		cin >> hora;
		salario = salarioHr * hora;
		cout << "Seu salário mensal é: " << salario;
		cout << "\n\n\nEscolha uma das opções abaixo: \n";
		cout << "1 - Calcular outro salário\n";
		cout << "2 - Sair\n";
		cin >> opcao;
		
		while (opcao < 1 || opcao > 2)
		{
			cls();
			cout << "Opção inválida, por favor escolha uma das opções abaixo:\n";
			cout << "1 - Calcular outro salário\n";
			cout << "2 - Sair\n";
			cin >> opcao;
		}
	}
    return 0;
}

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

int menu(int op)
{	
	cout << "\n\n\nEscolha uma das op��es abaixo: \n";
	cout << "1 - Converter outra temperatura\n";
	cout << "2 - Sair\n";
	cin >> op;
	return op;
}
 
//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();

	float grausc, grausf;
	int opcao = 1;

	while (opcao == 1)
	{
		cls();
		desenhaborda();
		cout << "  Bem vindo(a) conversor de temperatura \n";
		desenhaborda();
	
		cout << "\n\n\nEscolha uma das op��es abaixo: \n";
		cout << "1 - Converter celsius para fahrenheit \n";
		cout << "2 - Converter fahrenheit para celsius \n";
		cout << "Digite a sua op��o e aperte ENTER: ";
		cin >> opcao;

		if (opcao == 1){
			
			cout << "Quantos graus celsius gostaria de converter para fahrenheit? ";
			cin >> grausc;
			grausf = (grausc * 9/5) + 32;
			cout << grausc << "�C equivalem a " << grausf << "�F";
		}
		if (opcao == 2){
		
			cout << "Quantos graus fahrenheitgostaria de converter para celsius? ";
			cin >> grausf;
			grausc = (grausf - 32) * 5/9;
			cout << grausf << "�F equivalem a " << grausc << "�C";
			opcao = 1;
		}	
			cout << "\n\n\nEscolha uma das op��es abaixo: \n";
			cout << "1 - Converter outra temperatura\n";
			cout << "2 - Sair\n";
			cout << "Digite a sua op��o e aperte ENTER: ";
			cin >> opcao;
			cls();
				
		while (opcao < 1 || opcao > 2)
		{
			cls();
			cout << "Op��o inv�lida, por favor escolha uma das op��es abaixo:\n";
			cout << "1 - Converter outra temperatura\n";
			cout << "2 - Sair\n";
			cout << "Digite a sua op��o e aperte ENTER: ";
			cin >> opcao;
		}
	}
    return 0;
}

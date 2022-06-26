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

system("color e");

}

void desenhaborda ()
{
	cout << "|---------------------------------------|\n";
}

int menu(int op)
{
	cout << "\n\n\nEscolha uma das opções abaixo: \n";
	cout << "1 - Converter outra temperatura\n";
	cout << "2 - Sair\n";
	cin >> op;
	return op;
}

//Função principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();


    return 0;
}

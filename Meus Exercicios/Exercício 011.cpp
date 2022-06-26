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

	float n3;
	int n1, n2;

	cout << "Digite um número inteiro: ";
	cin >> n1;
	cout << "Digite outro número inteiro: ";
	cin >> n2;
	cout << "Digite um número real: ";
	cin >> n3;
	cout << "\n\nO produto do dobro do primeiro número com metade do segundo é: " << (n1*2)*(n2/2);
	cout << "\nA soma do triplo do primeiro número com o terceiro é: " << (n1*3)+n3;
	cout << "\nO terceiro número elevado ao cubo é: " << n3 * n3 * n3;
	
    return 0;
}

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

	float n3;
	int n1, n2;

	cout << "Digite um n�mero inteiro: ";
	cin >> n1;
	cout << "Digite outro n�mero inteiro: ";
	cin >> n2;
	cout << "Digite um n�mero real: ";
	cin >> n3;
	cout << "\n\nO produto do dobro do primeiro n�mero com metade do segundo �: " << (n1*2)*(n2/2);
	cout << "\nA soma do triplo do primeiro n�mero com o terceiro �: " << (n1*3)+n3;
	cout << "\nO terceiro n�mero elevado ao cubo �: " << n3 * n3 * n3;
	
    return 0;
}

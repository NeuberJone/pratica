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

system("color a");

}

 
//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();
	
	int n, m;
	
	cout << "Digite um n�mero: ";
	cin >> n;
	cout << "Digite outro n�mero: ";
	cin >> m;
	cout << "A soma dos dois n�meros informado foi: " << n + m;
	
    
    return 0;
}

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

 
//Função principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();
	
	int n, m;
	
	cout << "Digite um número: ";
	cin >> n;
	cout << "Digite outro número: ";
	cin >> m;
	cout << "A soma dos dois números informado foi: " << n + m;
	
    
    return 0;
}

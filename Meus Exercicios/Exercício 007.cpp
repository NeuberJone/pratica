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

 
//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();

	float base, area;

	cout << "Digite o tamanho da base do quadrado: ";
	cin >> base;
	area = base * base;
	cout << "A �rea �: " << area;
	cout << ". E o dobro da �rea �: " << area * 2; 
	
	
    
    return 0;
}

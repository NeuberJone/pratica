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

	float raio, pi=3.14, area;

	cout << "Digite o raio: ";
	cin >> raio;

	area = pi * raio * raio;

	cout << "A �rea �: " << area;
	
	
    
    return 0;
}

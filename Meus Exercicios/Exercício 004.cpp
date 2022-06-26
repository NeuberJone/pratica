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
	
	int n1, n2, n3, n4, media;
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	cout << "Digite a terceira nota: ";
	cin >> n3;
	cout << "Digite a quarta nota: ";
	cin >> n4;
	media = (n1+n2+n3+n4)/4;
	cout << "A média das notas informadas é: " << media;
	
    
    return 0;
}

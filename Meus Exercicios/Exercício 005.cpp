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

int menu1(int op1)
{
	cout << "Qual medida voc� gostaria de fazer a convers�o?\n";
	cout << "1 - Mil�metro (mm)\n";
    cout << "2 - Cent�metro (cm)\n";
    cout << "3 - Dec�metro (dm)\n";
    cout << "4 - Metro (m)\n";
    cout << "5 - Dec�metro (dam)\n";
    cout << "6 - Hect�metro (hm)\n";
    cout << "7 - Kil�metro (km)\n";
    cin >> op1;
	cls();
    return op1;
}

int menu2(int op2)
{
	cout << "Voc� quer converter para qual medida?\n";
    if (op2 != 1){
    	cout << "1 - Mil�metro (mm)\n";	
	}
    if (op2 != 2){
    	cout << "2 - Cent�metro (cm)\n";	
	}
    if (op2 != 3){
    	cout << "3 - Dec�metro (dm)\n";	
	}
    if (op2 != 4){
    	cout << "4 - Metro (m)\n";	
	}
    if (op2 != 5){
    	cout << "5 - Dec�metro (dam)\n";	
	}
    if (op2 != 6){
    	cout << "6 - Hect�metro (hm)\n";	
	}
    if (op2 != 2){
    cout << "7 - Kil�metro (km)\n";
	}
	cin >> op2;
	cls();
	return op2;
}

//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();
	
	int escolha1, escolha2, escolha3, aux1, aux2;
	float medida;
	 

	switch (menu1(escolha1))
	{
	case 1:
		aux1 = escolha1;
		escolha1 = escolha2;
		menu2(escolha2);
	
	break;
	case 2:
		menu2(escolha2);
	
	break;
	case 3:
		menu2(escolha2);
	
	break;
	case 4:
		menu2(escolha2);
	
	break;
	case 5:
		menu2(escolha2);
	
	break;
	case 6:
		menu2(escolha2);
	
	break;
	case 7:
		menu2(escolha2);
	
	break;
	}
	
 	
    return 0;
}

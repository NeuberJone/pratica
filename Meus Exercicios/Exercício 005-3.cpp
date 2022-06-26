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
	
system("color b");

}

void desenhaborda ()
{
	cout << "|---------------------------------------------------------------|\n";
}

void menu1()
{
	cout << "Qual medida voc� gostaria de fazer a convers�o?\n";
	cout << "1 - Mil�metro (mm)\n";
    cout << "2 - Cent�metro (cm)\n";
    cout << "3 - Dec�metro (dm)\n";
    cout << "4 - Metro (m)\n";
    cout << "5 - Dec�metro (dam)\n";
    cout << "6 - Hect�metro (hm)\n";
    cout << "7 - Kil�metro (km)\n";
    
}

void menu2(int op2)
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
}

float multiplica (float med)
{
	return med * 10;
}

float divide (float med)
{
	return med / 10;
}


//Fun��o principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();
	
	int escolha1 = 0, escolha2 = 0, escolha3 = 0, i, j;
	float medida;

	while (escolha3 != 1 && escolha3 != 2)
	{
		cout << "Escolha uma op��o:\n";
		cout << "1 - Converter uma medida\n";
		cout << "2 - Sair\n";
		cin >> escolha3;
		
		switch (escolha3)
		{
			case 1:
				while (escolha1 < 1 || escolha1 > 7)
				{
					cls ();
					menu1();
					cin >> escolha1;
					cls ();	
				}
				
				while (escolha2 < 1 || escolha2 > 7)
				{
					menu2(escolha1);
					cin >> escolha2;
					cls ();
				}
				
				cout << "Digite o valor da medida a ser convertido :";
				cin >> medida;
				cls();	
				
				for (i = 1; i <= escolha1; i++)
				{
					for (j = 1; j <= escolha2; j++)
					{
						if (i < j)
						{
							medida = divide(medida);
						}
						if (i > j)
						{
							medida = multiplica(medida);
						}
					}
				}
				if (escolha2 == 1)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " mil�metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 2)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " cent�metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 3)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " dec�metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 4)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 5)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " dec�metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 6)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " hect�metro(s).\n";
					desenhaborda ();
				}
				if (escolha2 == 7)
				{
					desenhaborda ();
					cout << "     O resultado da convers�o �: " << medida << " kil�metro(s).\n";
					desenhaborda ();
				}
				break;
				
			case 2:
				break;
				
			default:
				cls();
				cout << "Op��o inv�lida, por favor selecione uma das op��es v�lidas.\n\n";
				break;
				
		}
	}	
 	
    return 0;
}

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void cls()
{

system("cls");

}

void desenhaborda ()
{
	cout << "|---------------------------|\n";
}

int invalida (int op)
{
    cout << "Op��o inv�lida, por favor escolha uma das op��es abaixo:\n\n";
    cout << "1 - Voltar ao menu anterior\n";
    cout << "2 - Sair\n\n";
    cout << "Escolha uma das op��es e aperte ENTER: ";
    cin >> op;
    if (op == 2)
        {
            cout << "\n\nAt� logo!\n\n";
        }
    return op;
}

int voltaMenu (int op)
{
    cout << "\n\nEscolha uma das op��es abaixo:\n";
    cout << "1 - Voltar ao menu anterior\n";
    cout << "2 - Sair\n\n";
    cout << "Escolha uma das op��es e aperte ENTER: ";
    cin >> op;
    if (op == 2)
        {
            cout << "\n\nAt� logo!\n\n";
        }
    return op;
}

void menuPrincipal()
{

    cout << "Escolha uma das op��es abaixo: \n";
    cout << "1 - Inicializar a matriz com 80 items (ou seja, 20x4)\n";
    cout << "2 - Listar a matriz\n";
    cout << "3 - Inserir nova ficha, para aposi��o escolhida\n";
    cout << "4 - Com base no ano atual (2022) quem � o mais velho da lista?\n";
    cout << "5 - Quantas raparigas h� na lista?\n";
    cout << "6 - Quantos rapazes h� em Maximinos?\n";
    cout << "7 - Ler ano; esta ano aparece repetido?\n";
    cout << "8 - H� anos repetidos?\n";
    cout << "9 - Listar apenas as raparigas\n";
    cout << "10 - Listar apenas os rapazes\n";
    cout << "11 - Sair\n\n";
    cout << "Escolha uma das op��es e aperte ENTER: ";
}

// inicializa com 20 nomes e 20 freguesias
void inicializaMatriz(string fichas[20][4])
{
	fichas[0][0] = "Ana";
	fichas[1][0] = "Bela";
	fichas[2][0] = "Carlos";
	fichas[3][0] = "Carlota";
	fichas[4][0] = "Daniel";
	fichas[5][0] = "Diogo";
	fichas[6][0] = "Elvira";
	fichas[7][0] = "Fernanda";
	fichas[8][0] = "Fernando";
	fichas[9][0] = "Gilherme";
	fichas[10][0] = "Hilda";
	fichas[11][0] = "Josildo";
	fichas[12][0] = "Josecas";
	fichas[13][0] = "Maria";
	fichas[14][0] = "Anabela";
	fichas[15][0] = "Otaviano";
	fichas[16][0] = "Rui";
	fichas[17][0] = "Silv�rio";
	fichas[18][0] = "Teodoro";
	fichas[19][0] = "Zacarias";

	fichas[0][1] = "Maximinos";
	fichas[1][1] = "Gualtar";
	fichas[2][1] = "Lomar";
	fichas[3][1] = "Lomar";
	fichas[4][1] = "Cividade";
	fichas[5][1] = "Lamaceiros";
	fichas[6][1] = "Maximinos";
	fichas[7][1] = "Ferreiros";
	fichas[8][1] = "Maximinos";
	fichas[9][1] = "Cividade";
	fichas[10][1] = "Cabreira";
	fichas[11][1] = "Cividade";
	fichas[12][1] = "Gualtar";
	fichas[13][1] = "Cividade";
	fichas[14][1] = "Gualtar";
	fichas[15][1] = "Maximinos";
	fichas[16][1] = "Maximinos";
	fichas[17][1] = "Maximinos";
	fichas[18][1] = "Gualtar";
	fichas[19][1] = "Lindoso";

	fichas[0][2] = "F";
	fichas[1][2] = "F";
	fichas[2][2] = "M";
	fichas[3][2] = "M";
	fichas[4][2] = "M";
	fichas[5][2] = "M";
	fichas[6][2] = "F";
	fichas[7][2] = "F";
	fichas[8][2] = "M";
	fichas[9][2] = "M";
	fichas[10][2] = "F";
	fichas[11][2] = "M";
	fichas[12][2] = "M";
	fichas[13][2] = "F";
	fichas[14][2] = "F";
	fichas[15][2] = "M";
	fichas[16][2] = "M";
	fichas[17][2] = "M";
	fichas[18][2] = "M";
	fichas[19][2] = "M";

    fichas[0][3] = "1980";
	fichas[1][3] = "1982";
	fichas[2][3] = "1981";
	fichas[3][3] = "1980";
	fichas[4][3] = "1980";
	fichas[5][3] = "1980";
	fichas[6][3] = "1977";
	fichas[7][3] = "1977";
	fichas[8][3] = "1983";
	fichas[9][3] = "1989";
	fichas[10][3] = "1980";
	fichas[11][3] = "1981";
	fichas[12][3] = "1982";
	fichas[13][3] = "1975";
	fichas[14][3] = "1980";
	fichas[15][3] = "1988";
	fichas[16][3] = "1987";
	fichas[17][3] = "1980";
	fichas[18][3] = "1985";
	fichas[19][3] = "1986";
}

//Fun��o principal do programa
int main()
{
    string cad[20][4], info;
    int i, j, opcao = 1, cont, n;
	
    //la�o para segurar o usu�rio no menu
	while (opcao == 1)
	{
        //inicializaMatriz(cad);
        cls();
		desenhaborda();
		cout << "        Miniprojeto 3 \n";
		desenhaborda();

		menuPrincipal();
		
		cin >> opcao;

		switch (opcao)
		{
			case 1:
				cls();
				cout << "A op��o escolhida foi Inicializar a Matriz\n\n";

				cout << "A matriz foi iniciada";
				//Inicializa a matriz
				inicializaMatriz(cad);
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			
			case 2:
				cls();
				cout << "A op��o escolhida foi Listar a matriz\n\n";
				//listar a matriz
				for ( i = 0; i < 20; i++)
				{
					cout << i + 1;
					for ( j = 0; j < 4; j++)
					{
						cout << " - " << cad[i][j]; 
					}
					cout << "\n";
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 3:
				cls();
				//Altera uma ficha na posi��o escolhida
				cout << "A op��o escolhida foi Inserir nova ficha, para aposi��o escolhida\n\n";
				
				for ( i = 0; i < 20; i++)
				{
					cout << i + 1;
					for ( j = 0; j < 4; j++)
					{
						cout << " - " << cad[i][j]; 
					}
					cout << "\n";
				}
				cout << "\n\nDigite a posi��o que deseja alterar: ";
				cin >> n;
				cout << "Na posi��o " << n << " est� a ficha: " << n;
				for ( j = 0; j < 4; j++)
				{
					cout << " - " << cad[n-1][j]; 
				}
				cout << "\nDigite o nome: ";
				cin >> info;
				cad[n-1][0] = info;
				cout << "Digite o local: ";
				cin >> info;
				cad[n-1][1] = info;
				cout << "Digite o g�nero: ";
				cin >> info;
				cad[n-1][2] = info;
				cout << "Digite o ano de nascimento: ";
				cin >> info;
				cad[n-1][3] = info;
				cout << "\n\n A entrada " << n << " foi alterada para: " << n;
				for ( j = 0; j < 4; j++)
				{
					cout << " - " << cad[n-1][j]; 
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 4:
				cls();
				cont = 0;
				//Verifica quem ? o mais velho da lista.
				cout << "A op??o escolhida foi verificar quem ? o mais velho da lista\n\n";
				for ( i = 0; i < 20; i++)
				{
					if (cad [cont][3] > cad[i][3])
					{
						cont = i;
					}
				}
				cout << "A pessoa mais velha da lista ?: " << cad[cont][0];
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 5:
				cls();
				cout << "A op��o escolhida foi verificar quantas raparigas h� na lista\n\n";
				//Verifica quantas raparigas h� na lista
				cont = 0;
				for ( i = 0; i <20; i++)
				{
					if (cad [i][2] == "F")
					{
						cont++;
					}
				}
				cout << "Existem " << cont << " raparigas na lista.\n\n";

				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 6:
				cls();
				cout << "A op��o escolhida foi verificar quantos rapazes h� em Maximinos\n\n";
				//Verifica quantos rapazes h� em Maximinos
				cont = 0;
				for ( i = 0; i <20; i++)
				{
					for ( j = 0; j < 4; j++)
					{
						if (cad [i][1] == "Maximinos" && cad [i][2] == "M")
						{
							cont++;
						}
					}
				}
				cout << "Existem " << cont / 4 << " rapazes em Maximinos\n\n";

				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 7:
				cls();
				//L� um ano digitado pelo usu�rio e verifica quantas vezes aparece na lista
				cont = 0;
				cout << "A op��o escolhida foi ler ano e verificar se aparece repetido\n\n";
				cout << "Digite o ano a ser verificado: ";
				cin >> info;
				for ( i = 0; i <20; i++)
				{
					for ( j = 0; j < 4; j++)
					{
						if (cad [i][3] == info)
						{
							cont++;
						}
					}
				}
				if (cont > 1)
				{
					cout << "O ano de " << info << " aparece " << cont << " na lista.";
				}
				else if (cont == 1)
				{
					cout << "O ano de " << info << " aparece apenas uma vez na lista.";
				}
				else
				{
					cout << "O ano de " << info	<< " n�o aparece nenhuma vez na lista.";
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 8:
				cls();
				//Verifica se h� anos repetidos na lista.
				cont = 0;
				cout << "A op��o escolhida foi verificar se h� anos repetidos\n\n";
				for ( i = 0; i < 20; i++)
				{
					for ( j = 0; j < 20; j++)
					{
						if (cad [i][3] == cad[j][3])
						{
							cont++;
						}
					}
				}
				if (cont > 0)
				{
					cout << "Existem anos repetidos na lista.";	
				}
				else
				{
					cout << "N�o existem anos repetidos na lista.";
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;

			case 9:
				cls();
				cout << "A op��o escolhida foi listar apenas as raparigas\n\n";
				//Lista apenas as raparigas
				for ( i = 0; i <20; i++)
				{
					for ( j = 0; j < 4; j++)
					{
						if (cad [i][2] == "F")
						{
							cout << cad[i][j] << "  ";
						}
					}
					if (cad [i][2] == "F")
						{
							cout << "\n";
						}
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			
			case 10:
				cls();
				cout << "A op��o escolhida foi listar apenas os rapazes\n\n";
				//Lista apenas os rapazes
				for ( i = 0; i <20; i++)
				{
					for ( j = 0; j < 4; j++)
					{
						if (cad [i][2] == "M")
						{
							cout << cad[i][j] << "  ";
						}
					}
					if (cad [i][2] == "M")
						{
							cout << "\n";
						}
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			
			case 11:
				cls();
				cout << "At� logo!\n\n";
				break;
			
			default:
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
		}
    }
}
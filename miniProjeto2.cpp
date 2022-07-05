#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void cls()
{

system("cls");

}

void desenhaborda ()
{
	cout << "|---------------------|\n";
}

int invalida (int op)
{
    cout << "Opção inválida, por favor escolha uma das opções abaixo:\n";
    cout << "1 - Voltar ao menu anterior\n";
    cout << "2 - Sair\n\n";
    cout << "Escolha uma das opções e aperte ENTER: ";
    cin >> op;
    if (op == 2)
        {
            cout << "\n\nAté logo!\n\n";
        }
    return op;
}

int voltaMenu (int op)
{
    cout << "\n\nEscolha uma das opções abaixo:\n";
    cout << "1 - Voltar ao menu anterior\n";
    cout << "2 - Sair\n\n";
    cout << "Escolha uma das opções e aperte ENTER: ";
    cin >> op;
    if (op == 2)
        {
            cout << "\n\nAté logo!\n\n";
        }
    return op;
}

void reset2 (string *vet2)
{
	vet2[0] = "1";
	vet2[1] = "2";
	vet2[2] = "3";
	vet2[3] = "4";
	vet2[4] = "5";
	vet2[5] = "6";
	vet2[6] = "7";
	vet2[7] = "8";
	vet2[8] = "9";
	vet2[9] = "10";
}

void reset (char *vet)
{
    vet[0] = 'X';
	vet[1] = 'X';
	vet[2] = 'X';
	vet[3] = 'X';
	vet[4] = 'X';
	vet[5] = 'X';
	vet[6] = 'X';
	vet[7] = 'X';
	vet[8] = 'X';
	vet[9] = 'X';
}

void geraT (char *vet)
{
    int m;
    m = rand() % 10;
    vet[m] = 'T';
}


void menuPrincipal()
{
    cout << "\n\nEscolha uma das opções abaixo: \n";
    cout << "1 - Limpar os tesouros\n";
    cout << "2 - Gerar tesouro\n";
    cout << "3 - Listar o array\n";
    cout << "4 - Tentar acertar no tesouro; quando acertar, o programa informará acertou em n tentativas!\n";
    cout << "ESC - Sair\n\n";
    cout << "Escolha uma das opções e aperte ENTER: ";
}
//Função principal do programa
int main()
{
    //Para gerar números realmente aleatórios
    srand((unsigned)time(NULL));

    //Permite usar acentos
    setlocale(LC_ALL,"");

    int opcao = 1, i, n, pa, jogadas;
    char mapa[10] = {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'};
    string mask [10] = {"1","2","3","4","5","6","7","8","9","10"};
    bool tesouroGerado = false, cavando = 1;
    

    n = rand() % 10;
    //laço para segurar o usuário no menu
	while (opcao == 1)
	{
	    cls();
		desenhaborda();
		cout << "    Caça ao Tesouro  \n";
		desenhaborda();
		menuPrincipal();
		cin >> opcao;
		switch (opcao){
            case 1:
                cls();
				cout << "A opção escolhida foi limpar o tesouro\n\n";
				//limpar tesouro

                reset(mapa);
                reset2(mask);
                for ( i = 0; i <10; i++)
				{
					cout << " | " << mapa[i];
				}
				cout << " |";
                tesouroGerado = false;
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
            case 2:
                cls();
				cout << "A opção escolhida foi gerar tesouro\n\n";
				//gerar tesouro

				cout << "\n\nO tesouro foi gerado! Boa sorte!\n\n";
				geraT (mapa);
                tesouroGerado = true;
                opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
                break;
            case 3:
                cls();
				cout << "A opção escolhida foi listar array\n\n";
				//listar array
                for ( i = 0; i <10; i++)
				{
					cout << " | " << mapa[i];
				}
				cout << " |";
                opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
                break;
            case 4:
                cls();
                if (tesouroGerado == false)
                {
                    geraT (mapa);
                    tesouroGerado = true;
                    cout<< "O tesouro foi gerado. Boa Sorte!";
                }
                
                cavando = 1;
				cout << "A opção escolhida foi tentar acertar o tesouro\n\n";
				//tentar acertar o tesouro
				n = 0;
				while (cavando == 1)
                {
                    cls();
                    cout << "\n\n" << n << " tentativas até agora.\n\n";
                    for (i = 0; i < 10; i++)
                    {
                        cout <<  " | "  << mask[i];
                    }
                    cout << " |";
                    cout << "\n\nDigite o número referente ao lugar onde quer cavar: ";
                    cin >> pa;
                    mask[pa-1] = mapa[pa-1];
                    n = n + 1;
                    if (mapa[pa-1] == 'T')
                    {
                        cls();
                        cout << "\n\n\n\n";
                        for (i = 0; i < 10; i++)
                        {
                            cout <<  " | "  << mask[i];
                        }
                        cout << "\n\n\nPARABÉNS! VOCÊ ENCONTROU O TESOURO EM " << n << " TENTATIVAS.";
                        cavando = 0;
                        opcao = voltaMenu (opcao);
                        while (opcao < 1 || opcao > 2)
                        {
                            cls();
                            opcao = invalida(opcao);
                        }
                    }
                }
                reset(mapa);
                reset2(mask);
                
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

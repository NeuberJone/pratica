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
	cout << "|---------------------------|\n";
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

void menuPrincipal()
{
    cout << "Escolha uma das opções abaixo: \n";
    cout << "1 - Listar o array\n";
    cout << "2 - Trocar o nome de uma certa posição escolhida pelo utilizador (ler posição, ler nome)\n";
    cout << "3 - Procurar nome: pedir nome ao utilizador; verificar se esse nome existe (sim/não)\n";
    cout << "4 - Fazer o 'reset' à lista de nomes (inicializar o array com os nomes originais)\n";
    cout << "5 - Ler nome; quantas vezes esse nome aparece no array?\n";
    cout << "6 - Listar número (posição no array), nome, comprimento em letras (ex.: 1, Ana, 3 letras)\n";
    cout << "7 - Qual o nome maior? (ex.: Zacarias, 8 letras)\n";
    cout << "8 - Sair\n\n";
    cout << "Escolha uma das opções e aperte ENTER: ";
}

void reset (string *vet)
{
    vet[0] = "Ana";
	vet[1] = "Rui";
	vet[2] = "Pedro";
	vet[3] = "Abel";
	vet[4] = "Rita";
	vet[5] = "Seara";
	vet[6] = "Isabel";
	vet[7] = "Paulo";
	vet[8] = "Daniel";
	vet[9] = "Teresa";
	vet[10] = "Joaquim";
	vet[11] = "Tone";
	vet[12] = "Maria";
	vet[13] = "Manuel";
	vet[14] = "Beatriz";
	vet[15] = "Carol";
	vet[16] = "Alex";
	vet[17] = "Tiago";
	vet[18] = "Anabela";
	vet[19] = "Sandra";
}

//Função principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,""); color();

	int i, p1, aux = 0;
	int opcao = 1;
	
	//declarar array de strings para armazenar 20 nomes
	string listaDeNomes[20] = {"Ana","Rui","Pedro","Abel","Rita","Seara","Isabel","Paulo","Daniel","Teresa","Joaquim","Tone","Maria","Manuel","Beatriz","Carol","Alex","Tiago","Anabela","Sandra" };
	string nome1, nome2;

	//laço para segurar o usuário no menu
	while (opcao == 1)
	{
		cls();
		desenhaborda();
		cout << "        Miniprojeto 1 \n";
		desenhaborda();
		menuPrincipal();
		cin >> opcao;
		switch (opcao)
		{
			case 1:
				cls();
				cout << "A opção escolhida foi listar array\n\n";
				//listar o array
				for ( i = 0; i <20; i++)
				{
					cout << listaDeNomes[i]<< "\n";
				}
				opcao = voltaMenu (opcao);
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			case 2:
				cls();
				cout << "A opção escolhida foi trocar o nome de uma certa posição\n\n";
				//trocar o nome de uma certa posição escolhida pelo utilizador (ler posição, ler nome)
				for (i = 0; i <20; i++)
				{
					cout << "\n\Insira posicao\n";
					cin >> p1;
					p1 = p1 - 1;
					cout << "\nNesta posicao, esta o nome " << listaDeNomes[p1]<<"\n";
					cout << "\n\Insira novo nome\n";
					cin >> nome1; "\n";
					listaDeNomes[p1] = nome1;
					cout << "\nO nome na posicao " << p1 + 1 << " alterado para " << nome1<< "\n\n";
					break;
				}
				opcao = 0;
				for (i = 0; i < 20; i++)
				{
					cout << listaDeNomes[i] << "\n";
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
				cout << "A opção escolhida foi verificar se o nome existe\n\n";
				//procurar nome: pedir nome ao utilizador; verificar se esse nome existe (sim/não)
				cout << "\n\insira nome a verificar\n";
				cin >> nome2; "\n";
				for (i = 0; i < 20; i++)
				{
					if (nome2 == listaDeNomes[i])
					{
						aux++;
					}
				}
				if (aux > 0)
				{
					cout << "\nO nome " << nome2 << " consta na relacao";
				}
				else
				{
					cout << "\nO nome " << nome2 << " nao consta na relacao";
				}
                opcao = voltaMenu (opcao);
				aux = 0;
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			case 4:
				cls();
				cout << "A opção escolhida foi resetar a lista de nomes\n\n";
				//reseta o array
                reset(listaDeNomes);
                for ( i = 0; i <20; i++)
				{
					cout << listaDeNomes[i]<< "\n";
				}
                opcao = voltaMenu (opcao);
				aux = 0;
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
			case 5:
				cls();
				cout << "A opção escolhida foi verificar quantas vezes esse nome aparece no array\n\n";
				//ler nome; quantas vezes esse nome aparece no array
				cout << "\n\insira nome a verificar\n";
				cin >> nome2; "\n";

				for (i = 0; i < 20; i++)
				{
					if (nome2 == listaDeNomes[i])
					{
						aux++;
					}
				}
				cout << "o nome " << nome2 << " aparece " << aux << " veze(s) na lista.";
                opcao = voltaMenu (opcao);
				aux = 0;
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
            case 6:
                cls();
                for ( i = 0; i <20; i++)
                {
                    cout << i + 1 << " - " << listaDeNomes[i] << " - " << listaDeNomes[i].length() << " letras\n";
                }
				opcao = voltaMenu (opcao);
				aux = 0;
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
            case 7:
                cls();
				cout << "A opção escolhida foi verificar o maior nome\n\n";
				nome2 = listaDeNomes[0];
                for ( i = 0; i < 19; i++)
				{
				    if (nome2.length() > listaDeNomes[i+1].length()){
				    } else {
                        nome2 = listaDeNomes[i+1];
                        aux = listaDeNomes[i+1].length();
				    }
				}
                cout << "O maior nome na lista é: " << nome2 << " com " << aux << " letras \n\n";
				opcao = voltaMenu (opcao);
				aux = 0;
				while (opcao < 1 || opcao > 2)
				{
					cls();
					opcao = invalida(opcao);
				}
				break;
            case 8:
                cls();
                cout << "\n\nAté logo!\n";
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
    return 0;
}

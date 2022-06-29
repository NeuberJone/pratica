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
    cout << "1 - Resetar a matriz com 80 items (ou seja, 20x4)\n";
    cout << "2 - Listar a matriz\n";
    cout << "3 - Inserir nova ficha, para aposição escolhida\n";
    cout << "4 - Com base no ano atual (2022) quem é o mais velho da lista?\n";
    cout << "5 - Quantas raparigas há na lista?\n";
    cout << "6 - Quantos rapazes há em Maximinos?\n";
    cout << "7 - Ler ano; esta ano aparece repetido?\n";
    cout << "8 - Há anos repetidos?\n";
    cout << "9 - Listar apenas as raparigas\n";
    cout << "10 - Listar apenas os rapazes\n";
    cout << "11 - Sair\n\n";
    cout << "Escolha uma das opções e aperte ENTER: ";
}

// inicializa com 20 nomes e 20 freguesias
void inicializa_matriz(string *mat) // 
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
	fichas[17][0] = "Silvério";
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

	fichas[0][2] = "F"; fichas[0][3] = "1980";
	fichas[1][2] = "F"; fichas[1][3] = "1982";
	fichas[2][2] = "M"; fichas[2][3] = "1981";
	fichas[3][2] = "M"; fichas[3][3] = "1980";
	fichas[4][2] = "M"; fichas[4][3] = "1980";
	fichas[5][2] = "M"; fichas[5][3] = "1980";
	fichas[6][2] = "F"; fichas[6][3] = "1977";
	fichas[7][2] = "F"; fichas[7][3] = "1977";
	fichas[8][2] = "M"; fichas[8][3] = "1983";
	fichas[9][2] = "M"; fichas[9][3] = "1989";
	fichas[10][2] = "F"; fichas[10][3] = "1980";
	fichas[11][2] = "M"; fichas[11][3] = "1981";
	fichas[12][2] = "M"; fichas[12][3] = "1982";
	fichas[13][2] = "F"; fichas[13][3] = "1975";
	fichas[14][2] = "F"; fichas[14][3] = "1980";
	fichas[15][2] = "M"; fichas[15][3] = "1988";
	fichas[16][2] = "M"; fichas[16][3] = "1987";
	fichas[17][2] = "M"; fichas[17][3] = "1980";
	fichas[18][2] = "M"; fichas[18][3] = "1985";
	fichas[19][2] = "M"; fichas[19][3] = "1986";
}

//Função principal do programa
int main()
{
    string mat[20][4];
    int i, j;

        










}

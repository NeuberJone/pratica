#include <iostream>
using namespace std;
int main()
{
	int i, p1, op, contador;
	//declarar array de strings para armazenar 20 nomes
	string listaDeNomes[20] = { "Ana","Rui","Pedro","Abel","Rita","Seara","Isabel","Paulo","Daniel","Teresa","Joaquim","Tone","Maria","Manuel","Beatriz","Carol","Alex","Tiago","Anabela","Sandra" };
	string nome1, nome2;
	contador = 0;
	
	do
	{
		cout << "Selecione opçao:\n";
		cin >> op;

		switch (op)
		{
		case 1:
	//listar o array
			for (i = 0; i < 20; i++)
			{
				cout << listaDeNomes[i] << "\n";
			}
			break;

		case 2:
	//trocar o nome de uma certa posição escolhida pelo utilizador (ler posição, ler nome)
			for (i = 0; i < 20; i++)
			{
				cout << "\n\Insira posicao\n";
				cin >> p1;
				cout << "nesta posicao, esta o nome " << listaDeNomes[p1] << "\n";

				cout << "\n\insira novo nome\n";
				cin >> nome1; "\n";
				listaDeNomes[p1] = nome1;
				cout << "nome na posicao " << p1 << " alterado para " << nome1 << "\n";							
			}
			break;

		case 3:
	//procurar nome: pedir nome ao utilizador; verificar se esse nome existe (sim/não)
			cout << "\n\insira nome a verificar\n";
			cin >> nome2; "\n";

			for (i = 0; i < 20; i++)
			{
				if (nome2 == listaDeNomes[i])
				{
					contador++;
				}
			}

			if (contador > 0)
			{
				cout << "o nome " << nome2 << " consta na relacao";
			}
			else
			{
				cout << "o nome " << nome2 << " nao consta na relacao";
			}

		case 0:
			cout << "tchau!";
			break;
			
		default:
			cout << "numero invalido.";
			break;
		}
	} while (op!=0);


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;


//Função principal do programa
int main()
{
    //Permite usar acentos
    setlocale(LC_ALL,"");

	int i;
	double contador = 0, contador1 = 0, contador2 = 0;
	double arr[5], soma = 0, media = 0;
	bool contador3 = 0;
	
	//Ler os 5 números
	for (i = 0; i <= 4; i++)
	{
		cout << "N?: ";
		cin >> arr[i];

		//Contar os positivos
		if (arr[i] > 0)
		{
			contador++;
		}

		//Contar os negativos
		if (arr[i] < 0)
		{
			contador1++;
		}

		//Verifica se tem zeros
		if (arr[i] = 0)
		{
			contador3 = 1;
		}

		//Somar os números
		soma = soma + arr[i];
	}

	//Descobrir a média
	media = soma / 5;

	//Contar maiores que a média
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > media)
		{
			contador2 ++;
		}
	}
	
	//Imprime as informações
	cout << "Os numeros digitados foram: ";
	for (i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\nA media desses numeros e: " << media;
	if (contador <= 0)
	{
		cout << "\nNao ha numeros positivos";
	}
	else
	{
		cout << "\nForam digitados " << contador << " numeros positivos.";
	}
	if (contador1 <= 0)
	{
		cout << "\nNao ha numeros negativos";
	}
	else
	{
		cout << "\nForam digitados " << contador1 << " numeros negativos.";
	}
	if (contador3 == 0)
	{
		cout << "\nNao ha zeros";
	}
	else
	{
		cout << "\nHa zeros";
	}
	if (contador2 <= 0)
	{
		cout << "\nNao ha numeros maiores que a media";
	}
	else
	{
		cout << "\nForam digitados " << contador2 << " numeros maiores que a media.";
	}

    return 0;
}

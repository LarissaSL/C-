#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h> // Informação do teclado

using namespace std;

int main()
{

	setlocale(LC_ALL, "portuguese");

	int C, F;
	char tecla;

	while (tecla != 27)
	{
		cout << "|               Menu               |";
		cout << "\n\n\n           Conversor de \n";
		cout << "    graus Celsius para Fahrenheit   \n\n\n";
		cout << "   |  Digite 1 para Executar  |\n\n";
		cout << "   |  Digite ESC para Sair    |\n";

		tecla = getch();
		switch (tecla)

		case '1':
	{
		//Entrada dos Dados
		system("cls");
		cout << "|        Conversor de °C para °F         |\n\n";
		cout << "Digite a temperatura em graus Celsius: ";
		cin >> C;

		//Processamento dos Dados
		F = (9 * C + 160) / 5;

		//Saida dos Dados
		system("cls");
		cout << "|         Resultado da Conversão         |\n\n";
		cout << "A temperatura "<< C << "°C equivale a " << F << " °F." << endl;
		system ("pause");
		system ("cls");
		break;
		}
	}

	return 0;
}

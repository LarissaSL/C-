#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <iomanip> // Casas decimais

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double const pi = 3.14;
	double raio, altura, volume;
	char tecla;
	
	while (tecla != 27){
		
		cout << " |            Menu            |\n\n\n";
		cout << "      Calculador do Volume\n";
		cout << "      de uma Lata de Óleo \n\n";
		cout << "  |  Digite 1 para Executar  |\n\n";
		cout << "  |  Digite ESC para Sair    |\n";
		
		tecla = getch();
		switch (tecla)
		case '1':{
		
		//Entrada de Dados
		system ("cls");
		cout << "|    Calculador do Volume   |\n\n";
		cout << "Digite o Raio da lata: ";
		cin >> raio;
	
		cout << "\nDigite a Altura da lata: ";
		cin >> altura;
	
		//Processamento de Dados
		volume = pi *  pow(raio,2) * altura;
	
		//Saída de Dados
		system ("cls");
		cout << "|       Resultado do Volume      |\n\n";
		
		cout << setprecision(2) << fixed; // Definindo quant. das casas decimais
		cout << "Raio informado: " << raio << "\nAltura Informada: " << altura;
		cout << "\n\nO volume da Lata de Óleo é " << volume << endl << endl;
		
		system ("pause");
		system ("cls");	
		break;}
	}

			
return 0;}
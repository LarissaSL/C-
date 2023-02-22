#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <conio.h>

using namespace std;

//Fun��es de Entrada de Dados

double lerReal(){
	
	double real;
	
	cout << "Digite Quantos Reais deseja converter: ";
	cin >> real;
		
return real;}

double cotacaoDolar(){
	
	double cotacao;
	
	cout << "Digite o valor da Cota��o do D�lar: ";
	cin >> cotacao;
	
return cotacao;}

//Fun��o de Processamento de Dados
double conversorRealDolar(double real, double cotacao){
	
	double totalDolar;
	
	totalDolar = real / cotacao;
	
return totalDolar;}

//Voids de Exibi��o
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "             Conversor de\n       Real(R$) para D�lar(US$)       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirNome(){
	cout << " |   Conversor de Real para D�lar   |\n\n";
}

void exibirResultados(double real, double cotacao, double totalDolar){
	
	system("cls");
	cout << " |   Conversor de Real para D�lar   |\n\n";
	cout << setprecision(2) << fixed;
	cout << "O valor informado foi de R$ " << real ;
	cout << "\nA cota��o informada foi de US$ " << cotacao;
	cout << "\n\nA quantia de R$ " << real << " equivale a US$ " << totalDolar << endl << endl;
	system("pause");
	system("cls");
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double valorReal, valorCotacao, valorDolar;
	char tecla;
	
	while (tecla != 27){
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			
			system("cls");
			exibirNome();
			valorReal = lerReal();
			valorCotacao = cotacaoDolar();
			valorDolar = conversorRealDolar (valorReal , valorCotacao);
			exibirResultados (valorReal, valorCotacao, valorDolar);
			
		break;}
	}
		
return 0;}
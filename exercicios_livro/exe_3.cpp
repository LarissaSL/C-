#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

double const pi = 3.14;

using namespace std;

//Funções de Entrada
double lerComprimento(){
	double comprimento;
	
	cout << "Digite o valor do comprimento do Circulo(em cm): ";
	cin >> comprimento;
	
return comprimento;}

//Funções de Processamento de Dados

double diametro(double comprimento){
	double resultado;
	
	resultado = comprimento / pi;
	
return resultado;}

double raio(double comprimento){
	double resultado;
	
	resultado = comprimento / (2 * pi);
	
return resultado;}

double area (double raio1){
	double resultado;
	
	resultado = pi * pow(raio1, 2);
	
return resultado;}

//Voids de Exibição de Dados

void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "        Comprimento, Diâmetro, \n      Raio e Área de um Círculo     \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirNome(){
	cout << " |  Comprimento, Diâmetro, Raio e Área de um Círculo  |\n\n";
}

void exibirResultados(double comprimento, double diametroResul, double raioResul, double areaResul){
	
	system("cls");
	cout << " |  Comprimento, Diâmetro, Raio e Área de um Círculo  |\n\n";
	cout << setprecision(2) << fixed;
	cout << "O valor do Comprimento é " << comprimento << " cm";
	cout << "\nO valor do Diâmetro é " << diametroResul << " cm";
	cout << "\nO valor do Raio é " << raioResul << " cm";
	cout << "\nO valor da Área é " << areaResul << " cm" << endl << endl;
	system("pause");
	system("cls");
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double valorComprimento, valorDiametro, valorRaio, valorArea;
	char tecla;
	
	while (tecla != 27){
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			
			system("cls");
			exibirNome();
			valorComprimento = lerComprimento();
			valorDiametro = diametro(valorComprimento);
			valorRaio = raio(valorComprimento);
			valorArea = area(valorRaio);
			exibirResultados (valorComprimento, valorDiametro, valorRaio, valorArea);
				
		break;}
		
	}
		
return 0;}



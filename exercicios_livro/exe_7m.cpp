#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

//Funções de Entrada de Dados
double lerA(){
	double A;
	
	cout << "Digite o valor de A: ";
	cin >> A;
	
return A;}

double lerB(){
	double B;
	
	cout << "Digite o valor de B: ";
	cin >> B;
	
return B;}

double lerC(){
	double C;
	
	cout << "Digite o valor de C: ";
	cin >> C;
	
return C;}

//Funções de Processamento de Dados
double soma (double A, double B, double C){
	double somaABC;
	
	somaABC = A + B + C;
	 	
return somaABC;}

double quadrado (double somaABC){
	double quadradoABC;
	
	quadradoABC = pow (somaABC,2);
	
return quadradoABC;}

//Voids de Exibição de Dados
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "          Calcular o Quadrado \n         da Soma de A, B e C       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirNome(){
	cout << " |    Quadrado da Soma de A, B e C    |\n\n";
}

void exibirResultados(double A, double B, double C, double somaABC, double quadradoABC){
	
	system("cls");
	cout << " |    Quadrado da Soma de A, B e C    |\n\n";
	cout << "O valor de A é " << A;
	cout << "\nO valor de B é " << B;
	cout << "\nO valor de C é " << C;
	cout << "\n\nA soma de A, B e C é igual a " << somaABC;
	cout<< "\nO quadrado da soma de A, B e C é " << quadradoABC << endl << endl;
	system("pause");
	system("cls");
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double valorA, valorB, valorC, valorSoma, valorQuadrado;
	char tecla;
	
	while (tecla != 27){
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			
			system("cls");
			exibirNome();
			valorA = lerA();
			valorB = lerB();
			valorC = lerC();
			valorSoma = soma(valorA, valorB, valorC);
			valorQuadrado = quadrado(valorSoma);
			exibirResultados(valorA, valorB, valorC, valorSoma, valorQuadrado);
			
		break;}
		
	}
	
	
return 0;}
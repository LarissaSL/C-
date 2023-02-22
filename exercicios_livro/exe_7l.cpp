#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

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
double quadrado(double numero){
	double resultado;
	
	resultado = pow(numero,2);
	
return resultado;}

double soma (double q1, double q2 , double q3){
	double resultado;
	
	resultado = q1 + q2 + q3; 
	
return resultado;}

//Voids de Exibição
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "          Calcular a Soma dos\n         Quadrados de A, B e C       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirNome(){
	cout << " |    Soma dos Quadrados de A, B e C    |\n\n";
}

void exibirResultados(double A, double B, double C, double quadradoA, double quadradoB, double quadradoC,  double somaResul){
	
	system("cls");
	cout << " |    Soma dos Quadrados de A, B e C    |\n\n";
	cout << "O valor de A é " << A;
	cout << "\nO valor de B é " << B;
	cout << "\nO valor de C é " << C;
	cout << "\n\nO valor do Quadrado de A é " << quadradoA;
	cout << "\nO valor do Quadrado de B é " << quadradoB;
	cout << "\nO valor do Quadrado de C é " << quadradoC;
	cout << "\n\nO valor da Soma dos Quadrados de A,B e C é " << somaResul << endl << endl;
	system("pause");
	system("cls");
	  
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double valorA, valorB, valorC, valorQuadradoA, valorQuadradoB, valorQuadradoC, valorSoma;
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
			
			valorQuadradoA = quadrado(valorA);
			valorQuadradoB = quadrado(valorB);
			valorQuadradoC = quadrado(valorC);
			valorSoma = soma(valorQuadradoA, valorQuadradoB, valorQuadradoC);
			
			exibirResultados(valorA, valorB, valorC, valorQuadradoA, valorQuadradoB, valorQuadradoC, valorSoma);
			
		break;}
		
	}
		
return 0;}
#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

//Fun��es de Entrada de Dados
int lerA(){
	
	int A;
	
	cout << "Digite o valor de A: ";
	cin >> A;
	
return A;}

int lerB(){
	
	int B;
	
	cout << "Digite o valor de B: ";
	cin >> B;
	
return B;}

//Fun��es de Processamento de Dados
int subtracao (int vA, int vB){
	
	int sub;
	
	sub = vA - vB;
	
return sub;}

int quadrado (int subtracao1){
	
	int quad;
	
	quad = pow(subtracao1,2);
	
return quad;}

//Fun��es de Exibi��o de Dados
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "          Calcular Quadrado\n       da Diferen�a de A e B       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirNome(){
	cout << " |  Calcular o Quadrado da Diferen�a de A e B  |\n\n";

}

void exibirResultados(int A, int B, int sub, int quad){
	
	system("cls");
	cout << " |  Calcular o Quadrado da Diferen�a de A e B  |\n\n";
	cout << "O valor de A � " << A ;
	cout << "\nO valor de B � " << B;
	cout << "\nO valor da Subtra��o entre " << A << " - " << B << " = " << sub;
	cout << "\n\nO quadrado da diferen�a de A e B � " << quad << endl;
	system("pause");
	system("cls");
	
}

int main(){
	   
	   setlocale(LC_ALL, "portuguese");
	   
	   int valorA, valorB, subAB, quadradoAB;
	   char tecla;
	   
	   while (tecla != 27){
		   menu();
		   
		   tecla = getch();
		   switch (tecla)
		   case '1':{
		   	
			   system("cls");
			   exibirNome();
			   valorA = lerA(); // Atribuindo os retornos das fun��es pra variaveis
			   valorB = lerB();
			   subAB = subtracao(valorA, valorB);
			   quadradoAB = quadrado(subAB);
			   exibirResultados(valorA, valorB, subAB, quadradoAB);
			   	   
		   break;}
		   	   
	   }
	   	
return 0;}
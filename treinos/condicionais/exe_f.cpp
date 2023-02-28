/* Treinando Tomada de Decisão em C++
f. Efetuar a leitura de três valores (variáveis A, B e C)
e apresentá-los dispostos em ordem crescente.*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

//Funções de Entrada
int lerA(){
	int A;
	
	cout << "Digite o valor de A: ";
	cin >> A; 

return A;}

double lerB(){
	double B;
	
	cout << "Digite o valor de B: ";
	cin >> B;
	
return B;}

int lerC(){
	int C;
	
	cout << "Digite o valor de C: ";
	cin >> C;
	
return C;}

//Voids de Saída
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "     Estruturas Condicionais dos\n          Operadores Lógicos       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibir(int A, double B, int C){
	system("cls");
	
	cout << " |      Tomadas de Decisão      |" << endl << endl;
	cout << "Valores inseridos" << endl;
	cout << "Valor de A: " << A << "\nValor de B: " << B << "\nValor de C: " << C;
	cout << "\n\nEm ordem Crescente\n";
	
	if(A < C && A < B && C < B){
		cout <<  A << " , " << C << " , " << B << endl;
	} else if (A < B && A < C && B < C){
		cout <<  A << " , " << B << " , " << C << endl;
		}
		
	if (B < A && B < C && A < C){
		cout <<  B << " , " << A << " , " << C << endl;
	}else if (B < A && B < C && C < A){
		cout << B << " , " << C << " , " << A << endl;
		}
		
	if (C < A && C < B && A < B){
		cout << C << " , " << A << " , " << B << endl;
	}else if (C < A && C < B && B < A){
		cout <<  C << " , " << B << " , " << A << endl;
	}
	
	if (A == 0 && B == 0){
		cout << A << " , " << B << " , " << C << endl;
	}else if (A == 0 && C == 0){
		cout << A << " , " << C << " , " << B << endl;
	}
	
	if (B == 0 && C == 0 && A != 0){
		cout << A << " , " << B << " , " << C << endl;
	}
		
	system("pause");
	system("cls");
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int valorA, valorB, valorC;
	char tecla;
		
	while (tecla != 27){
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			system("cls");
			valorA = lerA();
			valorB = lerB();
			valorC = lerC();
			exibir(valorA, valorB, valorC);
		}
	}
	
	
return 0;}
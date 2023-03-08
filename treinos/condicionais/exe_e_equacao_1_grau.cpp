/*e. Efetuar a leitura de tr�s valores (vari�veis A, B e C) e efetuar o c�lculo
da equa��o completa de primeiro grau. Lembre-se de que a vari�vel A deve ser diferente de zero. */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Fun��es de Entrada de Dados
int lerA(){
	int A;
	
	cout << "A equa��o de 1� grau se da pela formula: ax + b = c\n\n";
	cout << "Sabendo disso, digite o valor de A: ";
	cin >> A;
	
return A;}

int lerB(){
	int B;
	
	cout << "Digite o valor de B: ";
	cin >> B;
	
return B;}

int lerC(){
	int C;
	
	cout << "Digite o valor de C: ";
	cin >> C;
	
return C;}

//Processamento de Dados
int valorX(int A, int B, int C){
	int X;
	
	X = (B - B + C - B) / A;
	
return X;}

//Saida de dados
void exibir(int A, int B, int C, int X){
	
	system("cls");
	cout << "Os valores digitados foram: " << endl << endl;
	cout << "Valor de A: " << A << "\nValor de B: " << B << "\nValor de C: " << C << endl << endl;
	cout << "O valor de X � igual a " << X << endl << endl;
	system("pause");
	system("cls");
	
}

void menu(){
	
	int op, A, B, C, X;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a op��o: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			A = lerA();
			B = lerB();
			C = lerC();
			X = valorX(A, B, C);
			exibir(A, B, C, X);
			break;

		case 2:
			exit(0);
			break;
	}		
	}while(true);
	
}


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();
	
return 0;}
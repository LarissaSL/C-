/*i. Elaborar um programa que efetue a leitura de um n�mero inteiro e apresentar uma mensagem 
informando se o n�mero � par ou �mpar. */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Entrada de Dados
int lerNum(){
	int num;
	
	cout << "Digite o n�mero: ";
	cin >> num;
	
return num;}

//Processamento de Dados
void verifica(int N){
	
	system("cls");
	
	if (N % 2 == 0){
		cout << "O n�mero " << N << " � Par" << endl << endl;	
	}else {
		cout << "O n�mero " << N << " � Impar" << endl << endl;
	}
	
	system("pause");
	system("cls");
	
}

//Saida de Dados
void menu(){
	
	int op, N;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a Op��o: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			N = lerNum();
			verifica(N);
			break;
		case 2:
			exit(0);
			break;
		}
		
	}while (true);
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();
	
return 0;}
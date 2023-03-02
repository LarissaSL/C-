#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int const t = 15;

int vetorA[t];
int vetorB[t];

void lerVetor(){
	system("cls");

	int p = 1; //Quantidade de números que a pessoa vai digitar
	
	//For para ler valores para o Vetor A
	cout << "|    Inserindo os valores do vetor A    |" << endl << endl;
	for ( int i = 0 ; i < t ; i ++, p++) { 
	
		cout << "Digite o " << p << "º número: ";
		cin >> vetorA[i];
	}
	
	system("cls");
}

void criarVB(){
	
	for (int i = 0; i < t; i++){
		vetorB[i] = pow( vetorA[i], 2 ) ;	
	}
}

void exibir(){
	
	system("cls");
	cout << "Vetor A\n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 14){
			cout << vetorA[i] << " , ";
		}
		
		if (i == 14){
			cout << vetorA[i];
		}
		
	}
	cout << " ] " << endl << endl;
	
	cout << "Vetor B ( Resultado do Quadrado de Vetor A )\n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 14){
			cout << vetorB[i] << " , ";
		}
		
		if (i == 14){
			cout << vetorB[i];
		}
		
	}
	cout << " ] " << endl << endl;
	
	
	system("pause");
	system("cls");
}

void menu(){

int op = 0; 
	
	do {
		system("cls");
		cout << "|         Menu de Controle        |\n\n";
		cout << " 1 - para Executar  \n";
		cout << " 2 - para Exibir    \n";
		cout << "3 - para Sair      \n";
		cout << "\n\nDigite a Opção desejada: ";
		cin >> op;
		
		switch (op)
		
		case 1: {
			lerVetor();
			criarVB();
			break;
			
		case 2:
			exibir();
			break;
		
		case 3: 
			exit(0);
			break;
		
		default : 	
			cout << "\nDigite uma opção válida\n";		
			system("pause");
			break;
			}
			
	} while (true);
	
}


int main(){

	setlocale(LC_ALL, "portuguese");
	
	menu();

return 0;}

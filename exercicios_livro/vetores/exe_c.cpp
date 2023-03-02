#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int const t = 20;

int vetorA[t];
int vetorB[t];
int vetorC[t];

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
	p = 1;
	cout << "|    Inserindo os valores do vetor B    |" << endl << endl;
	for ( int i = 0 ; i < t ; i ++, p++) { 
	
		cout << "Digite o " << p << "º número: ";
		cin >> vetorB[i];
	}
	
	system("cls");
}

void criarVC(){
	
	for (int i = 0; i < t; i++){
		vetorC[i] = vetorA[i] - vetorB[i];
		
	}
}

void exibir(){

	cout << "Vetor C ( resultado da Subtração do Vetor A com B ) \n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 19){
			cout << vetorC[i] << " , ";
		}
		
		if (i == 19){
			cout << vetorC[i];
		}
		
	}
	cout << " ] " << endl << endl;
	
	system("pause");
	system("cls");
}


void exibirTudo(){
	
	system("cls");
	cout << "Vetor A\n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 19){
			cout << vetorA[i] << " , ";
		}
		
		if (i == 19){
			cout << vetorA[i];
		}
		
	}
	cout << " ] " << endl << endl;
	
	cout << "Vetor B \n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 19){
			cout << vetorB[i] << " , ";
		}
		
		if (i == 19){
			cout << vetorB[i];
		}
		
	}
	cout << " ] " << endl << endl;
	
	cout << "Vetor C ( resultado da Subtração do Vetor A com B ) \n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 19){
			cout << vetorC[i] << " , ";
		}
		
		if (i == 19){
			cout << vetorC[i];
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
		cout << "1 - para Executar  \n";
		cout << "2 - para Exibir Vetor C\n";
		cout << "3 - para Exibir os Vetores\n";
		cout << "4 - para Sair\n";
		cout << "\n\nDigite a Opção desejada: ";
		cin >> op;
		
		switch (op)
		
		case 1: {
			lerVetor();
			criarVC();
			break;
			
		case 2:
			exibir();
			break;
		
		case 3: 
			exibirTudo();
			break;
		
		case 4: 
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

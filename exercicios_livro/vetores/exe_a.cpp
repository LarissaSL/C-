#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int const t = 10;

int vetor[t];

void lerVetor(){
	system("cls");

	int p = 1; //Quantidade d números que a pessoa vai digitar
	
	for ( int i = 0 ; i < t ; i ++, p++) { 
	
		cout << "Digite o " << p << "º número: ";
		cin >> vetor[i];
	}
	
	system("cls");
}

void exibir(){
	
	system("cls");
	cout << "Vetor criado\n\n";
	cout << " [ ";
	
	for (int i = 0; i < t ; i++){
		if (i < 9){
			cout << vetor[i] << " , ";
		}
		
		if (i == 9){
			cout << vetor[i];
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
		cout << "      |  1 - para Executar  |\n";
		cout << "      |  2 - para Exibir    |\n";
		cout << "      |  3 - para Sair      |\n";
		cout << "\n\nDigite a Opção desejada: ";
		cin >> op;
		
		switch (op)
		
		case 1: {
			lerVetor();
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

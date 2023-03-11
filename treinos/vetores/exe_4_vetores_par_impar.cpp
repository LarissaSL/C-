/*j) Ler duas matrizes A e B de uma dimensão com 6 elementos. A matriz A deverá aceitar apenas a 
entrada de valores pares, enquanto a matriz B deverá aceitar apenas a entrada de valores ímpares. 
A entrada das matrizes deverá ser validada pelo programa e não pelo usuário. Construir uma matriz 
C de forma que a matriz C seja a junção das matrizes A e B, de modo que a matriz C contenha 12 
elementos. Apresentar a matriz C.*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int const t = 6; // Definindo tamanho do Vetor de A e B 
int const tc = 12; //Definindo tamanho do Vetor C

int vetorA[t], vetorB[t], vetorC[tc]; // Criando os vetores

//Entrada de Dados
void lerVetores(){
	int p = 1;
	
	system("cls");
	
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor A: ";
		cin >> vetorA[i];
		
		while(vetorA[i] % 2 != 0){//Enquanto o Número inserido for IMPAR, repete

			cout << "Digite outro número para posição " << i << " do Vetor A: ";
			cin >> vetorA[i];
			
		}
	}
	
	cout << "\n";
	
	p = 1;
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor B: ";
		cin >> vetorB[i];
		
		while(vetorB[i] % 2 == 0){//Enquanto o Número inserido for PAR, repete
			cout << "Digite outro número para posição " << i << " do Vetor B: ";
			cin >> vetorB[i];
			
		}
	}
	
	system("cls");	
}

//Processamento de Dados
void inserir(){
	
	int ic = 0; //Indices do Vetor C
	
	for (int i = 0; i < t; i++, ic++){
		vetorC[ic] = vetorA[i];
	}
	
	for (int i = 0; i < t; i++, ic++){
		vetorC[ic] = vetorB[i];
	}
	
}

//Saida de Dados
void exibir(){
	
	system("cls");
	
	cout << "| Vetor C |\n\n[ ";
	
	for(int i = 0; i < tc; i++){
		if (i < 11){
			cout << vetorC[i] << " , ";	
		}else{
			cout << vetorC[i] << " ]" << endl << endl;	
		}
					
	} 
	
	system("pause");
	system("cls");
	
}

void menu(){
	
	int op;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Exibir\n3 - para Sair\n\nDigite a Opção: ";
		cin >> op;
		
		switch(op)
		case 1:{
			lerVetores();
			break;
		case 2:
			inserir();
			exibir();
			break;
		case 3:
			exit(0);
			break;
		}
			
	}while(true);
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();

	
return 0;}
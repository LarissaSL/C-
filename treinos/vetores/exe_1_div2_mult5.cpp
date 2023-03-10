/*1) Ler duas matrizes A e B de uma dimensão com 5 elementos. A matriz A deverá aceitar 
apenas a entrada de valores que sejam divisíveis por 2 ou 3, enquanto a matriz B deverá 
aceitar apenas a entrada de valores que não sejam múltiplos de 5. A entrada das matrizes 
deverá ser validada pelo programa e não pelo usuário. Construir uma matriz C de forma que 
a matriz C seja a junção das matrizes A e B, e de forma que a matriz C contenha 10 
elementos. Apresentar a matriz C.*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int const t = 5; // Definindo tamanho do Vetor de A e B 
int const tc = 10; //Definindo tamanho do Vetor C

int vetorA[t], vetorB[t], vetorC[tc]; // Criando os vetores

//Entrada de Dados
void lerVetores(){
	int p = 1;
	
	system("cls");
	
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor A: ";
		cin >> vetorA[i];
		
		//Enquanto o Número inserido não seja divisivel por 2 ou 3, repete
		if (vetorA[i] % 2 != 0 ){
			if(vetorA[i] % 3 != 0){
				
				while(true){
					cout << "Digite outro número para posição " << i << " do Vetor A: ";
					cin >> vetorA[i];
					
					if (vetorA[i] % 2 == 0 || vetorA[i] % 3 == 0){
					   	break;
					
					}
				}
			}
		}
	}

	
	cout << "\n";
	
	p = 1;
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor B: ";
		cin >> vetorB[i];
		
		//Enquanto o Número inserido for multiplo de 5, repete
		if (vetorB[i] % 5 == 0 ){
			while(true){
				cout << "Digite outro número para posição " << i << " do Vetor B: ";
				cin >> vetorB[i];
					
				if (vetorB[i] % 5 != 0){
					break;
				}
			}
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
		if (i < 9){
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
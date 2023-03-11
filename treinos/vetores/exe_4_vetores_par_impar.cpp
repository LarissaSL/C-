/*j) Ler duas matrizes A e B de uma dimens�o com 6 elementos. A matriz A dever� aceitar apenas a 
entrada de valores pares, enquanto a matriz B dever� aceitar apenas a entrada de valores �mpares. 
A entrada das matrizes dever� ser validada pelo programa e n�o pelo usu�rio. Construir uma matriz 
C de forma que a matriz C seja a jun��o das matrizes A e B, de modo que a matriz C contenha 12 
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
		cout << "Digite o " << p << "� n�mero do Vetor A: ";
		cin >> vetorA[i];
		
		while(vetorA[i] % 2 != 0){//Enquanto o N�mero inserido for IMPAR, repete

			cout << "Digite outro n�mero para posi��o " << i << " do Vetor A: ";
			cin >> vetorA[i];
			
		}
	}
	
	cout << "\n";
	
	p = 1;
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "� n�mero do Vetor B: ";
		cin >> vetorB[i];
		
		while(vetorB[i] % 2 == 0){//Enquanto o N�mero inserido for PAR, repete
			cout << "Digite outro n�mero para posi��o " << i << " do Vetor B: ";
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
		cout << "1 - para Executar\n2 - para Exibir\n3 - para Sair\n\nDigite a Op��o: ";
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
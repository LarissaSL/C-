/*h) Ler três matrizes (A, B e C) de uma dimensão com 5 elementos cada. Construir uma matriz D, 
sendo esta a junção das três outras matrizes. Desta forma D deverá ter o triplo de elementos, ou 
seja, 15. Apresentar os elementos da matriz D.  */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
int const t = 5; // Definindo tamanho do Vetor de A, B e C
int const td = 15; // Definindo tamanho do Vetor D

int vetorA[t], vetorB[t], vetorC[t], vetorD[td]; // Criando os vetores

//Entrada de Dados
void lerVetores(){
	int p = 1;
	
	system("cls");
	
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor A: ";
		cin >> vetorA[i];
	}
	
	p = 1;
	cout << "\n";
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor B: ";
		cin >> vetorB[i];
	}
	
	p = 1;
	cout << "\n";
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor C: ";
		cin >> vetorC[i];
	}
	
	system("cls");	
}

void inserir(){
	int id = 0;
	
	//Inserindo Vetor A no vetor D
	for (int i = 0; i < t; i++, id++){
		vetorD[id] = vetorA[i];
	}
	
	//Inserindo vetor B no vetor D
	for (int i = 0; i < t; i++, id++){
		vetorD[id] = vetorB[i];
	}
	
	//Inserindo vetor C no vetor D
	for (int i = 0; i < t; i++, id++){
		vetorD[id] = vetorC[i];
	}
	

}

//Saida de Dados
void exibir(){
	
	system("cls");
	cout << "\n|   Vetor D   |\n\n[ ";
	for(int i = 0; i < td; i++){
		if(i < 14){
			cout << vetorD[i] << " , ";	
		}else if(i == 14){
			cout << vetorD[i] << " ]" << endl << endl;
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
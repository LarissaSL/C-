/*i) Ler 15 elementos reais para uma matriz A de uma dimensão do tipo vetor. Construir uma matriz B 
de mesmo tipo e dimensão, observando a seguinte lei de formação: “Todo elemento da matriz A 
que possuir índice par deverá ter seu elemento dividido por 2; caso contrário, o elemento da matriz 
A deverá ser multiplicado por 1.5”. Apresentar as matrizes A e B lado a lado.*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;
int const t = 15; // Definindo tamanho do Vetor de A e B 

double vetorA[t], vetorB[t]; // Criando os vetores

//Entrada de Dados
void lerVetorA(){
	int p = 1;
	
	system("cls");
	
	for (int i = 0; i < t ; i++, p++){
		cout << "Digite o " << p << "º número do Vetor A: ";
		cin >> vetorA[i];
	}
	
	system("cls");	
}

void inserir(){
	
	//Inserindo Vetor A no vetor B
	for (int i = 0; i < t; i++){
		if (i % 2 == 0){
			vetorB[i] = vetorA[i] / 2;
		}else{
			vetorB[i] = vetorA[i] * 1.5;
		}	
	}

}

//Saida de Dados
void exibir(){
	
	system("cls");
	
	cout << "\n| Vetor A | Vetor B |\n\n";
	
	for(int i = 0; i < t; i++){
		cout << vetorA[i] << "   | " << vetorB[i] << endl;			
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
			lerVetorA();
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
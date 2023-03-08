/*h. Efetuar a leitura de cinco números inteiros e identificar o maior e o menor valores. */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int numeros[5];

//Entrada de Dados
void lerNum(){
	
	int p = 1;
	
	for (int i = 0; i < 5 ; i++, p ++){
		cout << "Digite o " << p << "º número: " ;
		cin >> numeros[i];
	}
}

//Processamento de Dados
void maiorMenor(){
	
	int maior = numeros[1], menor = numeros[1];
	
	for (int i = 0; i < 5 ; i++){
		if (numeros[i] > maior){
			maior = numeros[i];
		}else if (numeros[i] < menor){
			menor = numeros[i];
		}
	}
	
	cout << "O maior número é: " << maior << endl;
	cout << "O menor número é: " << menor << endl << endl;
	system("pause");
	system("cls");
		
}

void exibir(){
	
	system("cls");
	cout << "Números digitados: ";
	
	for (int i = 0 ; i < 5 ; i++){
		
		if (i < 4){
			cout << numeros[i] << ", ";
		}else if (i == 4){
			cout << numeros[i] << ".\n\n";
		}
	}
}

//Saida de Dados
void menu(){
	
	int op;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a Opção: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			lerNum();
			exibir();
			maiorMenor();
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
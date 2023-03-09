/*k. Elaborar um programa que efetue a leitura de um determinado valor inteiro, e efetue a sua 
apresenta��o, caso o valor n�o seja maior que tr�s. */

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Entrada de Dados
int lerNum(){
	int num;
	
	cout << "Digite um n�mero: ";
	cin >> num;
	
return num;}

//Saida de Dados
void exibir(int num){
	
	system("cls");
	
	if (num <= 3){
		cout << "O valor inserido � " << num << "." << endl << endl;
	}else{
		cout << "Valor inserido maior que o permitido." << endl << endl;
	}
	
	system("pause");
	system("cls");
	
}

void menu(){
	
	int op, num;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a Op��o: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			num = lerNum();
			exibir(num);
			break;
		case 2:
			exit(0);
			break;
		}
			
	}while(true);
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();
	
return 0;}
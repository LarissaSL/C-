/*j. Elaborar um programa que efetue a leitura de um valor que esteja entre a faixa de 1 a 9. Ap�s a 
leitura do valor fornecido pelo usu�rio, o programa dever� indicar uma de duas mensagens: "O 
valor est� na faixa permitida", caso o usu�rio forne�a o valor nesta faixa, ou a mensagem "O valor 
est� fora da faixa permitida", caso o usu�rio forne�a valores menores que 1 ou maiores que 9. */

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
	
	if (num <= 9 && num >= 1){
		cout << "O valor est� na faixa permitida" << endl << endl;
	}else{
		cout << "O valor est� fora da faixa permitida" << endl << endl;
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
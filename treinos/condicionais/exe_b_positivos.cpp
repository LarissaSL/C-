/*b. Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um 
valor positivo. Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Entrada de Dados
int lerNum(){
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
return num;}

//Processamento de Dados
int positivo(int num){
	int nPos;
	
	if(num > 0){
		nPos = num;
	}else{
		nPos = num * -1;
	}
	
return nPos;}

//Saida de Dados
void exibir(int num, int nPos){
	
	system("cls");
	cout << "O número " << num << " inserido no valor positivo: " << nPos << endl << endl;
	system("pause");
	system("cls");
	
}

void menu(){
	
	int op, num, nPos;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a Opção: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			num = lerNum();
			nPos = positivo(num);
			exibir(num, nPos);
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
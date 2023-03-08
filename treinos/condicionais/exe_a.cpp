/*a. Ler dois valores numéricos inteiros e apresentar o
resultado da diferença do maior pelo menor valor.*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Funções e Voids de Entrada
int lerNum(){
	int num;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
return num;}

//Processamento e exibição
void exibir(int num1, int num2){
	
	int maior = num1, menor = num1, sub;
	
	if (num1 < num2){
		maior = num2;
		
	}else{
		menor = num2;
	}
	
	sub = maior - menor;
	
	system("cls");
	cout << "O maior número é " << maior << endl;
	cout << "O menor número é " << menor << endl;
	cout << "A subtração entre " << maior << " - " << menor << " = " << sub << endl;
	system("pause");
	system("cls");	

}

void menu(){
	
	int op, num1, num2;
	
	do{
		   cout << " |    Menu    |" << endl << endl;
		   cout << "1 - Para Executar\n2 - Para Sair\n\nOpção Escolhida: ";
		   cin >> op;
		   
		   switch (op)
		   case 1:{
			   system("cls");
			   num1 = lerNum();
			   num2 = lerNum();
			   exibir(num1, num2);
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
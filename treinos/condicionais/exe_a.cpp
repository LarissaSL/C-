/*a. Ler dois valores num�ricos inteiros e apresentar o
resultado da diferen�a do maior pelo menor valor.*/

#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

//Fun��es e Voids de Entrada
int lerNum(){
	int num;
	
	cout << "Digite um n�mero inteiro: ";
	cin >> num;
	
return num;}

//Processamento e exibi��o
void exibir(int num1, int num2){
	
	int maior = num1, menor = num1, sub;
	
	if (num1 < num2){
		maior = num2;
		
	}else{
		menor = num2;
	}
	
	sub = maior - menor;
	
	system("cls");
	cout << "O maior n�mero � " << maior << endl;
	cout << "O menor n�mero � " << menor << endl;
	cout << "A subtra��o entre " << maior << " - " << menor << " = " << sub << endl;
	system("pause");
	system("cls");	

}

void menu(){
	
	int op, num1, num2;
	
	do{
		   cout << " |    Menu    |" << endl << endl;
		   cout << "1 - Para Executar\n2 - Para Sair\n\nOp��o Escolhida: ";
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
/*Treinando Estruturas If, Else, Else if
Efetuar a leitura de cinco n�meros inteiros e identificar o
maior e o menor valores.*/

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

//Fun�oes de entrada
int lerNumero(int posicao){
	int num;

	cout << "Digite o " << posicao << "� n�mero: " ;
	cin >> num;

return num; }

//Processamento de dados
int maiorNumero(int num1, int num2, int num3, int num4, int num5){

	int maior;
	maior= num1;

	if (maior < num2){
		maior= num2;
	}
	
	if( maior < num3){
		maior=num3;
	}
	
	if (maior < num4){
		maior= num4;
	}
	
	if(maior < num5){
		maior = num5;
	}

return maior;}

int menorNumero(int num1, int num2, int num3, int num4, int num5){

	int menor;
	menor = num1;

	if (menor >num2){
		menor = num2;
	}
	
	if( menor > num3){
		menor = num3;
	}

	if (menor > num4){
		menor = num4;
	}
	
	if(menor > num5){
		menor = num5;
	}

return menor;}

//Fun��es e Voids de Saida
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "       Estruturas Condicionais \n        Maior e Menor n�meros       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibir(int num1, int num2, int num3, int num4, int num5, int maior, int menor){

system ("cls");
cout << "Os valores inseridos foram\n\n";
cout << "1� n�mero: " << num1 << endl;
cout << "2� n�mero: " << num2 << endl; 
cout << "3� n�mero: " << num3 << endl;
cout << "4� n�mero: " << num4 << endl;
cout << "5� n�mero: " << num5 << endl << endl; 

cout << "O maior n�mero: " << maior << endl; 
cout << "O menor n�mero: " << menor << endl;

system ("pause");
system ("cls");

}

int main(){

	setlocale(LC_ALL, "portuguese");

	int n1, n2, n3, n4, n5, maior , menor, 
	posicao = 1;
	char tecla;

	while (tecla != 27) {
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			system("cls");
			n1 = lerNumero(posicao);
			posicao++;
			n2 = lerNumero(posicao);
			posicao++;
			n3 = lerNumero(posicao);
			posicao++;
			n4 = lerNumero(posicao);
			posicao++;
			n5 = lerNumero(posicao);

		maior = maiorNumero(n1, n2, n3, n4, n5);
		menor = menorNumero(n1, n2, n3, n4, n5);

		system("cls");
		exibir(n1, n2, n3, n4, n5, maior, menor);
		posicao = 1;
		break;}

	}

return 0;}
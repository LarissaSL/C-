#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

#define t 5

using namespace std;

//Criando os Structs
//Armazenar os valores de ABCD
struct valoresABCD{
	
	int valorA[t];
	int valorB[t];
	int valorC[t];
	int valorD[t];	
};
struct valoresABCD tabABCD;

//Armazenar os Resultados do Processamento de Dados
struct resultados{
	
	int resultadoAC[t];
	int resultadoBD[t];
};
struct resultados tabResultados;

//Criando as Funções de Entrada
int lerA (){
	int valor;
	
	cout << "Digite o valor de A: " ;
	cin >> valor;
	
return valor;}

int lerB (){
	int valor;
	
	cout << "Digite o valor de B: ";
	cin >> valor;
	
return valor;}

int lerC (){
	int valor;
	
	cout << "Digite o valor de C: ";
	cin >> valor;
	
return valor;}

int lerD (){
	int valor;
	
	cout << "Digite o valor de D: ";
	cin >> valor;
	
return valor;}

//Void para inserir os valores de ABCD
void insereABCD (int linha, int A, int B, int C, int D){
	
	tabABCD.valorA[linha] = A;
	tabABCD.valorB[linha] = B;
	tabABCD.valorC[linha] = C;
	tabABCD.valorD[linha] = D;
	
}

//Criando as funções de Processamento de Dados
int produto (int A, int C){
	int p;
	
	p = A * C;
	
return p;}

int soma (int B, int D){
	int s;
	
	s = B + D;
	
return s;}

/*Void para inserir os resultados do Processamento de dados no Struct
Obs.: A pessoa pode cadastrar varios valores pra ABCD e exibir os resultados desses valores */
void insereResultados (int linha, int soma, int produto){
	
	tabResultados.resultadoAC[linha] = produto;
	tabResultados.resultadoBD[linha] = soma;
	
}

//Voids para Exibição
void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "         Trabalhando com Structs\n         Produto e Soma de ABCD       \n\n";
	cout << "   | Digite 1 para Cadastrar Valores |\n   |      Digite 2 para Exibir       |\n   |      Digite ESC para Sair       |\n\n";
	
}

void nomeSistema(){
	cout << " |    Trabalhando com Structs    |\n\n";
}

void exibirValores (int ultLinha){
	
	system("cls");
	for (int posicao = 0; posicao <= ultLinha; posicao++){
		cout << "|  Valor A  | " << "  " << tabABCD.valorA[posicao] << endl;
		cout << "|  Valor B  | " << "  " << tabABCD.valorB[posicao] << endl;
		cout << "|  Valor C  | " << "  " << tabABCD.valorC[posicao] << endl;
		cout << "|  Valor D  | " << "  " << tabABCD.valorD[posicao] << endl << endl;
		cout << "O produto de A x C = " << tabResultados.resultadoAC[posicao] << endl;
		cout << "A soma de B + D = " << tabResultados.resultadoBD[posicao] << endl << endl;
	}
	system("pause");
	system("cls");
}


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vA, vB, vC, vD, P, S, linha =-1;
	char tecla;
	
	while (tecla != 27){
		menu();
		tecla = getch();
		switch (tecla)
		case '1':{
			system("cls");
			nomeSistema();
			vA = lerA();
			vB = lerB();
			vC = lerC();
			vD = lerD();
			P = produto(vA , vC);
			S = soma (vB , vD);
			linha++;
			insereABCD(linha,vA, vB, vC, vD);
			insereResultados(linha, S, P);
			system("cls");
			break;
			
			case '2':
			system("cls");
			exibirValores(linha);
			break;}
	}
	
return 0;}
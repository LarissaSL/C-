#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>
#include <iomanip>

#define t 5

using namespace std;

//Criando o struct

struct funcionarios{

	string nome[t];
	double sm[t];
	double pr[t];
	double sn[t];
	
};

struct funcionarios tabfunci;

//Criando as funções de Entrada de Dados

string lerNome(){
	string nome;
	
	cout << "Digite o Nome do Funcionário(a): " ;
	cin >> nome;
		
return nome;}

double lerSalario(){
	double sm;
	
	cout << "Digite o valor do Salário(R$): " ;
	cin >> sm;

return sm;}

double lerPercentualReajuste(){
	double pr;
	
	cout << "Digite o valor percentual(%) para o Reajuste do Salário: " ;
	cin >> pr;
	
return pr;}

//Inserindo dados na Struct criada
void insere(int linha, string nome, double salario, double porcentagem, double salarioNovo){
	
	tabfunci.nome[linha] = nome;
	tabfunci.sm[linha] = salario;
	tabfunci.sn[linha] = salarioNovo;
	tabfunci.pr[linha] = porcentagem;	
	
}

//Função de Processamento de Dados

double novoSalario(double sm, double pr){
	double ns;
	
	ns = sm +  sm * (pr/100);
	
return ns;}

//Void para Exibir os dados
void exibir(int ultLinha){
	system("cls");

	
	for(int posicao = 0; posicao <= ultLinha; posicao++){
	   	cout << "Nome: " << tabfunci.nome[posicao];
	   	cout << setprecision(2) << fixed;
		cout << "\nSalário: R$ " <<  tabfunci.sm[posicao];
		cout << "\nSalário pós Ajuste: R$ " <<  tabfunci.sn[posicao];
		cout << setprecision(0) << fixed;
		cout << "\nPercentual de Reajuste: " <<  tabfunci.pr[posicao] << "%" << endl << endl;  
	}
	
	system("pause");
}

void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "              Reajuste \n            de Salários       \n\n";
	cout << "      | Digite 1 para Cadastrar |\n      | Digite 2 para Exibir    |\n      | Digite ESC para Sair    |\n\n";
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	string nomeFuncionario;
	double sm, pr, ns;
	char tecla;
	int linha = -1;
	
	while(tecla != 27){
		menu();
		tecla = getch();
		switch (tecla)
		
		case '1':{
			system("cls");
			nomeFuncionario = lerNome();
			sm = lerSalario();
			pr = lerPercentualReajuste();
			
			ns = novoSalario(sm, pr);
			
			linha++;
			insere(linha, nomeFuncionario, sm, pr, ns);
			system("cls");
			break;
			
			case '2':
			exibir(linha);
			system("cls");
			break;}
		
		
	} 

return 0;}
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
#define n 3

using namespace std;

int linha = -1;

struct pessoa{
	string nome[n];
	int idade[n];
	string sexo[n];
	double salario[n];
	double salarioNovo[n];
};
	pessoa tb;
	
pessoa *pttb = &tb;
	
int lerIdade(){
	int idade;
	
	cout << "Digite a Idade: ";
	cin >> idade;
	return idade;
}

string lerSexo(){
	string sexo;

	cout << "Digite o Sexo: ";
	getline(cin,sexo);
	return sexo;
}

string lerNome(){
	string nome;
	
	cin.ignore();
	cout << "Digite o nome: ";
	getline(cin,nome);
	return nome;
}

double lerSalario(){
	double salario;
	
	cout << "Digite o salário: ";
	cin >> salario;
	return salario;
}

double getAumento(double *salario){
	return *salario += *salario * 10/100;
}

void novaLinhaStruct(){
	system("cls");
	if(linha == n-1){
		cout << "Registro Cheio!" << endl << endl;
		system("pause");
		system("cls");
		return;
	}
		
	linha++;
	pttb -> nome[linha] = lerNome();
	pttb -> sexo[linha] = lerSexo();
	pttb -> idade[linha] = lerIdade();
	
	double salario = lerSalario();
	pttb -> salario[linha] = salario;
	pttb -> salarioNovo[linha] = getAumento(&salario);
	
	system("cls");
	
}

void listarLinhasStruct(){
	system("cls");
	
	if(linha == -1){
		cout << "Nenhum registro a ser exibido" << endl << endl;
		system("pause");
		system("cls");
		return;
	}
	
	for(int i = 0; i <= linha; i++){
		cout << "Nome: " << pttb -> nome[i] << endl;
		cout << "Sexo: " << pttb -> sexo[i]<< endl;
		cout << "Idade: " << pttb -> idade[i] << " anos\n";
		cout << setprecision(2) << fixed << "Salário: R$ " << pttb -> salario[i] << endl;
		cout << "Salário Novo: R$ " << pttb -> salarioNovo[i] << endl << endl;
	}
	
	system("pause");
	system("cls");
}

void menu(){
	
	int op;

	do{
		cout << "|     Menu     |\n\n";
		cout << "1 - Ler Linha\n2 - Mostrar\n3 - Sair\n\nOpção: ";
		cin >> op;
		switch(op){
			case 1: 
				novaLinhaStruct();
				break;
			case 2:
				listarLinhasStruct(); 
				break;
			case 3: 
				exit(0);
			default:
				cout << "Escolha uma opção válida por favor" << endl;
				system("pause");
				system("cls");
				break;
		}
	}while(true);
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();
	
return 0;}
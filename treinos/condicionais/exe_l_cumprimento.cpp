/*l. Elaborar um programa que efetue a leitura do nome e do sexo de uma pessoa, apresentando com 
saída uma das seguintes mensagens: "Ilmo Sr.", se o sexo informado como masculino, ou a 
mensagem "Ilma Sra.", para o sexo informado como feminino. Apresente também junto da 
mensagem de saudação o nome previamente informado. */

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cctype>

using namespace std;

//Entrada de Dados
string lerGen(){
	 string gen;
	
	cout << "\nComo você se identifica?\n\n";
	cout << "M - para Masculino\nF - para Feminino\n";
	cin >> gen;

	
return gen;}

string lerNome(){
	string nome;
	
	cout << "Como você se chama?\n";
	cin >> nome;
	
	
return nome;}

//Saida de Dados
void exibir(string nome, string gen){
	
	system("cls");
	
	if (gen == "M" || gen == "m"){
		cout << "Ilmo Sr. " << nome << "." << endl << endl;
	}else if (gen == "F" || gen == "f"){
		cout << "Ilma Sra. " << nome << "." << endl << endl;
	}
	
	system("pause");
	system("cls");
	
}

void menu(){
	
	int op;
	string nome, gen;
	
	do{
		cout << " |    Menu    |\n\n";
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a Opção: ";
		cin >> op;
		
		switch(op)
		case 1:{
			system("cls");
			nome = lerNome();
			gen = lerGen();
			exibir(nome, gen);
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
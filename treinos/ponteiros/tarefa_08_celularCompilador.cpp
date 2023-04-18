#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#define n 3

using namespace std;

int contador;

typedef struct cad2{ 
	
	int posicao;
	string nome;
	cad2 * anterior;
	
}cad2;

cad2 *primeiroNo, *ultimoNo ; // Criando os ponteiros de nós


void construtor(){
	primeiroNo = ultimoNo = NULL;
}


string lerNome(){
	string nome;
	
	cin.ignore();
	cout << "Digite o nome: ";
	getline(cin,nome);
	return nome;
}


void alocar(){
	system("clear");

	
	for (int i = 0; i < n ; i ++){
		contador ++;
		cad2 novoCad2 = (cad2) malloc(sizeof(cad2));
			
		if (contador == 1){
			novoCad2 -> posicao = contador;
			novoCad2 -> nome = lerNome();
			novoCad2 -> anterior = NULL;
			
			ultimoNo = novoCad2;
				 
		}else{
			novoCad2 -> posicao = contador;
            novoCad2 -> nome = lerNome();
			novoCad2 -> anterior = ultimoNo;

			ultimoNo = novoCad2;
					
		}
		
	}
	
	cout << "Alocação feita com Sucesso!" << endl << endl;
	system("sleep 5");;
	system("clear");
}

bool regVazio(){
	if (contador == 0){
		return true;
	}else {
		return false;
	}
}

void exibir(int qtd){
	system("clear");
	
	if(regVazio() == true){
		cout << "Sem registro de Struct na Memória..." << endl <<  endl;
		system("sleep 5");
	 system("clear");
		return;
	}else{
		cad2 *ptAux;
		ptAux = ultimoNo;
		
		cout << "Structs e seus registros: " << endl << endl;
		for( int i = 0; i < qtd ; i ++){
			cout << "Posição: " << ptAux -> posicao << endl;
			cout << "Nome: " << ptAux -> nome << endl;
			cout << "Seu Endereço: " << ptAux << endl;
			cout << "Endereço Anterior: " << ptAux -> anterior << endl << endl;
			
			ptAux = ptAux-> anterior;
		}
	}
	
	system("sleep 5");
	system("clear");
}

void destrutor(){
	system("clear");
	
	if(regVazio() == true){
		cout << "Não há registros para desalocar..." << endl << endl;
		system("sleep 5");
	 system("clear");
		return;
	}else{
		cout << "Liberando Memória..." << endl;
		cad2 *ptAux;
		ptAux = ultimoNo;
		
		while(ptAux != NULL){
			ptAux = ptAux -> anterior;
			free(ptAux);
		}
	}
	contador = 0;
	cout << "Memória Liberada com Sucesso!" << endl << endl;
	system("sleep 5");
	system("clear");
}


int main(){
	
		setlocale(LC_ALL, "portuguese");
	
	int op;
	
	do {
		cout << "| Menu |";
		cout << "\n1 - Alocar\n2 - Exibir\n3 - Desalocar\n4 - Sair\n\nDigite a opção: ";
		cin >> op;
		switch(op){
			case 1:
				construtor();
				alocar();
				break;
			case 2:
				exibir(n);
				break;
			case 3:
				destrutor();
				break;
			default:
				if(op != 4){
					cout << "Digite uma opção válida por favor" << endl << endl;
					system("pause");
	   system("clear");
				}
				break;
		}
		
	}while(op != 4);
	
	
return 0;}
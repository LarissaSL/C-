#include <iostream>
#include <cstdlib>
#define t 5
using namespace std;

int linha = -1;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;	
};

Carro carros[t];

void insere(string getnome, string getcor, int getpot, int getvelMax){
	
	carros[linha].nome = getnome;
	carros[linha].cor = getcor;
	carros[linha].pot = getpot;
	carros[linha].velMax = getvelMax;
}
	
void exibir(){
	system("cls");
	
	for(int i  = 0; i <= linha; i++){
		cout << "Nome: " << carros[i].nome << endl;
		cout << "Cor: " << carros[i].cor << endl;
		cout << "Potência: " << carros[i].pot  << endl;
		cout << "Vel. Máx.: " << carros[i].velMax << endl << endl;
	}
	
	system("pause");
	system("cls");
}

string lerNome(){
	string nome;
	
	cout << "Digite o nome do Carro: " ;
	cin >> nome;
	return nome;
}

string lerCor(){
	string cor;
	
	cin.ignore();
	cout << "Digite a cor do Carro: " ;
	cin >> cor;
	return cor;
}

int lerPot(){
	int pot;
	
	cout << "Digite a Potência do Carro: " ;
	cin >> pot;
	return pot;
}

int lerVelMax(){
	int vel;
	
	cout << "Digite a Velocidade Máxima do Carro: " ;
	cin >> vel;
	return vel;
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	string nome , cor;
	int pot , velMax, op;
	
	do{
		cout << "|     Menu    |\n\n";
		cout << "1 - para Cadastrar Carro \n    Cadastro/Limite[" << linha + 1 << "," << t << "]" << "\n\n2 - para Exibir\n3 - para Sair\n\nOpção: ";
		cin >> op;
		
		switch(op){
			case 1:
				system("cls"); 
				cout << "|  Cadastro de Carros | " << endl << endl;
				nome = lerNome();
				cor = lerCor();
				pot = lerPot();
				velMax =  lerVelMax();
				
				linha++;
				
				insere(nome, cor, pot, velMax);
				system("cls"); 
				break;
			
			case 2: 
				exibir();
				break;
			
			case 3: 
				exit(0);
				break;
			
			default:
				cout << "Digite uma opção válida..." << endl <<  endl;
				system("pause");
				system("cls");
		}
		
	}while(true);
	
return 0;}
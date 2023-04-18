#include <iostream>
#include <cstdlib>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;	
	
	void insere(string getnome, string getcor, int getpot, int getvelMax){
		nome = getnome;
		cor = getcor;
		pot = getpot;
		velMax = getvelMax;
	}
	
	void exibir(){
		cout << "Nome: " << nome << endl;
		cout << "Cor: " << cor << endl;
		cout << "Potência: " << pot  << endl;
		cout << "Vel. Máx.: " << velMax << endl << endl;
	}

};


string lerNome(){
	string nome;
	
	cin.ignore();
	cout << "Digite o nome do Carro: " ;
	getline(cin,nome);
	return nome;
}

string lerCor(){
	string cor;
	
	cin.ignore();
	cout << "Digite a cor do Carro: " ;
	getline(cin,cor);
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
	
	Carro car1,car2;
	
	cout << "|  Cadastro de Carros | " << endl << endl;
	system("Pause");
	system("cls");
	
	
	string nome , cor;
	int pot , velMax;
	
	for(int i = 0; i < 2; i++){
		nome = lerNome();
		cor = lerCor();
		pot = lerPot();
		velMax = lerVelMax();
		
		if(i == 0){
			car1.insere(nome, cor, pot, velMax);	
		}else{
			cout << "\n";
			car2.insere(nome, cor, pot, velMax);
		}	
	}
	
	system("cls");
	car1.exibir();
	car2.exibir();
	system("pause");
	
return 0;}
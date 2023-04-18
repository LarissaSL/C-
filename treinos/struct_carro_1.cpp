#include <iostream>
#include <cstdlib>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;	
};

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	Carro car1, car2;
	
	car1.nome = "Uno";
	car1.cor = "Preto";
	car1.pot = 140;
	car1.velMax = 120;
	
	car2.nome = "Mercedes";
	car2.cor = "Cinza";
	car2.pot = 340;
	car2.velMax = 320;
	
	cout << "Nome: " << car1.nome << endl;
	cout << "Cor: " << car1.cor << endl;
	cout << "Potência: " << car1.pot  << endl;
	cout << "Vel. Máx.: " << car1.velMax << endl << endl;
	
	cout << "Nome: " << car2.nome << endl;
	cout << "Cor: " << car2.cor << endl;
	cout << "Potência: " << car2.pot  << endl;
	cout << "Vel. Máx.: " << car2.velMax << endl;
	
	
return 0;}
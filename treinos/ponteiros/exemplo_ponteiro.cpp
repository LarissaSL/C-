#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	string nome = "Buzz"; // Variavel comum que guarda um valor
	
	string *ptNome; // Variavel especial do tipo Ponteiro
	ptNome = &nome; // iniciando o ponteiro
	
	cout << "--------- Vari�vel ----------" << endl;
	cout << "Conteudo vari�vel Nome: " << nome << endl;
	cout << "Endere�o da variavel Nome: " << &nome << endl << endl;
	
	cout << "--------- Ponteiro ----------" << endl;
	cout << "Conteudo da vari�vel Ponteiro: " << *ptNome << endl;
	cout << "Endere�o Ponteiro do Nome: " << ptNome << endl;
	
	
return 0;}
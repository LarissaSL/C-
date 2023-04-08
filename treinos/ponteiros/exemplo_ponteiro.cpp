#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	string nome = "Buzz"; // Variavel comum que guarda um valor
	
	string *ptNome; // Variavel especial do tipo Ponteiro
	ptNome = &nome; // iniciando o ponteiro
	
	cout << "--------- Variável ----------" << endl;
	cout << "Conteudo variável Nome: " << nome << endl;
	cout << "Endereço da variavel Nome: " << &nome << endl << endl;
	
	cout << "--------- Ponteiro ----------" << endl;
	cout << "Conteudo da variável Ponteiro: " << *ptNome << endl;
	cout << "Endereço Ponteiro do Nome: " << ptNome << endl;
	
	
return 0;}
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

#define tam 3

using namespace std;

typedef struct lifo pilha;
struct lifo

{ 	int topo;
	string nome[tam];
	int idade[tam];
	double salario[tam];
};

string lerNome(){
	
	string nome;
	cout << "Digite o Nome a ser Empilhado: ";
	cin.ignore();
	getline(cin, nome);
	
return nome;}

int lerIdade(){
	
	int idade;
	cout << "Digite a Idade a ser Empilhada: ";
	cin >> idade;
	
return idade;}


double lerSalario() { 
	
	double salario;
    cout << "Digite o Salário a ser Empilhado: ";
	cin >> salario;
	
return salario;}

bool pilhaCheia(pilha p){ 
	
	if (p.topo == tam - 1)
	return true;
	return false;
}
	
bool pilhaVazia(pilha p){ 
	
	if (p.topo == -1)
	return true; 
	return false; 
}

pilha push (string nome, double salario, int idade, pilha p) {
	
	if (pilhaCheia(p) == true) {
	 
	 cout << "\nA Pilha está Cheia!" << endl;
	 system("pause");
	 
	return p;}
 
	 p.topo ++;
	 p.nome[p.topo] = nome;
	 p.salario[p.topo] = salario;
	 p.idade[p.topo] = idade;
	 
	 cout << "\nOs valores Empilhados foram:\nNome: " << nome;
	 cout << "\nIdade: " << idade << " anos";
	 cout << setprecision(2) << fixed;
	 cout << "\nSalário: R$ " << salario << endl << endl;
	 system("pause");

 return p;}
 
 pilha pop (pilha p) {
	
	if (pilhaVazia(p) == true) {
	 
	 cout << "A Pilha está Vazia!" << endl;
	 system("pause");
	 
	return p;}
	 
	 cout << "\nOs valores Desempilhados foram:\nNome: " << p.nome[p.topo];
	 cout << "\nIdade: " << p.idade[p.topo] << " anos";
	 cout << setprecision(2) << fixed;
	 cout << "\nSalário: R$ " << p.salario[p.topo] << endl << endl;
	 
	 p.nome[p.topo] = '\0'; // Esse '\0' é o caractere Nulo
	 p.salario[p.topo] = '\0';
	 p.idade[p.topo] = '\0';
	 
	 p.topo --;
	 
	 system("pause");

 return p;}
 
 void mostrar(pilha p){
	 
	if (pilhaVazia(p) == true) {
	 
	 cout << "A Pilha está Vazia!" << endl;
	 system("pause");
	 
	return;
	}else{
		for(int i = p.topo; i >= 0; i--){
			
			cout << "Nome: " << p.nome[i] << endl;
			cout << "Idade: " << p.idade[i] << " anos" << endl;
			cout << setprecision(2) << fixed;
			cout << "Salário: R$ " << p.salario[i] << endl << endl;
		} 	
	}
	
	system("pause");
	 
 }
 
 int tela(){
	int op;
	
	cout << " |           Menu           |\n\n";
	cout << " 1 - para Push\n 2 - para Pop \n";
	cout << " 3 - para Exibir Pilha\n 4 - para Sair \n\nDigite a Opção: ";
	cin >> op;
	
 return op;}
 
 void controle(pilha p){
	 
	 int tecla, idade;
	 string nome;
	 double salario;
	 
	 pilha P;
	 P.topo = -1;
	  
	 do{ 
		tecla = tela();
		switch(tecla) {
		case 1: 
			system("cls");
			nome = lerNome();
			salario = lerSalario();
			idade = lerIdade();
			P = push(nome,salario,idade, P);
			system("cls");
			break;
		case 2: 
			system("cls");
			P = pop(P);
			system("cls");
			break;
		case 3: 
			system("cls");
			mostrar(P);
			system("cls");
		}		 
	 }while (tecla != 4);
 }
 
 
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	pilha P;
	controle(P);
	
	
return 0;}



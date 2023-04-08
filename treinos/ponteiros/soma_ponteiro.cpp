#include <iostream>
#include <cstdlib>

using namespace std;

int soma(int *pt1, int *pt2){
	return *pt1 + *pt2;	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num1 = 4; // Declarando e Atribuindo nome e valor as variaveis
	int num2 = 2;
	
	int *ptNum1, *ptNum2; // Declarando Ponteiros
	ptNum1 = &num1; // Inicializando os ponteiros
	ptNum2 = &num2;
	
	cout << "----- Usando Função -----\n";
	cout << *ptNum1 << " + " << *ptNum2 << " = " <<  soma(ptNum1, ptNum2);
	
	cout << "\n\n----- Sem usar Função -----\n";
	cout << *ptNum1 << " + " << *ptNum2 << " = " <<  *ptNum1 + *ptNum2 << endl;
	
return 0;}
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"
#include "cstdlib"

using namespace std;

int gerarNumeros () {    

	return rand() % 100; 
	
}

int main() {  
	
	setlocale(LC_ALL, "portuguese");
	
	int n; //quantidade de numeros que quero gerar 
	srand(time(NULL)); //zerar o tempo da fun��o rand() para n�meros diferentes 
	
	cout << "Digite a qtde de n�meros:"; 
	cin >> n; 
	
	int *ai = (int *) calloc (n, sizeof(int));//aloca mem�ria para n elementos 
	
	for (int i=0; i<n ;i++)      
		ai[i] = gerarNumeros ();
	
	for (int i=0; i<n; i++)        
		cout << ai[i] << endl;

return 0; }
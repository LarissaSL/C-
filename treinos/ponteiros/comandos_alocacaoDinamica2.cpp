#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int *ptnum = (int *) malloc(sizeof(int));
	
	if(ptnum == NULL){
		cout << "Erro de memória!";
		system("pause");
		return 0;
	}
	
	*ptnum = 10;
	int x = 30;
	
	ptnum = &x;
	
	cout  << "Número armazenado: " << *ptnum << endl << endl;
	system("pause");
	
	free(ptnum); // delete () também funciona
	cout << "\nLiberando Memória..." << endl << endl;
	system("pause");
	
return 0;}
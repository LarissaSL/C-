#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int *ptnum = (int *) malloc(sizeof(int));
	
	if(ptnum == NULL){
		cout << "Erro de mem�ria!";
		system("pause");
		return 0;
	}
	
	*ptnum = 10;
	int x = 30;
	
	ptnum = &x;
	
	cout  << "N�mero armazenado: " << *ptnum << endl << endl;
	system("pause");
	
	free(ptnum); // delete () tamb�m funciona
	cout << "\nLiberando Mem�ria..." << endl << endl;
	system("pause");
	
return 0;}
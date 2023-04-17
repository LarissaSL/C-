#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Tamanho de um inteiro é " << sizeof(int) << " bytes." << endl;
	cout << "Tamanho de um char é " << sizeof(char) << " bytes." << endl;
	cout << "Tamanho de um double é " << sizeof(double) << " bytes." << endl;
	cout << "Tamanho de um bool é " << sizeof(bool) << " bytes." << endl;
	cout << "Tamanho de um float é " << sizeof(float) << " bytes." << endl;
	
return 0;}
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Tamanho de um inteiro � " << sizeof(int) << " bytes." << endl;
	cout << "Tamanho de um char � " << sizeof(char) << " bytes." << endl;
	cout << "Tamanho de um double � " << sizeof(double) << " bytes." << endl;
	cout << "Tamanho de um bool � " << sizeof(bool) << " bytes." << endl;
	cout << "Tamanho de um float � " << sizeof(float) << " bytes." << endl;
	
return 0;}
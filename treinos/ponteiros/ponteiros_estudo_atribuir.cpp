#include  <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int copos = 6;
	
	cout << "Valor: " << copos << endl;
	cout << "End.: " << &copos << endl << endl;
	
	int *ptCopos;
	ptCopos  = &copos;
	
	*ptCopos += 7;
	
	cout <<  "Pós implemento de 7" << endl;
	cout << "Valor: " << *ptCopos << endl;
	cout << "End.: " << ptCopos << endl;
		
return 0;}
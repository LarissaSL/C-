#include <iostream>

using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "\n" << "Digite o segundo numero: ";
	cin >> num2;
	
	int soma= num1 + num2;
	cout << "\n" << "A soma de " << num1 << "+" << num2 << " resulta em: " << soma;
	
	int sub= num1 - num2;
	cout <<"\n" << "A subtraçao de " << num1 << "-" << num2 << " resulta em: " << sub;
	
	int mult= num1 * num2;
	cout <<"\n" << "A multiplicaçao de " << num1 << "X" << num2 << " resulta em: " << mult;
	
	int div= num1 / num2;
	cout <<"\n" << "A divisao de " << num1 << " por " << num2 << " resulta em: " << div;
		
	return 0;		
}




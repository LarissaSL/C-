#include <iostream>
#include "math1.h"
#include "pedirNumeros.h"
#include <cstdlib>
#include <conio.h>

using namespace std;

void menu(){
	
	cout << "|                Menu                |\n\n";
	cout << "            Soma,Subtração, \n      Multiplicação e Divisão     \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
	
}

void exibirResultados(int n1, int n2, int somar, int sub, int multi, int div){
	
	system("cls");
	
	cout << "A soma de " << n1 << " + " << n2 << " é = " << somar << endl;
	cout << "A subtração de " << n1 << " - " << n2 << " é = " << sub << endl;
	cout << "A multiplicação de " << n1 << " x " << n2 << " é = " << multi << endl;
	cout << "A soma de " << n1 << " / " << n2 << " é = " << div << endl;
	system("pause");
	system("cls");
	
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n1 , n2 , somar, sub, multi, div;
	char tecla;
	
	while(tecla != 27){
		menu();
		
		tecla = getch();
		switch (tecla)
		case '1':{
			system("cls");
			n1 = pedirN1();
			n2 = pedirN2();
			
			somar = soma(n1 , n2);
			sub = subtracao(n1, n2);
			multi = multiplicacao(n1, n2);
			div = divisao(n1, n2);
			
			system("cls");
			exibirResultados(n1, n2, somar, sub, multi, div);
		break;
		default:
			cout << "\nOpção Inválida, por favor digite novamente!" << endl << endl;
			system("pause");
			system("cls");
		continue;}
	}
	
return 0;}
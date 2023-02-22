#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double taxaJuros, valorPrestacao, valorPrestacaoAtrasada;
	int mesesAtraso;
	char tecla;
	
	while (tecla != 27){
		cout << " |             Menu             |\n\n\n";
		cout << "             Valor da\n";
		cout << "        Prestação em atraso\n\n";
		cout << "   |  Digite 1 para Executar  |\n";
		cout << "   |  Digite ESC para Sair    |\n";
		
		tecla = getch();
		switch (tecla)
		case '1':{
		//Entrada de Dados
		system ("cls");
		cout << "|      Informações para o calculo      |\n\n";
		cout << "Digite o Valor da Prestação: ";
		cin >> valorPrestacao;
	
		cout << "Digite a quantidade de Meses em atraso: ";
		cin >> mesesAtraso;
	
		cout << "Digite a Taxa de Juros: ";
		cin >> taxaJuros;
	
		//Processamento de Dados
		valorPrestacaoAtrasada = valorPrestacao + ((valorPrestacao * taxaJuros / 100) * mesesAtraso);
	
		//Saida de Dados
		system ("cls");
		cout << "|          Valor da Prestação em Atraso         |\n\n";
		cout << setprecision (2) << fixed;
		cout << "Valor da Prestação foi de R$ " << valorPrestacao;
		cout << "\nA taxa de Juros foi de " << taxaJuros << "% a.m";
		cout << "\nQuantidade de " << mesesAtraso << " meses em atraso";
	
		cout << "\n\nO valor da Prestação em Atraso vai ser de R$ " << valorPrestacaoAtrasada << endl;
		system ("pause");
		system ("cls");
		break;}
		
	}
		
return 0;}
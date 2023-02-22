#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double velocidade, tempo, distancia, litrosUsados;
	char tecla;
	
	while (tecla != 27){
		cout << " |                 Menu                 |\n\n\n";
		cout << "       Calculador da Quantidade \n";
		cout << "   de Combustivel gasto em uma Viagem\n\n";
		cout << "       |  Digite 1 para Executar  |\n";
		cout << "       |  Digite ESC para Sair    |\n";
		
		tecla = getch();
		switch (tecla)
		case '1':{
			//Entrada de Dados
			system("cls");
			
			cout << "|                  Dados da Viagem                 |\n\n";
			cout << "Digite o Tempo da viagem (em horas): ";
			cin >> tempo;
			cout << "Digite a Velocidade Média da viagem (em km/h): ";
			cin >> velocidade;
			
			//Processamento de Dados
			distancia = tempo * velocidade;
			litrosUsados = distancia / 12;
			
			//Saída de Dados
			system("cls");
			
			cout << "|                 Informações da Viagem                |\n\n";
			cout << "Velocidade Média da Viagem foi de " << velocidade << "km/h\n";
			cout << "Tempo gasto na Viagem foi de " << tempo << "h\n";
			cout << "Distância percorrida foi de " << distancia << "km\n\n";
	
			cout << setprecision(2) << fixed;
			cout << "Quantidade de Combustivel usado foi de " << litrosUsados << " Litros\n" << endl;
			system ("pause");
			system ("cls");
			break;}
		}
return 0;}

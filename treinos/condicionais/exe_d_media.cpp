/*d. Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem 
dizendo que o aluno foi aprovado, se o valor da m�dia escolar for maior ou igual a 7. Se o valor da 
m�dia for menor que 7, solicitar a nota de exame, somar com o valor da m�dia e obter nova m�dia. 
Se a nova m�dia for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi 
aprovado em exame. Se o aluno n�o foi aprovado, indicar uma mensagem informando esta 
condi��o. Apresentar com as mensagens o valor da m�dia do aluno, para qualquer condi��o. 
 */

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Fun��es de Entrada
double lerNotas(){
	double nota, notaT; // Variavel para a entrada e outra para somar todas as notas lidas
	
	for (int i = 1 ; i < 5 ; i++){
		cout << "Digite a " << i << "� Nota: ";
		cin >> nota;
		notaT = notaT + nota;	
	}
		
return notaT;}

//Fun��o de processamento
double media(double notas){
	double mediaA;
	
	mediaA = notas / 4;

		
return mediaA;}

//Void exibir
void exibir(double media, double notaT){
	
	double exame, mediaF;
	
	system("cls");
	if (media >= 7){
		cout << "O Aluno(a) foi Aprovado!" ;
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom m�dia " << media << endl << endl;
	}else if (media < 7){
		cout << "Insira a nota do exame: ";
		cin >> exame;
		system("cls");
		
		mediaF = (notaT + exame) / 5;
	
	}if (mediaF >= 5  && media < 7){
		cout << "O Aluno(a) foi Aprovado!" ;
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom m�dia " << mediaF << endl << endl;
	}else if (mediaF < 5 && media < 7){
		cout << "O Aluno(a) foi Reprovado!";
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom m�dia " << mediaF <<  endl << endl;
	}
	
	system("pause");
	system("cls");
}

//Menu
void menu(){
		double totalNota, mediaAluno;
		int op;
		
	do{
		cout << " |    Menu    |" << endl << endl;
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a op��o: ";
		cin >> op;
		
		switch(op)
		case 1:{
			   system("cls");
			   totalNota = lerNotas();
			   mediaAluno = media(totalNota);	
			   exibir(mediaAluno, totalNota);
			   break;
		case 2:
				exit(0);
				break;
		}
		
	}while(true);
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	menu();
	
return 0;}

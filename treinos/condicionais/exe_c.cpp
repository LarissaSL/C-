/*c. Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem 
dizendo que o aluno foi aprovado, se o valor da média escolar for maior ou igual a 5. Se o aluno não 
foi aprovado, indicar uma mensagem informando esta condição. Apresentar junto das mensagens o 
valor da média do aluno para qualquer condição. */

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Funções de Entrada
double lerNotas(){
	double nota, notaT; // Variavel para a entrada e outra para somar todas as notas lidas
	
	for (int i = 0 ; i < 4 ; i++){
		cout << "Digite a Nota: ";
		cin >> nota;
		notaT = notaT + nota;	
	}
		
return notaT;}

//Função de processamento
double media(double notas){
	double mediaA;
	
	mediaA = notas / 4;

		
return mediaA;}

//Void exibir
void exibir(double media){
	
	system("cls");
	if (media >= 5){
		cout << "O Aluno(a) foi Aprovado!" ;
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom média " << media << endl << endl;
	}else{
		cout << "O Aluno(a) foi Reprovado!";
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom média " << media << endl << endl;
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
		cout << "1 - para Executar\n2 - para Sair\n\nDigite a opção: ";
		cin >> op;
		
		switch(op)
		case 1:{
			   system("cls");
			   totalNota = lerNotas();
			   mediaAluno = media(totalNota);	
			   exibir(mediaAluno);
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

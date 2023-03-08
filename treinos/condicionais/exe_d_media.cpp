/*d. Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem 
dizendo que o aluno foi aprovado, se o valor da média escolar for maior ou igual a 7. Se o valor da 
média for menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média. 
Se a nova média for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi 
aprovado em exame. Se o aluno não foi aprovado, indicar uma mensagem informando esta 
condição. Apresentar com as mensagens o valor da média do aluno, para qualquer condição. 
 */

#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Funções de Entrada
double lerNotas(){
	double nota, notaT; // Variavel para a entrada e outra para somar todas as notas lidas
	
	for (int i = 1 ; i < 5 ; i++){
		cout << "Digite a " << i << "ª Nota: ";
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
void exibir(double media, double notaT){
	
	double exame, mediaF;
	
	system("cls");
	if (media >= 7){
		cout << "O Aluno(a) foi Aprovado!" ;
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom média " << media << endl << endl;
	}else if (media < 7){
		cout << "Insira a nota do exame: ";
		cin >> exame;
		system("cls");
		
		mediaF = (notaT + exame) / 5;
	
	}if (mediaF >= 5  && media < 7){
		cout << "O Aluno(a) foi Aprovado!" ;
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom média " << mediaF << endl << endl;
	}else if (mediaF < 5 && media < 7){
		cout << "O Aluno(a) foi Reprovado!";
		cout << setprecision(2) << fixed; // Fixando a casa decimal para 2
		cout << "\nCom média " << mediaF <<  endl << endl;
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

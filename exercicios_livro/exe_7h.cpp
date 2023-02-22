#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

//Criando as funções de Entrada de Dados

double lerComprimento(){
    
    double comprimento; 
  
	cout << "Digite o Comprimento da caixa(em cm): ";
    cin >> comprimento;

return comprimento;}

double lerLargura(){
    
    double largura;
	
    cout << "Digite a Largura da caixa(em cm): ";
    cin >> largura;

return largura;}

double lerAltura(){
    
    double altura;

    cout << "Digite a Altura da caixa(em cm): ";
    cin >> altura;

return altura;}

//Criando as funções de Processamento de Dados
double calcularVolume(double comprimento1, double largura1, double altura1){
    
    double volume;

    volume = comprimento1 * largura1 * altura1;

return volume;}

//Criando os Voids de Saida de Dados
void menu(){
	cout << "|                Menu                |\n\n";
	cout << "          Calcular Volume\n       de uma Caixa Retangular       \n\n";
	cout << "      | Digite 1 para Executar |\n      | Digite ESC para Sair   |\n\n";
}

void exibirNome(){
	cout << " |       Calcular Volume de uma Caixa Retangular       |\n\n";
}

void exibirResultados(double comprimento, double largura, double altura, double volume){
    
    system("cls");
    cout << "|          Medidas da Caixa Retangular          |\n\n";
    cout << "O Comprimento da Caixa é de " << comprimento << "cm\n";
    cout << "A Largura da Caixa é de " << largura << "cm\n";
    cout << "A Altura da Caixa é de " << altura << "cm\n\n";
    cout << "O Volume da Caixa é de " << volume << "cm³." << endl << endl;
    system("pause");
    system("cls");

}

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
	double vc, vl, va, vv;
	char tecla;
	
	//Menu Interativo
	while (tecla != 27){
		menu();
		
		tecla = getch();
		
		switch (tecla)
		case '1':{
		system("cls");
	 	exibirNome();
		vc = lerComprimento(); // Atribuindo o retorno da função na variavel
    	vl = lerLargura(); 
    	va = lerAltura(); 
    	vv = calcularVolume(vc, vl, va);
    	exibirResultados(vc, vl, va, vv);
			
		break;}
	}	

return 0;}
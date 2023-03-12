#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

int const tv = 3; // Tamanho dos vetores
double const taxaMulta = 0.02;
double const taxaJuros = 0.03333333333;

int linha = -1;

//Declarando os Vetores
double valor[tv], valorPagar[tv], valorMulta[tv], valorJuros[tv];
int diasAtraso[tv];

//Funções de Entrada
double lerValor(){
    double valorPresta;
    
    cout << "Digite o Valor da Prestação: ";
    cin >> valorPresta;
    
return valorPresta;}

int lerDias(){
    int diasA;
    
    cout << "Digite a quantidade de Dias em atraso: ";
    cin >> diasA;
    
return diasA;}

//Processamento de Dados

//Descobrir valor da Multa
double vMulta(double valorP, double taxaM){
    double vaMulta;
    
    vaMulta = valorP * taxaM;
    
return vaMulta;}

//Descobrir Valor do Juros
double vJuros(double valorP, double dias, double taxaJ){
    double vaJuros;
    
    vaJuros = taxaJ * valorP * dias;
    
return vaJuros;}

//Descobrir Valor a valorPagar
double valorAPagar(double valorP, double vaMulta, double vaJuros){
    double vaPagar;
    
    vaPagar = valorP + vaMulta + vaJuros;
    
return vaPagar;}

//Saida de Dados
void novaLinha(double v, int dia, double mul, double jur, double pag){
    
    linha++;
    
    valor[linha] = v; // Pedir Valor e Inserir no vetor 
    diasAtraso[linha] = dia; // Pedir dias e Inserir no Vetor
    valorJuros[linha] = jur; // Calcular o Juros e Inserir no Vetor
    valorMulta[linha] = mul; // Calcular a Multa e Inserir no Vetor
    valorPagar[linha] = pag; // Calcular quanto deve pagar e Inserir no Vetor
    
    
}

void exibir (){
    
    system("cls");
    cout << "Valor da Prestação | Dias em Atraso | Valor dos Juros | Valor da multa | Valor a Pagar\n\n";
    
    
    for (int i = 0; i <= linha; i++){
       
	    cout << setprecision(2) << fixed;
        cout << "R$" << valor[i] << " | " << diasAtraso[i] << " dias | ";
        cout << "R$" << valorJuros[i] << " de Juros | " << "R$" << valorMulta[i] << " de Multa | ";
        cout << " total a Pagar " << "R$" << valorPagar[i] << " | " << endl << endl; 
	}
    
    system("pause");
    system("cls");
    
}

void menu(){
    
    double valorP, valorM, valorPag, valorJ;
    int diasT, op;
    
    do{
        cout << " |           Menu           |\n\n";
        cout << " 1 - para Cadastrar Valor\n 2 - para Exibir \n";
        cout << " 3 - para Sair \n\nDigite a Opção: ";
        cin >> op;
        
        switch(op)
        case 1:{
            system("cls");
            valorP = lerValor();
            diasT = lerDias();
            valorM = vMulta(valorP , taxaMulta);
            valorJ = vJuros(valorP, diasT, taxaJuros);
            valorPag = valorAPagar(valorP, valorM, valorJ);
            
            novaLinha(valorP, diasT, valorM, valorJ, valorPag);
            system("cls");
            break;
            
        case 2:
            exibir();
            break;
            
        case 3:
            exit(0);
            break;
        }
        
    }while(true);
    
    
}

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
    menu();
    
return 0;}    

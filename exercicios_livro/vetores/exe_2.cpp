#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//Declarando os Vetores e descobrindo o tamanho do vetor de idades
int idades[] = {22, 18, 19, 25, 30};
int const tam = sizeof(idades) / sizeof(int);

string nomes[tam];

int linha = -1;

//Funções de Entrada
string lerNome(){
	string nome;
	
	cout << "Digite o Nome: ";
	cin.ignore();
	getline(cin, nome);
	
return nome;}

//Processamento de Dados
//Função criada para a Média ser calculada de acordo com a quantidade de nomes registrados
double mediaIdade(){
	double media , total;
	int divM = 0; // Variavel da quantidade de nomes cadastrados
	
	for (int i = 0; i <= linha; i++, divM ++){
		total += idades[i];
	}
 
	 media = total / divM;
	
return media;}

void maiorMenor(){
	
	int maior, menor;
	string nomeMa, nomeMe;
	
	for (int i = 0; i <= linha; i++){
		
		if(idades[i] > maior || i == 0){
			maior = idades[i];
			nomeMa = nomes[i];
			
		}if(idades[i] < menor || i == 0){
			menor = idades[i];
			nomeMe = nomes[i];
		}
			
	}
	
	system("cls");
	cout << nomeMa << " tem " << maior << " anos, tendo a Maior Idade." << endl;
	cout << nomeMe << " tem " << menor << " anos, tendo a Menor Idade." << endl << endl;
			
}

//Saida de Dados
void exibirMedia(double media){
	
	cout << setprecision(2) << fixed;
	cout << "A média das Idades é de " << media << " anos." << endl << endl;
	system("pause");
	system("cls");
	
}

//Cadastrar Novos Nomes
void novaLinha(string nome){
    
    linha++;
	nomes[linha] = nome; 
	system("cls");
     
}

void menu(){
    
	string reNome; 
	double mediaDasIdades;
	int op;
    
    do{
        cout << " |           Menu           |\n\n";
        cout << " 1 - para Cadastrar Nome\n 2 - para Exibir \n";
        cout << " 3 - para Sair \n\nDigite a Opção: ";
        cin >> op;
        
        switch(op)
        case 1:{
            system("cls");
            reNome = lerNome();
            novaLinha(reNome);
            break;
            
        case 2:
        	mediaDasIdades = mediaIdade();
            maiorMenor();
            exibirMedia(mediaDasIdades);
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

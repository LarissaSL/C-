#include"iostream"
#include"cstdlib"

using namespace std;

int cont = 0;

typedef struct me cad;
struct me { 
	int pos;  
	cad * liga;  
};

cad * ultimoNo;  
cad * primeiroNO;

int quantidade(){
	system("cls");
	int n;
	
	cout  << "Digite quantos n�s deseja fazer: " ;
	cin >> n;
	return n;
}


void construtor(){
	primeiroNO = ultimoNo = NULL;
}

void alocar (int n) { 
	
	for (int i=0; i < n ; i++){
	cont ++;
	cad * newcad = (cad*) malloc ( sizeof ( cad ) );
	
	if ( cont == 1 )  {  
		newcad-> liga = NULL;  
		newcad-> pos = cont;  
		
		primeiroNO = newcad;  
		ultimoNo = newcad;
		
	}else{ 
		ultimoNo->liga = newcad;  
		newcad->liga = NULL; 
		newcad->pos = cont;  
		} 
		
	ultimoNo = newcad;
	}
	cout << "Aloca��o feita com Sucesso!" << endl << endl;
	system("pause");
	system("cls");
	
}

bool vazia(){
	if(cont == 0){
		return true;
	}else 
		return false;
}


void exibir() { 
	system("cls");
	
	if(vazia() == false){
		cad * temp;   
		temp = primeiroNO;
	
		while ( temp != NULL) { 
			cout << "Posi��o: " << temp -> pos << "\nSeu End.: " << temp << "\nPr�ximo End.: " << temp -> liga << endl << endl;
			temp = temp-> liga; 
		} 
	}else {
		cout << "N�o h� nada alocado na mem�ria para exibir..." << endl << endl;
	}
	system("pause");
	system("cls"); 
} 

void busca(int n){
	system("cls");
	
	if(vazia() == false){
		cad * temp; // Crio o ponteiro temporario do tipo Cad
		temp = primeiroNO;
		
		int busca;
		
		cout << "Digite a posi��o que deseja buscar: ";
		cin >> busca;
		
		if(busca <= n){
			while ( temp != NULL) {    
			
				if (temp -> pos == busca){	
					cout  << "Se encontra na posi��o:" << temp -> pos << endl;
					cout  << "Tem esse endere�o: " << temp << endl;
					
				}
				temp = temp-> liga; 
			}
				  
		}else{
			cout << "Posi��o n�o encontrada..." << endl << endl;
		}
		
	}else {
		cout << "N�o h� nada alocado para buscar..." << endl << endl;

		
	}
			
	system("pause");
	system("cls");
		
	
}

void destrutor() {  
	system("cls");
	if(vazia() == 1){
		cout << "N�o h� nada alocado na mem�ria..." << endl << endl;
		system("pause");
		system("cls");
		return;
	
	}else{
		cad * temp;  
		temp = primeiroNO;
	
		cout << "\nLiberando Mem�ria..." << endl;
		while ( temp != NULL ){ 
			temp = temp->liga;	
			free(temp); 
		
		} 
			cont = 0;
			cout << "Mem�ria Liberada com Sucesso!" << endl;
			system("pause");
			system("cls");
	}
			
} 

int main() { 
	
	setlocale(LC_ALL, "portuguese");
	
	int op, n;
	
	do {
		cout << "| Menu |";
		cout << "\n1 - Alocar\n2 - Exibir\n3 - Buscar\n4 - Desalocar\n5 - Sair\n\nDigite a op��o: ";
		cin >> op;
		switch(op){
			case 1:
				n = quantidade();
				construtor();
				alocar(n);
				break;
			case 2:
				exibir();
				break;
			case 3:
				busca(n);
				break;
			case 4:
				destrutor(); 
				break;
			default:
				if(op != 5){
					cout << "Digite uma op��o v�lida por favor" << endl << endl;
					system("pause");
					system("cls");
				}
				break;
		}
		
	}while(op != 5);
	
return 0;}


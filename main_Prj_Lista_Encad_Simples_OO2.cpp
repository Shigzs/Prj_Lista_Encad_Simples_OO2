#include "Lista.h"

void menu(){
	cout << "1 - Imprimir lista" << endl;
	cout << "2 - Inserir no inicio da lista" << endl;
	cout << "3 - Remover um valor da lista" << endl;
	cout << "4 - Buscar um valor na lista" << endl;
	cout << "5 - Verificar se a lista é vazia" << endl;
	cout << "6 - Imprimir o tamanho da lista" << endl;
	cout << "7 - Liberar Lista" << endl;
	cout << "8 - Destruir lista" << endl;
	cout << "9 - Inserir no fim da lista" << endl;
	cout << "10 - Remover o primeiro nó dado da lista" << endl;
	cout << "11 - Remover o último nó dado da lista" << endl;
	cout << "12 - Imprimir primeiro item da lista" << endl;
	cout << "13 - Imprimir ultimo item da lista" << endl;
	cout << "Escolha uma opção:  ";
}
void print_tamanho(int t){
	cout << "Tamanho da Lista: " << t << endl;	
}

void print_retira(bool x){
	if (x)
		cout << "Dado removido com sucesso da lista!" << endl;
	else	
		cout << "Dado não encontrado na lista!" << endl;
}

void print_retira_inicio(bool x){
	if (x)
		cout << "Dado removido com sucesso da lista!" << endl;
	else	
		cout << "Lista Vazia" << endl;
}

void print_retira_fim(bool x){
	if (x)
		cout << "Dado removido com sucesso da lista!" << endl;
	else	
		cout << "Lista Vazia" << endl;
}

void print_vazia(bool x){
	if (x)
		cout << "Lista vazia!" << endl;
	else	
		cout << "Lista não vazia!" << endl;
}

void print_busca(bool x){
	if (x)
		cout << "Dado encontrado!" << endl;
	else	
		cout << "Dado não encontrado!" << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");

	cout << "PROGRAMA LISTA ENCADEADA SIMPLES" << endl;
	int i,x;
	Lista l; //instanciando o objeto l conforme a classe Lista
	
	do{
		cout << endl << "=========================================================" << endl << endl;
		menu();
		cin >> i;
		switch(i){
			case 1:  //Imprime
				l.imprime();
				break;
			case 2: //Inserir inicio
				cout << "Digite o valor a ser inserido: " << endl;
				cin >> x;
				l.insere_inicio(x);
				break;
			case 3: // Remover valor especifico (retira)
				cout << "Digite o valor a ser removido: " << endl;
				cin >> x;
				print_retira(l.retira(x));
				break;
			case 4: //Busca um valor na lista (busca)
				cout << "Digite o valor a ser buscado: " << endl;
				cin >> x;
				print_busca(l.busca(x));
				break;
			case 5: //Vazia
				print_vazia(l.vazia());
				break;
			case 6:  //Tamanho
				print_tamanho(l.tamanho());
				break;
			case 7: // Liberar Lista (libera)
				l.libera();
				cout << "Lista liberada!!" << endl;
				break;
			case 8: //Destruir Lista (Destrutor)
				l.~Lista();
				cout << "Lista Destruída!!" << endl;
				break;
			case 9: //Inserir no fim da lista
				cout << "Digite o valor a ser inserido: " << endl;
				cin >> x;
				l.insere_fim(x);
				break;
			case 10: //Remover primeiro no dado (retira_inicio)
				print_retira_inicio(l.retira_inicio());
				break;
			case 11: //Remover primeiro no dado (retira_inicio)
				print_retira_fim(l.retira_fim());
				break;
			case 12: //Imprimir o primeiro item da lista
				l.imprime_inicio();
				break;
			case 13: //Imprimir o ultimo item da lista
				l.imprime_fim();
				break;
			default:
				cout << "A opção inserida é inválida!!" << endl;
				break;
		}
	}while(i!=0);
	return 0;
}

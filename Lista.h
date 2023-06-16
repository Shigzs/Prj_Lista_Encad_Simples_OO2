#include <iostream>
#include <locale.h>
#include "no_dado.h"
using namespace std;

//typedef struct foi substitu�do por classe no_dado
/*struct lista_no_dado{
	int info;
	struct lista_no_dado* prox; 
};
typedef struct lista_no_dado no_dado;
*/

class Lista{
	//Declarar atributos
	private:
		no_dado* cabeca; //controla a lista (n�-cabe�a)
		int qtd; //guarda a qtd de n�s na lista
	
	//Declara m�todos
	public:
		Lista(); //Construtor - inicializar a lista em NULL
		~Lista(); //Destrutor - invocar m�todo libera
		void insere_inicio(int i); //Inserir dado i no in�cio da Lista
		void imprime(); //Imprime a lista do in�cio para o fim
		bool vazia(); //retornar bool se lista � vazia
		bool busca(int i); //Busca i na Lista, retornando bool
		bool retira(int i); //Remove 1a ocorr�ncia de i, retornando true caso encontre
		int tamanho(); //Retorna a qtd de n�s na lista
		void libera(); //Libera a lista
		//===================================================================================================================
		void insere_fim(int i); //Inserir dado i no fim da Lista
		bool retira_inicio(); //Retira o dado i no inicio da lista
		bool retira_fim(); //Retira o dado i no final da lista
		void imprime_inicio();
		void imprime_fim();
	private:
		bool isEmpty(no_dado* l); //M�todo privado que auxiliar� verifica��o de lista vazia a partir de dada refer�ncia	
};

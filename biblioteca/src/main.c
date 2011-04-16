#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

int main()
{
	char nomeArq[50] = "teste.dat";
	struct lista_livro *head = NULL;
	struct lista_livro *cabeca = NULL;
//
	struct livro teste;
//
	int i;


	leArquivo(nomeArq, &head);
	showMenu (&head);
	gravaArquivo(nomeArq, head);





//
//    for (i = 0; i < 2; i++){
//
//        insereEstruturaLivro(&teste);
//
//        insereLista1(&cabeca, teste);
//
//
//
//    }


    //imprimeEstrutura(teste);
   // removeLivro(&cabeca,"futebol");
   // imprimeListaLivros (cabeca);

//    gravaArquivo(nomeArq, cabeca);


//    leArquivo(nomeArq, &cabeca);


    //insereEstruturaLivro(&teste);

    //insereLista1(&cabeca, teste);

    //aux = cabeca;

//    imprimeListaLivros (cabeca);


    //imprimeArquivo (nomeArq);




/*    removeLivro(&cabeca,"futebol");

    printf ("\n");
    printf ("IMPRIMIR\n\n\n");


    imprimeListaLivros (cabeca);
*/

   // struct lista_emprestimo *head = NULL;
    //char nomeArq[50] = "teste.dat";

    //leArquivo(nomeArq, &head);
    //showMenu();
    //gravaArquivo(nomeArq, head);

    return 0;



}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

int main()
{

struct lista_livro *head = NULL;

leArquivo("teste.dat", &head);
menu (&head);
gravaArquivo("teste.dat", head);


//menu();



   /* for (i = 0; i < 2; i++){

        insereEstruturaLivro(&teste);

        insereLista1(&cabeca, teste);



    }*/

   // removeLivro(&cabeca,"futebol");
    //imprimeListaLivros (cabeca);

    //gravaArquivo(nomeArq, cabeca);


    //leArquivo(nomeArq, &cabeca);


    //insereEstruturaLivro(&teste);

    //insereLista1(&cabeca, teste);

    //aux = cabeca;

    //imprimeListaLivros (aux);


    //imprimeArquivo (nomeArq);




/*    removeLivro(&cabeca,"futebol");

    printf ("\n");
    printf ("IMPRIMIR\n\n\n");


    imprimeListaLivros (cabeca);
*/
    //imprimeEstrutura(teste);
   // struct lista_emprestimo *head = NULL;
    //char nomeArq[50] = "teste.dat";

    //leArquivo(nomeArq, &head);
    //showMenu();
    //gravaArquivo(nomeArq, head);

    return 0;



}

#include "menu.h"
#include "estrutura.h"
#include "livro.h"

void showMenu (struct lista_livro **head){

    int x;

    do {
        printf ("\n\nSISTEMA DE CADASTRO DE LIVROS\n\n");
        printf ("1. CADASTRAR LIVRO\n");
        printf ("2. REMOVER LIVRO\n");
        printf ("3. LISTA DE LIVROS CADASTRADOS");
        printf ("4. EMPRESTIMO\n");
        printf ("5. DEVOLUCAO\n");
        printf ("6. LISTA DE LIVOS EM ATRASO\n");
        printf ("0. SAIR\n");

        scanf ("%d", &x);

        struct lista_livro *aux = head;
        selecionaOp (aux, x);

    } while ( x!=0 );




}


void selecionaOp ( struct lista_livro **head, int x){


    switch (x){

        case 1 : cadastraLivro(head) ; break ;

        case 2 : printf ("\n2");break;

        case 3 : imprimeListaLivros(head) ;break;

        case 4 : printf ("\n4");break;

        case 5 : printf ("\n5");break;

        case 6 : printf ("\n6");break;

        case 0 : break;

        default : printf ("Opcao Invalida!"); break;

}




}

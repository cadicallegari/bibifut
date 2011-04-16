#include <stdlib.h>
# include <stdio_ext.h>
#include <string.h>
#include "livro.h"

void insereEstruturaLivro (TLivro *l){


    printf ("Nome do livro: \n");
    __fpurge(stdin);
    gets (l->titulo);

    printf ("Nome do(s) autor(es): \n");
    __fpurge(stdin);
    gets (l->autor);

    printf ("Ano: \n");
    __fpurge(stdin);
    scanf ("%d", &l->ano);

    printf ("Numero de exemplares: \n");
    __fpurge (stdin);
    scanf ("%d", &l->numex);

    printf ("Area: \n");
    __fpurge (stdin);
    gets (l->area);

}


void imprimeEstrutura (TLivro *l){

    printf ("Titulo:                           %s\n", l->titulo);
    printf ("Autor:                            %s\n", l->autor);
    printf ("Ano:                              %d\n", l->ano);
    printf ("Numero de exemplares:             %d\n", l->numex);
    printf ("Area:                             %s\n", l->area);

}

void insereLista1 (struct lista_livro **head, TLivro l) {

    struct lista_livro *novo;

    novo = (struct lista_livro*) malloc ( sizeof (struct lista_livro));

    strcpy (novo->dado1.titulo, l.titulo);
    strcpy (novo->dado1.autor, l.autor);
    novo->dado1.ano = l.ano;
    novo->dado1.numex = l.numex;
    strcpy (novo->dado1.area, l.area);

    novo->next = NULL;

    novo->status_livro = 0;

    if (*head == NULL) {
        *head = novo;
    }

    else {
        novo->next = *head;
        *head = novo;
    }


}


void removeLivro (struct lista_livro **head, char nomeLivro[50]){

    struct lista_livro *aux;

    aux = *head;

    while (aux != NULL){

        if ( strcmp (aux->dado1.titulo, nomeLivro ) == 0) {

            aux->status_livro = -1;
            break;

        }

        aux = aux->next;


    }

}


void imprimeListaLivros (struct lista_livro *head){

    struct lista_livro *aux;

    aux = head;

    while (aux != NULL) {

        if ( aux->status_livro != -1){

            printf ("Titulo:               %s\n", aux->dado1.titulo);
            printf ("Autor:                %s\n", aux->dado1.autor);
            printf ("Ano:                  %d\n", aux->dado1.ano);
            printf ("Numero de Exemplares: %d\n", aux->dado1.numex);
            printf ("Area                  %s\n", aux->dado1.area);
            printf ("\n__________________________\n");

        }

        aux = aux->next;

    }

}


void gravaArquivo (char nomeArq[50], struct lista_livro *head){

    struct lista_livro *aux;

    TLivro aux2;

    FILE *fp = fopen (nomeArq, "w+b");

    aux = head;


    while ( aux != NULL){

        if (aux->status_livro != -1){

            strcpy (aux2.titulo, aux->dado1.titulo);

            strcpy (aux2.autor, aux->dado1.autor);

            aux2.ano = aux->dado1.ano;

            aux2.numex = aux->dado1.numex;

            strcpy (aux2.area, aux->dado1.area);


            fwrite (&aux2, sizeof (TLivro), 1, fp);

        }

        aux = aux->next;

    }

    fclose (fp);


}




void imprimeArquivo (char nomeArq[50]){

    TLivro aux;

    FILE *fp = fopen (nomeArq, "rb");


    while( !feof(fp) ){

        fread (&aux, sizeof (TLivro), 1, fp);
        printf ("Titulo:                %s\n", aux.titulo);
        printf ("Autor:                 %s\n", aux.autor);
        printf ("Ano:                   %d\n", aux.ano);
        printf ("Numero de Exemplares:  %d\n", aux.numex);
        printf ("Area:                  %s\n", aux.area);
        printf ("\n__________________________\n");


    }


    fclose (fp);

}


void leArquivo (char nomeArq[50], struct lista_livro **head){

    int x;

   // struct lista_livro *novo;

    struct livro aux2;
    FILE* fp = fopen (nomeArq, "w+b");

    x = fread (&aux2, sizeof (struct livro), 1, fp);

    if ( x == 0){
        return 0;
    }
    else {

        while ( !feof(fp) ){
            fread (&aux2, sizeof (struct livro),1 , fp);
            insereLista1(&head, aux2);
        }
    }
    fclose (fp);
}


void cadastraLivro (struct lista_livro **head){

    struct livro teste;

    insereEstruturaLivro (&teste);
    insereLista1(&head, teste);


}


#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED

#include "estrutura.h"


void insereEstruturaLivro (TLivro *l);

void imprimeEstrutura (TLivro l);

void insereLista1 (struct lista_livro **head, TLivro l);

void removeLivro (struct lista_livro **head, char nomeLivro[50]);

void imprimeListaLivros (struct lista_livro *head);

void gravaArquivo (char nomeArq[50], struct lista_livro *head);

void imprimeArquivo (char nomeArq[50]);

void leArquivo (char nomeArq[50], struct lista_livro **head);

void cadastraLivro ();

#endif // LIVRO_H_INCLUDED

#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED

#include "estrutura.h"


void insereEstruturaLivro (struct livro *l);

void imprimeEstrutura (struct livro l);

void insereLista1 (struct lista_livro **head, struct livro l);

void removeLivro (struct lista_livro **head, char nomeLivro[50]);

void imprimeListaLivros (struct lista_livro *head);

void gravaArquivo (char nomeArq[50], struct lista_livro *head);

void imprimeArquivo (char nomeArq[50]);

void leArquivo (char nomeArq[50], struct lista_livro **head);

void cadastraLivro (struct lista_livro **head);

#endif // LIVRO_H_INCLUDED

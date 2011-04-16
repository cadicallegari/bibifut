#ifndef ESTRUTURA_H_INCLUDED
#define ESTRUTURA_H_INCLUDED


typedef struct pessoa {

    char nome [50];
    int idade;

} TPessoa;


typedef struct livro {

    char titulo[50];
    char autor[50];
    int ano;
    int numex;
    char area[50];

} TLivro;



typedef struct emprestimo {

    struct pessoa pes;
    struct livro liv;
    int qttd;

} TEmprestimo;



typedef struct lista_livro {

    struct livro dado1;
    int status_livro;
    struct lista_livro *next;

}; TLista1;



typedef struct lista_emprestimo {

    struct emprestimo empr;
    struct lista_emprestimo *next;
    int status_emprestimo;

}; TLista2;





#endif // ESTRUTURA_H_INCLUDED

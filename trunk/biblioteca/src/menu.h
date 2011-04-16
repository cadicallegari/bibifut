#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED


#include <stdio.h>
#include "estrutura.h"




void showMenu();

int showOptions();

struct lista_livro** selecionaOp ( struct lista_livro **head, int x);


#endif // MENU_H_INCLUDED

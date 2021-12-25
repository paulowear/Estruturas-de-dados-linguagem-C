#include "lista.h"
#include <stdio.h>
void create(struct Lista *lista){
    lista->inicio = NULL;
}
void inserir(struct Lista *lista, int elemento){
   struct Caixinha *nova;
   struct Caixinha *aux;
   nova = (struct Caixinha*) malloc(sizeof(struct Caixinha));
   nova->proximo = NULL; // depois dela nao vem ninguem;
   nova->elemento = elemento;
   // esta vazia?
   if (lista->inicio == NULL){
      lista->inicio = nova;
   }
   else{
      aux = lista->inicio;
      while (aux->proximo != NULL){
         aux = aux->proximo;
      }
      aux->proximo = nova;
   }
}
int isEmpty(struct Lista lista){
   return (lista.inicio == NULL);
}
int retirar(struct Lista *lista){
   struct Caixinha *aux = lista->inicio;
   int elemento = aux->elemento;
   lista->inicio = aux->proximo;
   free(aux);
   aux = NULL;
   return elemento;
}
void listar(struct Lista lista){
   if (lista->inicio == NULL){
      printf("Lista vazia - Nada a exibir\n");
   }
   else{
      struct Caixinha *aux = lista->inicio;
      while (aux != NULL){
         printf("Elemento %d visto \n",aux->elemento);
         aux = aux->proximo;
      }
   }
}
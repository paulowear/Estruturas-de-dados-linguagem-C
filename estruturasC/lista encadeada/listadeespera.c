#include "lista.h"
#include
int main(int argc, char *argv[]){
   struct Lista lista;
   int e;  
   create(&lista);
   inserir(&lista, 987);
   inserir(&lista, 712);
   inserir(&lista, 543);
   inserir(&lista, 1276);
   inserir(&lista, 7);
   inserir(&lista, 99);
   while (!isEmpty(lista)){
      e = retirar(&lista);
      printf("Elemento retirado = %d\n",e);
   }
   return 0;
}
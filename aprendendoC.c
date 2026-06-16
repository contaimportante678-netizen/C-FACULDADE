
#include <stdio.h>

int main(){

    {1, 0, 1},
    {0, 0, 0},
    {1, 1, 0},

};

printf ( "MAPA DA SALA DE CINEMA" );


for (int L = 0; L<3; L++) {

    for (int c = 0; c<3; c++) {


        if (cinema[L][c] == 0) //estamos comparando tudo com 0, se for igual a 0 é livre, e se for diferente de 0 (ou seja, 1) é ocupado {
            printf("[L]"); //LIVRE
        } 


        else {
          printf("[x]"); //OCUPADO, x pq é uma mensagem 
        }
    }






return 0;


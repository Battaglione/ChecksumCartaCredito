#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calcolo.h"
#include "conversionestringanumero.h"
int main(){
    char numerocarta[16];
    printf("Inserire il numero di carta senza spazi: ");
    gets(numerocarta);
    conversione(numerocarta);
    printf("Il calcolo del check digit e' %d\n", calcolo(numerocarta));
    system("pause");
    return 0;
}

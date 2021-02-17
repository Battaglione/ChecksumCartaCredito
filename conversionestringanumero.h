#ifndef CONVERSIONESTRINGANUMERO_H_INCLUDED
#define CONVERSIONETRINGANUMERO_H_INCLUDED

void conversione(char *a){
    int i;
    for(i = 0; i < 15; i++){
        a[i] = a[i] - 48;
    }
}

#endif
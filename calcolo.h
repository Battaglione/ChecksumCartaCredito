#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED


int calcolo(char *a){
    int ris, i, s, c16;
    s = 0;
    for(i = 0; i <= 15; i++){
        if(i % 2 != 0){
            ris = a[i] * 2;
            if(ris > 9){
                ris = ris - 9;
                s = s + ris;
            }
            else{
                s = s + ris;
            }
        }
        else{
            s = s + a[i];
        }
    }
    c16 = s * 9 % 10;
    return c16;
}
#endif
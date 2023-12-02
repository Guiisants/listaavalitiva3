
#include <stdio.h>
#include <string.h>

        int valorromn(char c){
               switch(c){
               case 'I': return 1;
               case 'V': return 5;
               case 'X': return 10;
               case 'L': return 50;
               case 'C': return 100;
               case 'D': return 500;
               case 'M': return 1000;
                  default: return 0;
    }
}

        int romnpdecml(char *romn){
          int resultado = 0;
    int i;

        for (i = 0; i < strlen(romn); i++) {
    int valorrecente = valorromn(romn[i]);
        int valoraprox = (i < strlen(romn) - 1) ? valorromn(romn[i + 1]) : 0;

        if (valorrecente >= valoraprox )
            resultado += valorrecente;
        else
            resultado -= valorrecente;
    }

    return resultado;
}

             void decmlpbin(int decml) {
           if (decml > 0) {
           decmlpbin(decml / 2);
           printf("%d", decml % 2);
    }
}




  int main(){
            char romn[13];
    scanf("%s", romn);

    
    
            int decml = romnpdecml(romn);

        printf("%s na base 2: ", romn);
        decmlpbin(decml);
        printf("\n%s na base 10: %d\n", romn, decml);
        printf("%s na base 16: %x\n", romn, decml);

    return 0;



}

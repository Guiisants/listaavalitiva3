#include <stdio.h>
#include <math.h>

int main(){


// 3 Variaveis 
         int meses;
         double aporte, taxa, montante;

    // Dados


    
           scanf("%d", &meses);
        scanf("%lf", &aporte);
        scanf("%lf", &taxa);

             for(int i = 1; i <= meses; i++){
             montante = aporte * (1 + taxa) * ((pow(1 + taxa, i) - 1) / taxa);

            printf("Montante ao fim do mes %d: R$ %.2lf\n", i, montante);
    }



    return 0;
}

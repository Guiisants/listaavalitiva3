#include <stdio.h>
#include <string.h>
#include <ctype.h>

// variaveis iniciais, ficou meio confuso mas peguei ajuda do meu genro 


int main() {
         
         char inicioplaca[9];
         char iniciodia[20];
         char diamenor[20];
         int  checkplaca = 0;
         int  checkdia = 0;
    
    char *diasOk[7] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", 
                               "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
                 scanf("%s", inicioplaca);
                 scanf("%s", iniciodia);
    
          inicioplaca[strcspn(inicioplaca, "\n")] = '\0';
            iniciodia[strcspn(iniciodia, "\n")] = '\0';      

                  for (int i = 0; i < 7; i++) {
                  if(strcmp(iniciodia, diasOk[i]) == 0) {
                      checkdia =  1;
        }
    }

    int tamanhoDaPlaca = strlen(inicioplaca);
    char ultimoCaractere = inicioplaca[tamanhoDaPlaca-1];

    if(((tamanhoDaPlaca == 8)&&(inicioplaca[3] == '-'))){
        checkplaca = 1;
    }else{
        if(((tamanhoDaPlaca == 7)&& (isdigit(inicioplaca[3])))){
            checkplaca = 1;
                 for(int i = 0; i < tamanhoDaPlaca; i++){
                 if(inicioplaca[i] == '-'){
                   checkplaca = 0;
                 break;
            }
        }
        }
    }

    int a = 0;

    for (int o = 0; iniciodia[o] != '\0'; o++) {
        diamenor[o] = tolower(iniciodia[o]);
        a++;
    }
      diamenor[a+1] = '\0';

         if((checkdia == 0) && (checkplaca == 0)){
     
            printf("Placa invalida\n");
     
         printf("Dia da semana invalido\n");
     
       }else if((checkdia == 1) && (checkplaca == 0)){
     
           printf("Placa invalida\n");
     
       }else if((checkdia == 0) && (checkplaca == 1)){
        
        printf("Dia da semana invalido\n");
     
     }else if((checkdia == 1) && (checkplaca == 1)){
       
        if (strcmp(iniciodia, "SABADO") == 0 || strcmp(iniciodia, "DOMINGO") == 0) {
       
       
        printf("Nao ha proibicao no fim de semana\n");
     
     }  else if ((strcmp(iniciodia, "SEGUNDA-FEIRA") == 0 && (ultimoCaractere == '0' || ultimoCaractere == '1')) ||
        
             (strcmp(iniciodia, "TERCA-FEIRA") == 0 && (ultimoCaractere == '2' || ultimoCaractere == '3')) ||
        
             (strcmp(iniciodia, "QUARTA-FEIRA") == 0 && (ultimoCaractere == '4' || ultimoCaractere == '5')) ||
        
             (strcmp(iniciodia, "QUINTA-FEIRA") == 0 && (ultimoCaractere == '6' || ultimoCaractere == '7')) ||
        
            (strcmp(iniciodia, "SEXTA-FEIRA") == 0 && (ultimoCaractere == '8' || ultimoCaractere == '9'))) {
        
        printf("%s nao pode circular %s\n", inicioplaca, diamenor);
    
    
    }else {
       



        printf("%s pode circular %s\n", inicioplaca, diamenor);
    }



    }
    return 0;
}

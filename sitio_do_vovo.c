#include <stdio.h> 
#include <stdlib.h>

int main() 
{

    int numeroCasosTeste,cabecasAnimais,patasAnimais,temp,patasCoelhos = 4,patasGalinhas = 2;

    //printf("Quantos casos de teste você deseja fazer?\n");
    scanf("%d", &numeroCasosTeste);

    if(1 <= numeroCasosTeste && numeroCasosTeste <= 1000 )
    {
    
        for(int i = 0; i < numeroCasosTeste; i++)
        {
            int cabecasGalinhas = 0,cabecasCoelhos = 0;
            
            //printf("Digite a quantidade de número de cabeças de animais e patas de animais separado por um espaço?\n");
            scanf("%d%d", &cabecasAnimais, &patasAnimais);
            
            if(1 <= cabecasAnimais 
                && cabecasAnimais <= 500 
                    && (2*cabecasAnimais) <= patasAnimais 
                        && patasAnimais <= (4*cabecasAnimais)
                            && patasAnimais%2 == 0)
            {
                if(patasAnimais > (2*cabecasAnimais))
                {
                    temp = patasAnimais%patasCoelhos;
                    cabecasGalinhas = temp/patasGalinhas;
                    cabecasCoelhos = cabecasAnimais - cabecasGalinhas;
                    
                    //printf("\n\nExistem %d Galinhas e %d Coelhos.\n\n", cabecasGalinhas,cabecasCoelhos);
                    
                    printf("%d %d\n", cabecasGalinhas,cabecasCoelhos);
                    
                }
                else
                {
                    //printf("\n\nExistem %d Galinhas e %d Coelhos.\n\n", patasAnimais/2,cabecasCoelhos);
                    
                    printf("%d %d\n", patasAnimais/2,cabecasCoelhos);
                    
                }
            }
        }
    }
}

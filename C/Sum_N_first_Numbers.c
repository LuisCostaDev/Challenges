/* ******************************************************************/
/*                                                                  */                                                          
/*   Sum_N_first_Numbers.c                                          */                                                        
/*   By:LuisCosta                           				        */
/*   Add the first N integers, with N defined by the user.          */  
/* ******************************************************************/
#include <stdio.h>
int main()
{
    int number, i = 1, result = 0;
    printf("Calculo da soma dos primeiros N numeros.\nIndique N:");
    scanf("%d", &number);
    while (i <= number){
        result += i;
        printf("\n adicionar %d, parcial %d", i, result);
     i++;
    }
    printf("\nTotal: %d\n", result);
}


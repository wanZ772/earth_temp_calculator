/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int deep, temp, celcius;
    float farent;
    printf("Enter deep");
    scanf("%d", &deep);
    celcius = 10 * deep + 20;
    farent = 1.8 * celcius + 32;
    
    printf("%d %.2f", celcius, farent);
    

    return 0;
}

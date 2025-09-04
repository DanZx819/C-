/******************************************************************************

Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float media(float*, int);

int main()
{
    int n;
    scanf("%d", &n);
    float a[n];

    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }


    float med = media(a, n);

    printf("%.2f", med);

    return 0;
}

float media(float* a, int n){

    float sa = 0.00;
    for(int i = 0; i < n; i++){

        sa += a[i];

    }
    float med = sa / n;

    return med;

}
#include <stdio.h>


int main(){

    int n;
    scanf("%d", &n);


        int v1 = n / 10000;
        printf("%d\n", v1);
        int v2 = (n/1000) % 10;
        printf("%d\n", v2);
        int v3 = (n/100) % 10;
        printf("%d\n", v3);
        int v4 = (n/10) % 10;
        printf("%d\n", v4);
        int v5 = n % 10;
        printf("%d\n", v5);

        if (v1 == v5 && v2 == v4)
        {
           puts("Eh palindromo");
        }
        else{
            puts("Nao eh palindromo");
        }
   
    

    return 0;
}
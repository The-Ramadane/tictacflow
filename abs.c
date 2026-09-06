#include <stdio.h>
#include <stdlib.h>

int my_abs(int n){
    return (n < 0)? -n : n;
}
int main(void){

    printf("%d", my_abs(-2));
    return 0;
}
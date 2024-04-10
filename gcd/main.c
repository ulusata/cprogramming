#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int gcd(int a, int b){
    if(a == 0)
        return b;
    else if(a > 0)
        return gcd(a - b, b);
    else if(a < 0){
        return gcd(b , a + b);
    }
    return 0;
}

int main(){
    int a, b;
    printf("a and b >>\n");  scanf("%d%d",&a,&b);
    printf("Greatest common divisor: %d", gcd(a, b));
}

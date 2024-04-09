#include <stdio.h>
#include <stdlib.h>
int main()
{
    int point = 1;
    int row;
    int check = 1;
    int d1 = 1;
    int d2 = 2;

    printf("Enter the row >>> "); scanf("%d",&row); //If rows are even it works as rows - 1

    for(int i = 1; i <= row; i += d1){

        blanks:
        for(int j = 1; j <= row - i; j++){
            printf(" ");
        }

        if(check){
            for(int k = 1; k <= point; k++){
                printf("*");
            }
        }

        else{
            printf("\n");
            check = 1;

            if(i >= row/2.0){
                d1 = -1;
                d2 = -2;
            }

            point += d2;

            if(i == 0)
                break;

            continue;
        }

        check = 0;
        goto blanks;

    }
}

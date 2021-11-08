#include <stdio.h>

int main(){
    int n,i,j, number = 1;
    n=10;

    for (i = 1; i <= n; i++){
        for(j = n; j > i; j--){
            printf(" ");
        }

        for(j = 1; j <=i; j++){
            printf("%d", number);
            number++;
        }
        printf("\n");
    }

return 0;
}

//42
#include <stdio.h>
int main() {
    int a=4,i,b,j,c;
    for (i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(c=1;c<=(2*i-1);c++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int c=1;c<=(2*i-1);c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
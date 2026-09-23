//40
#include <stdio.h>
int main() {
    int a=5;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if (j==i){
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
//39
#include <stdio.h>
int main() {
    int a=5;
    char ch='A';
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}
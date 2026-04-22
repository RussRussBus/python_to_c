#include <stdio.h>

int main(){
    char j[5];
    sprintf(j, "test");
    switch(j) {
        case 1:
            printf("case 1: %s\n", j);
            break;
        case 3:
            printf("2nd case: %s\n", j);
            break;
        default:
            printf("j = %s\n", j);
    }
}
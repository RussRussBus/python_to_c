#include <stdio.h>

int main() {
    int num;
    for(num = 1; num <= 100; num++) {
        if(num % 3 == 0) {                          // just learned it can be
            if(num % 5 == 0) printf("fizzbuzz\n");  // if(num % 3 == 0 &&
            else printf("fizz\n");                  // num % 5 == 0) or it can
        }                                           // be if(num % 15 == 0)
        else if(num % 5 == 0) printf("buzz\n");
        else printf("%d\n", num);
    }
}
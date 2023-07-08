#include "mbed.h"

// main() runs in its own thread in the OS

// 0, 1, 1, 2, 3, 5, 8, 13...... 




// n=1---0
// n=2---1
// n=3---1
// n=4---2

int fib(int n){
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
    
    // 3rd... (1+0) = 1 = 1
    // 4th... f(3)+f(2)....(1+1) = 2
    // .......

}

int main()
{
    printf("Lab 2 program \r\n");
    int max_term = 10;

    for(int i=1; i<=max_term; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");
    while (true) {

    }
}


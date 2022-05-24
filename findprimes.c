// Online C compiler to run C program online
#include <stdio.h>

int isPrime(int num){
    int counter = 0;
    
    for(int i = 1; i<=num; i++){
        if(num%i==0){
            counter++;
        }
    }
    return counter==2;
}

void findPrimes(int a, int b){
    for(int i = a; i<=b; i++){
        if(isPrime(i)){
            printf("%d\n", i);
            // printf("\n");
        }
    }
}

int main() {
    findPrimes(1, 100000);
    return 0;
}
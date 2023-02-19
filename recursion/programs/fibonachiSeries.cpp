#include <iostream>
#include <stdio.h>
using namespace std;

int *f1;
void initArray(int n){
    f1 = (int *)malloc(sizeof(int));
    for(int i=0; i<=n; i++){
        f1[i] = -1;
    }
}

/*
This is a simple function but takes more time to complete because of excessive recursion
Time Complexity: 2^n
*/
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

/*
Faster 
uses MEMORIZATION to remove EXCESSIVE RECURSION
Time Complexity: n
*/
int fib2(int n){
    int temp = 0;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    };   

    if(f1[n]!=-1){
        return f1[n];
    }else{
    temp = fib(n-2)+fib(n-1);
    f1[n]=temp;
    return f1[n];
    };
}



int main(){
    int n;
    printf("Enter the value of n: " );
    scanf("%d", &n);
    initArray(n);
    printf("Fibonacci simple : %d", fib(n));
    printf("Fibonacci using memorization: %d", fib2(n));
    return 0;
}

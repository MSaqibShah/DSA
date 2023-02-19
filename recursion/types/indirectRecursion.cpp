#include <iostream>

using namespace std;


int A(int n);
int B(int n);

int A(int n){
    if(n>0){
        printf("%d ", n);
        B(n-1);
    }
}

int B(int n){
    if(n>0){
        printf("%d ", n);
        A(n/2);
    }
}

int main(){
    printf("This is Indirect recursion as as 2 functions are recursively calling each other\n");
    A(20);
    return 0;
}

#include <iostream>

using namespace std;

int factRecursion(int n){

    if(n<0){
        printf("ERROR: Factorial is not valid for negative numbers");
        return 0;
    }    
    if(n>0){
        return factRecursion(n-1)*n;
    }
    return 1;
}

int factLoop(int n){
    int f=1;
    if(n<0){
        printf("ERROR: Factorial is not valid for negative numbers");
        return 0;
    }

    while(n>0){
        f *= n;
        n--;
    }
    return f;
}


int main(){
    
    printf("Factorial Recursion: %d\n", factRecursion(-1));
    printf("Factorial Loop: %d\n", factLoop(-1));
    return 0;
}

#include <iostream>

using namespace std;

int sumRecursion(int n){
    if(n>0){
        return sumRecursion(n-1)+n;
    }
    return 0;
}

int sumLoop(int n){
    int s=0;
    while(n>0){
        s += n;
        n--;
    }
    return s;
}

int sumFormula(int n){
    return n*(n+1)/2;
}

int main(){
    
    printf("Sum Recursion: %d\n", sumRecursion(5));
    printf("Sum Loop: %d\n", sumLoop(5));
    printf("Sum Formula: %d\n", sumFormula(5));
    return 0;
}

#include <iostream>

using namespace std;

// global x
// int x=0;

int fun(int n){
    static int x = 0; 
    if(n>0){
        x++;
        return fun(n-1) + x ;
    }
    return 0;
}

int main (){
    printf("%d ",  fun(20));
}
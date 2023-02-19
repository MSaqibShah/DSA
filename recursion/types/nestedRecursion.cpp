#include <iostream>

using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    return fun(fun(n+11));
}

int main(){
    printf("This is Nested recursion as as a recursive function call is nested within another recursive function call\n");
    printf("%d ", fun(95));
    return 0;
}

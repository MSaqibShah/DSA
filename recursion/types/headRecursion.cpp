#include <iostream>

using namespace std;

/* This is difficult to convert to a loop*/

int fun(int n){
    if(n>0){
        fun(n-1);
        printf("%d,", n);
    }
}

int main(){
    printf("This is head recursion as all statements are after the recursive caal\n");
    fun(3);
    return 0;
}

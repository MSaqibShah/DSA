#include <iostream>

using namespace std;


/* 
Tree Recursion:
For this program the time and space complexities are
    Time Complexity: O((2^n) -1)
    Space Complexity: O(n+1)

Note: I think this is the worst possible time and space complexity for a tree recursion but not sure 

*/


int fun(int n){
    if(n>0){
        printf("%d,", n);
        fun(n-1);
        fun(n-1);
    }
}

int main(){
    printf("This is tree recursion as we have multiple recursive calls\n");
    fun(3);
    return 0;
}

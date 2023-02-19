#include <iostream>

using namespace std;

/* 
This is easy to convert to a loop and the loop has a better space complexity  
Loop:
    Time Complexity: O(n)
    Space Complexity: O(1)

Tail Recursion:
    Time Complexity: O(n)
    Space Complexity: O(n)

Thus we should convert the tail recursion to a loop.
Certain compilers try to do it automatically 
*/

int fun(int n){
    if(n>0){
        printf("%d,", n);
        fun(n-1);
    }
}

int main(){
    printf("This is tail recursion as all statements are before the recursive caall\n");
    fun(3);
    return 0;
}

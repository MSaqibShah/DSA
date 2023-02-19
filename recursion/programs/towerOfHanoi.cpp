#include <iostream>

using namespace std;

void TOH(int n, char A, char B, char C){
    if(n>0){
        TOH(n-1, A,C,B);
        printf("\nMove disk %d from %c to %c\n",n,A,C);
        TOH(n-1, B,A,C);
    }
}

int main(){
    
    TOH(3, 'a', 'b','c');
    return 0;
}

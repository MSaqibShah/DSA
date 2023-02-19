#include <iostream>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}

/*
This is a simple function that uses a function to calculate n!, r! and (n-r)!. 
Then calculates nCr using the formula.
Time Complexity: O(n)
*/
int C(int n, int r){
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2*t3);
}


/*
This uses pascals triangle ie
            1
        1       1
    1       2       1
1       3       3       1

pascals triangle shows that every nCr can 
be written as a combination of (n-1)C(r-1) and (n-1)Cr 
where each boundry value of nCr = 1 ie. for r=0 or r=n

Thus nCr 
= { 
    1                            r=0 | n=r
    nCr(n-1,r-1) + nCr(n-1,r)    for all other n,r 
  }
*/
int nCr_pascals(int n, int r){
    if(r==0|r==n){
        return 1;
    }
    return nCr_pascals(n-1,r-1) + nCr_pascals(n-1, r);
}

int main(){
    
    printf("nCr: %d\n", C(5,3));
    printf("nCr: %d\n", nCr_pascals(5,3));
    return 0;
}

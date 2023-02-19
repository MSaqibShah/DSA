#include <iostream>

using namespace std;

float taylorSeries(int x, int n){

    static float p = 1,f = 1;
    float res = 0;

    if(n==0){
        return 1;
    }
    res = taylorSeries(x,n-1);
    p *= x;
    f *= n;
    return res + p/f;
}

float taylorSeries2(int x, int n){

    static float s =1;
    if(n==0){
        return s;
    }
    s = 1+(x*s/n);
    return taylorSeries2(x,n-1);
}


int main(){
    
    printf("Using Normal Function: %f\n", taylorSeries(2,10));
    printf("Using Hornet's Function:%f\n", taylorSeries2(2,10));
    return 0;
}

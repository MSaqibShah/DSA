#include <iostream>

using namespace std;

float exponentRecursion(float m, int n){

    if(n<0){
        return (exponentRecursion(m,n+1)/m);
    }
    if(n==0){
        return 1;
    }
    return exponentRecursion(m,n-1)*m;
}

float exponentLoop(float m, int n){
    float result = 1.0;
    if(n<0){
        for(int i=0; i>n; i--){
            result = result/m;
        }
        return result;
    }

    for(int i = 0; i<n; i++){
        result *= m;
    }
    return result;
}

/*
This function is faster than the previous 
*/
float pow(int m, int n){
    if(n==0){
        return 1;
    }
    else if (n%2==0){
        if(n<0){
            return pow(m*m, n/2);
        }
        return pow(m*m, n/2);
    }
    if(n<0){
        return (pow(m*m, (n+1) /2))/m;
    }
    return m*pow(m*m, (n-1) /2);

}



int main(){
    
    printf("Exponent Recursion: %f\n", exponentRecursion(2,-3 ));
    printf("Exponent Loop: %f\n", exponentLoop(2, -3));
    printf("Pow: %f\n", pow(2, -3));
    return 0;
}

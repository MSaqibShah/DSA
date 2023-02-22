#include <iostream>

using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5}; // predefined values
    int arr2[5]; // Garbage values
    int arr3[5] = {1}; // 1 at 0th index and rest are 0
    int *arr4;
    arr4 = (int *)malloc(5*sizeof(int)); // dynamic array

    for(int i=0; i<5; i++){
        printf("arr1: %d \n", arr1[i]);
    }
    for(int i=0; i<5; i++){
        printf("arr2: %d \n", arr2[i]);
    }
    for(int i=0; i<5; i++){
        printf("arr3: %d \n", arr3[i]);
    }
    for(int i=0; i<5; i++){
        printf("arr4: %d \n", arr4[i]);
    }


    return 0;
}
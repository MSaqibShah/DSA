#include <iostream>

using namespace std;

void displayArr(int **arr){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
}
}


int main(){
    
/*
As an array of pointers

We store the array in 2 memories i.e stack and heap.
The actual elements get saved in linear arrays in the heap.
The pointer to these linear arrays get stored in 
the stack frame of the main function.
*/ 
int *arr[3];

for(int i=0; i<3; i++){
    arr[i] = new int[4];
    for(int j=0; j<4; j++){
        arr[i][j] = i;
    }
}

/*
using double pointers

All the pointers refer to the memory in the heap.
*/

int **arr2;

arr2 = new int *[3];

for(int i=0; i<3; i++){
    arr2[i] = new int[4];
    for(int j=0; j<4; j++){
        arr2[i][j] = 555-j-i;
    }
}

displayArr(arr);
displayArr(arr2);


return 0;
}

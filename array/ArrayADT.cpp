#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *array;
    int length; // Total elements present  
    int size; // Max space of array
};
struct Array initArray(int size){
    struct Array temp;
    temp.array = (int *)malloc(sizeof(int)*size);
    temp.length = 0;
    temp.size = size;
    return temp;
}

void displayArray(struct Array arr){
    int i = 0;
    if(arr.length == 0){
        printf("Array is Empty");
        return;
    }

    printf("Array: ");
    for(i=0; i<arr.length; i++){
        printf("%d ", arr.array[i]);
    }
    printf("\n");
}

void appendToArray( struct Array *arr, int number){
    if(arr->length == arr->size){
        printf("\nArray is full\n");
        return;
    }
    arr->array[arr->length] = number;
    arr->length++; 
    return;
}

void insertIntoArray( struct Array *arr, int number, int pos){
    int i=0;
    if(pos >= arr->length || pos < 0){
        printf("Invalid position %d\n", pos);
        return;
    }

    if(arr->length == arr->size){
        printf("\nArray is full\n");
        return;
    }
    for( i=arr->length; i>pos; i--){
        arr->array[i] = arr->array[i-1];
    }
    arr->array[i] = number;
    arr->length++; 
    return;
}

int deleteFromArray(struct  Array *arr, int pos)
{
    int deleted =0;
    if(pos < 0 || pos >=arr->length){
        printf("ERROR: Invalid Position\n");
        return 0;
    }
    deleted = arr->array[pos];
    for(int i=pos; i<arr->length-1; i++){
        arr->array[i] = arr->array[i+1];
    }
    arr->length--;
    return deleted;
}


int linearSearch(struct Array *arr, int key){
    int i;
    for(i=0; i<arr->length; i++){
        if(key==arr->array[i]){
            return i;
        }
    }
    return -1;
}

int linearSearchTraspose(struct Array *arr, int key){
    /* 
    
    Modifying linear search to make it better by 
    moving the element to the left by one step 
    every time element is found.
    
    */

    int i;
    for(i=0; i<arr->length; i++){
        if(key==arr->array[i]){
            int a = arr->array[i-1];
            arr->array[i] = a;
            arr->array[i-1] = key;
            return i-1;
        }
    }
    return -1;
}

int linearSearchFront(struct Array *arr, int key){
    /* 
    
    Modifying linear search to make it better by 
    moving the element to the front  
    every time element is found.
    
    */
    int i;
    for(i=0; i<arr->length; i++){
        if(key==arr->array[i]){
            int a = arr->array[0];
            arr->array[0] = key;
            arr->array[i] = a;
            return i-1;
        }
    }
    return -1;
}

int binarySearch(struct Array *arr, int key){
    int low = 0, high = arr->length;
    int mid = (low+high)/2;
    int i=0;
    while(low<=high){
        if(arr->array[mid]==key){
            return mid;
        }
        else if(key < arr->array[mid] ){
            high = mid-1;
            mid = (low+high)/2;

        }
        else{
            low = mid+1;
            mid = (low+high)/2;

        }
    }

    return -1;
}

int main(){
    struct Array arr, arr1;
    
    arr = initArray(10);
    arr1 = initArray(10);
    for(int i=0; i<5; i++){
        arr.array[i] = i;
        arr.length++; 
        arr1.array[i] = i;
        arr1.length++; 
    }

    displayArray(arr);
    appendToArray(&arr, 500);
    displayArray(arr);
    insertIntoArray(&arr, 200, 2);
    displayArray(arr);
    deleteFromArray(&arr, 1);
    displayArray(arr);

    printf("%d\n", linearSearch(&arr, 200));
    printf("%d\n", linearSearchTraspose(&arr, 200));
    displayArray(arr);

    printf("%d\n", linearSearchFront(&arr, 500));
    displayArray(arr);

    displayArray(arr1);
    printf("%d\n ", binarySearch(&arr1, 2));











    return 0;
}
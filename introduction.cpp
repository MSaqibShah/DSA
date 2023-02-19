#include <iostream>

using namespace std;

struct rect{
    int length;
    int breadth;
};


struct triangle{
    int sides[3];
};

struct rect * initArrayRect(int n){
    struct rect *p,*head;
    p = (struct rect *)malloc(n*sizeof(struct rect));
    head = p;
    for(int i=0; i<n; i++){
        p->length = i;
        p->breadth = i;
        p++;
    }
    return head;
}

void displayArrayRect(struct rect a[], int n){
    for(int i=0; i<n; i++){
        printf("============== \n");
        printf("Rectangle : %d\n", i+1);
        printf("Length : %d\n", a[i].length);
        printf("Breadth : %d \n", a[i].breadth);
        printf("============== \n");
    }
    return;
}

struct triangle * initArrayTriangles(int n){
    struct triangle *p, *head;
    p = (struct triangle *)malloc(n*sizeof(struct triangle));
    head = p;
    for(int i=0; i< n; i++){
        p->sides[0] = i;
        p->sides[1] = i;
        p->sides[2] = i;
        p++;
    }
    return head;
}

void displayTriangle(struct triangle a){
    for(int i=0; i<3;i++){
        printf("Side %d : %d\n", i+1,a.sides[i]);
    }
}

void displayTriangles(struct triangle *a, int n){
    for(int j=0; j<n; j++){
        printf("Triangle %d : ", j+1);
        for(int i=0; i<3;i++){
            printf("Side %d : %d\n", i+1,a->sides[i]);
        };
        a++;
    };
}

int main(){
    // struct rect arr[5];
    // for(int i=0; i<5; i++){
    //     arr[i].length = i;
    //     arr[i].breadth = i;
    // }
    // struct rect *arr;
    // arr = initArrayRect(5);
    // displayArrayRect(arr,5);

    // struct triangle t[2];
    
    // for(int i=0; i<2; i++){
    //     t[i].sides[0] = i;
    //     t[i].sides[1] = i;
    //     t[i].sides[2] = i;
    // }

    struct triangle *t;
    t = initArrayTriangles(2);
    displayTriangles(t, 2);
}
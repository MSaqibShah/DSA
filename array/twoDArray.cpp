#include <iostream>


using namespace std;

int main(){
    // Array using stack memory

    int A1[2][2]; // Garbage values
    int A2[2][2] = {{1}}; // All uninitialized values are set to 0
    int A3[2][2] = {{1,2},{3,4}}; // all values are initialized

    cout<<"A1:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<A1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"A2:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<A2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"A3:"<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<A3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

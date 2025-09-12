#include <iostream>
using namespace std;
int main (){
    int n=5;
    int ar[5]={1,2,3,4,5};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for (int k=i;k<=j;k++){
                cout<<ar[k];
            }
            cout<<" ";
        } 
        cout<<endl;
    } 
    return 0;
}
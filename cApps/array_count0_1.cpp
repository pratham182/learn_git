#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0};
    int size=15;
    int numZero=0;
    //int numone=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            numZero++;
        }

    }
    cout<<numZero;
}
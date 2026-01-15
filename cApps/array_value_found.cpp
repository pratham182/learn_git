#include<iostream>
using namespace std;
bool find (int arr[],int size,int key){
    //linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key)
            return true;
    }
    return false;
}
int main(){
        int arr[4]={1,2,5,4};
        int size=4;
        
        int key;
        cin>>key;
        if(find(arr,size,key)){
            cout<<"found";
        }
        else{
            cout<<"not found";
        }
    }
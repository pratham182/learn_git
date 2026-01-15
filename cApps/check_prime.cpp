#include<iostream>
using namespace std;
int prime_no (int n){
for (int i=2;i<n;i++) {
    if(n%i==0){
      return false;  
    }
}
        return true;
  
  }


int main(){
   int n;
   cin>>n;
   int ans = prime_no(n);
   if (ans)
   {
       cout <<"prime";
   }
    else{
        cout<<"not prime";
    }
  }

#include<iostream>
using namespace std;
int prime_no(int n){
  for (int i=2;i<n;i++){
 if (n%i==0){
    return false;
}
  }
return true;

}
int main(){
   int n;
  cin>>n;
   for (int i=2;i<n;i++){
    int prime_count=prime_no(i);
    if(prime_count){
        cout<<i<<" ";
    }
  }
}

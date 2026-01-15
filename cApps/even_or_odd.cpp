#include<iostream>
using namespace std;
bool even_or_odd(int n){
if (/*n%2==0*/n&1==0){
return true;
}
else{
    return false;
}
}
int main(){
   int n;
  cin>>n;
bool check=even_or_odd(n);
  if(check){
  cout<<"even";
  }
else{
    cout<<"odd";
}
}
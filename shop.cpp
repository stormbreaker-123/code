#include<iostream>
using namespace std;
int main(){
float a;
cin>>a;

if(a>1000){
float d = (a*0.1);
   a=a-d;
}
cout<<a;

return 0;
}

#include<iostream>
using namespace std;
int main(){
float h,a;
cin>>h>>a;

float p = (a/h)*100;
cout<<p<<endl;
if (p>=75){
    cout<<"allowed"<<endl;
}
else{
    cout<<"not allowed"<<endl;
}









return 0;
}
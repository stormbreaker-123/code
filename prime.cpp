#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;


int count =0;
if (a==1){
    cout<<"no composite no prime";
}
else{

for(int i =1;i<=a;i++){

    
    if(a%i==0){
        count++;
    }
}

if(count==2){
    cout<<"prime";
}
else {
    cout<<"non prime";

}
}

return 0;
}
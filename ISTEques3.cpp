#include<iostream>
#include<cmath>
using namespace std;

bool isP(int num){
if (num<=1){
    return false;
}
if(num<=3){
    return true;
}
if(num%2==0||num%3==0){
    return false;
}
for(int i=5;i*i<=num;i+=6){
    if(num%i==0||num%(i+2)==0){
        return false;
    }
}
return true;
}

int main(){
int num;
cout<<"Enter a number:";
cin>>num;
if(isP(num)){
    cout<<num<<" Is a prime Number.";}
else{
    cout<<num<<" Is a composite Number";
}
return 0;
}

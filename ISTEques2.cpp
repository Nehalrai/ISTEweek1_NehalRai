#include<iostream>
using namespace std;

int reversenum(int num){
int revnum=0;

while(num>0){
    int lastdigit=num%10;
    revnum=revnum*10+lastdigit;
    num=num/10;
}
return revnum;
}

int main(){
int num;
cout<<"Enter a number:";
cin>>num;

int revnum=reversenum(num);
cout<<"Reversed number:"<<revnum<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main(){
int i,n;
int A[100];

cout<<"Enter total number of elemants:";
cin>>n;
cout<<endl;

for(i=0;i<n;i++){
    cout<<"Enter the elements:";
    cin>>A[i];
}
for(i=1;i<n;i++){
    if(A[0]<A[i])
        A[0]=A[i];
}
cout<<endl<<"Largest element="<<A[0];
return 0;
}

#include<iostream>
using namespace std;

void triangle(int n){
int i,j,k=n;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j>=k)
            cout<<"* ";
        else
            cout<<" ";
    }
    k--;
    cout<<"\n";
}
}

int main(){
triangle(5);
return 0;
}

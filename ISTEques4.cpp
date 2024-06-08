#include<iostream>
using namespace std;
int main(){
int rows,columns,num=1,n=4;
for(rows=0;rows<=n;rows++){
    for(columns=0;columns<=rows;columns++){
        cout<<num<<" ";
        num++;
    }
    cout<<"\n";
}
return 0;
}

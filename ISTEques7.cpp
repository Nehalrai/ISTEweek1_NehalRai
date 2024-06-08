#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<int> vec;

int n,ele;
cout<<"Enter the number of elements:";
cin>>n;

cout<<"Enter the elements:";
for(int i=0;i<n;i++){
    cin>>ele;
    vec.push_back(ele);
}
sort(vec.begin(),vec.end());
cout<<"Sorted vector:";
for(const int &elem:vec){
    cout<<elem<<" ";
}
cout<<endl;
return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){
//initializing an integer vector
vector<int> vec={11,34,22,5,79};
//traverse and print each element
cout<<"Elements in the vector:";
for(vector<int>::iterator it=vec.begin(); it!=vec.end();++it){
    cout<<*it<<" ";
}
cout<<endl;
//in reverse order
cout<<"Elements in reverse order:";
for(vector<int>::reverse_iterator rit=vec.rbegin(); rit!=vec.rend();++rit){
    cout<<*rit<<" ";
}
cout<<endl;
return 0;
}

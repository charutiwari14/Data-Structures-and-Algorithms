#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    int sum=0;
    for(auto x:v){
        sum=sum+x;
    }

    cout<<"Average:"<<sum/v.size();
}
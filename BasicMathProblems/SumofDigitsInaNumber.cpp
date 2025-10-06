#include<iostream>
using namespace std;

int main(){
    int num=456487565;
    int sum=0;

    while (num>0)
    {
        int digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    
    cout<<"Sum of digits in num: "<<sum;
}
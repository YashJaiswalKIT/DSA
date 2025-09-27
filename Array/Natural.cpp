//wap to print sum of n natural number by using array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth value which you want to add:";
    cin>>n;
    int arr[100];
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<"The sum of natural number is:"<<sum;
    return 0;
}


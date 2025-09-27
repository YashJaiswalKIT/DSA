#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.of subject:";
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the marks of each subject:";
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

    }
    float percentage=sum/n;
    cout<<"The average percentage of marks is:"<<percentage<<"%";
    return 0;
    
    
}
//wap to create a one dimensional array
#include<iostream>
using namespace std;
int main(){
    //it is one dimensional array
    int arr[50];
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter elements :";
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i];
        
    }
    
    
    

}

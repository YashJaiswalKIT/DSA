// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100];
//     int n;
//     cout<<"Enter the size of an array:";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter element:"<<i<<":";
//         cin>>arr[i];
//     }
//      cout<<"before the deletition your array is:"<<endl;
//     for (int i=0;i<=n;i++){
        
//         cout<<arr[i];
//     }
//     cout<<endl;
//     int ele;
//     cout<<"Enter the element which you want to delete:"<<endl;
//     cin>>ele;
//     for (int i = 0; i < n; i++)
//     {
//         if (ele=arr[i])
//         {
//             cout<<"deletition performing......."<<endl;
//             // Shift elements left
        
//             break;
            
//         }
//         else{
//             cout<<"your enterd element does npot exist"<<endl<<"reRun the program";
            
//         }
        
//     }
    
    

//     cout<<" after deletition Your array is:"<<endl;
//     for (int i=0;i<=n;i++){
        
//         cout<<arr[i];
//     }
    
    
// }



#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element "  << ": ";
        cin >> arr[i];
    }

    cout << "Before deletion your array is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ele, pos = -1;
    cout << "Enter the element which you want to delete: ";
    cin >> ele;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == ele) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Your entered element does not exist.\n";
    } else {
        cout << "Deletion performing.......\n";

        
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        cout << "After deletion your array is:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

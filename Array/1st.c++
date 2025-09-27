// // // write a programm in c++ create an array of size n inter n from user performthe traversen operttion of an array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of Array: ";
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter elements of Array :";
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// wap in c/c++ to perform insertion of an element at the bigging


#include <iostream>
using namespace std;

int main() {
    int n, i, ele;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100]; 

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to insert at the beginning: ";
    cin >> ele;

    //shifting
    for (i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[0] = ele;

    n++;

    cout << "Array after insertion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

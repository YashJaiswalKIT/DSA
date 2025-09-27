// // // write a programm in c create an array of size n enter n from user performte traversen opertion of an array
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter The Size of Array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Enter the elements:");
//         scanf("%d",&arr[i]);
//     }
//     printf("Array eelements are:");
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d ",arr[j]);
//     }
    
// }

// wap in c to perform insertion of an element at the bigging

#include<stdio.h>
int main(){
    int n,ele,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[100];
    for ( i = 0; i < n; i++)
    {
       printf("Enter the elements:");
       scanf("%d",&arr[i]);
    }
    printf("Enter the element which you try to insert:");
    scanf("%d",&ele);
    //shifting
    for ( i = n; i>0; i--)
    {
        arr[i]=arr[i - 1];
    }
    arr[0]=ele;
    n++;
    printf("After the insertion: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    } 
    return 0;
}
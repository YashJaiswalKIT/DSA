#include<stdio.h>

int main(){
    int arr[90];
    int n;
    printf("Ente the sze of array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }

    printf("before sorting your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //sorting
    for(int i=0;i<n;i++){
        for (int j= 0; j < n-i-1; j++)
        {
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
    printf("after sorting your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }


    
    return 0;
}
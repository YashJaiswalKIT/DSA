// insertion at bigging

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the Size of Array:");
//     scanf("%d",&n);

//     int arr[30];
//     for(int i=0;i<n;i++){
//         printf("Enter the elements:");
//         scanf("%d",&arr[i]);
//     }
//     printf("Traversion before insertion:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     int ele;
//     printf("Enter the Element:");
//     scanf("%d",&ele);

//     //shifting
//     for(int i=n; i>0; i--){
//         arr[i]=arr[i-1];
//     }

//     arr[0]=ele;
//     n++;
//     printf("after insertion\n");
//     for(int i=0;i<n; i++){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }


 // wap to perform insertion at end in array

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the Size of Array:");
//     scanf("%d", &n);

//     int arr[30];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the elements:");
//         scanf("%d", &arr[i]);
//     }
//     printf("Traversion before insertion:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     int ele;
//     printf("Enter the new Element:");
//     scanf("%d", &ele);
//     arr[n] = ele;
//     n++;
    
//     printf("after insertion\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }



//wap to perform insertion at middle 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("before insertion\n");
    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }

    int ele,newele;
    printf("Enter the Existed element where you want to insert:");
    scanf("%d",&ele);
    printf("Enter the new element:");
    scanf("%d",&newele);

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==ele){
            printf("element is found where you want to insert");
            
            break;

        }
        else{
            printf("element is not found")
            break;
        }
    }
    

    
    
    return 0;
}
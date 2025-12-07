#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the elements:");
        scanf("%d",&arr[i]);
    }
    printf("travertion before insertion..\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //shifting
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    int ele;
    printf("Enter the element which you want to insert:");
    scanf("%d",&ele);
    int j;
    printf("Enter the index positon where you want to insert:");
    scanf("%d",&j);
    if(j<=n){
        arr[j]=ele;
        n++;
        printf("insertion succsessfuly..\n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        printf("insertion  not possible\n");
    }
    return 0;
}
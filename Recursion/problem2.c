#include<stdio.h>

int Fibbnocci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return Fibbnocci(n-1)+Fibbnocci(n-2);
    }
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Fibbocci is : %d",Fibbnocci(num));
    return 0;
}
#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int Fibbnocci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return Fibbnocci(n-1)+Fibbnocci(n-2);
    }
}
int main(){
    int number;
    printf("Enter the Number:");
    scanf("%d",&number);
    printf("Factorial is %d",factorial(number));
    printf("\nFibbocci is : %d",Fibbnocci(number));
    return 0;
}
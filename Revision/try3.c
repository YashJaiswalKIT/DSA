//find factorial by using recursion

#include<stdio.h>


int  factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}

int fibbnocci(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibbnocci(n-1)+fibbnocci(n-2);
    }
}

int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("Factorial is:\n");
    printf("%d",factorial(n));

    printf("Fibbnocii is:\n");
    printf("%d",fibbnocci(n));
    return 0;
}
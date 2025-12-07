#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }

}
int main(){
    int number;
    printf("Enter the Number:");
    scanf("%d",&number);
    printf("Factorial is %d",factorial(number));
    return 0;
}
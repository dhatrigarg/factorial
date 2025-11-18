#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("Enter value :");
    scanf("%d",&n);
    printf("Factorial is :%d",fac(n));
    return 0;
}
int fac(int n){
    if (n==0){
        return 1;
    }
    if (n==1){
        return 1;
    }
    int fac1=fac(n-1)*n;
    return fac1;
}
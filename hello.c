#include<stdio.h>
int fibbo(int n); 
int main() {
    int n;
    printf("Enter value :");
    scanf("%d",&n);
    printf("%d",fibbo(n));
    return 0;
}
int fibbo(int n){
    if(n-1==0){
        return 0;
    }
    if (n-1==1){

        return 1;
    }
    return fibbo(n-1)+fibbo(n-2);
    }

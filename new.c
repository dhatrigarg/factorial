/*
question is to print fibbonacci series upto n terms
*/




#include<stdio.h>
int fibbo(int n); 
int main() {
    printf("%d",fibbo(1));
    return 0;
}
int fibbo(int n){
    for(int i;i<=n;i++){
        if(n==0){
            return 0;
        }
        if(n==1){
            fibbo(1)=1;
            return;
        }
        int fibbo1=fibbo(n-1)+fibbo(n-2);
        printf("%d", fibbo1);
        return 0;
    }
    }
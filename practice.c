 #include<stdio.h>
 #include<math.h>

 int main() {
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  for(int i=1;i<=10;i++){
    int c;
    c=num*i;
    printf("%d X %d = %d \n" ,num , i, c);
  }
  
  return 0;
 }
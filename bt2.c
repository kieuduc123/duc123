#include <stdio.h>

int main()
{/Users/user/Documents/HelloWorld-5.c
  int a[5],i;
  float b [10];
  printf("Nhap vao phan tu a:\n ");
  for(i = 0;i < 5; i++){
    printf("a%d= ",i);
    scanf("%d",&i[a]);
  }
 printf("Nhap vao phan tu b: ");
 for(i = 0;i < 10;i++){
   if(i<5){
   b[i]=a[i];
   printf("\nb[%d]= %f",i,b[i]);
   
 }else{
   printf("\nb[%d]= %f",i);
 }
 return 0;
}
}

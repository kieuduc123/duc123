#include <stdio.h>

int main()
{
  int a[10],i,j;
 printf("Nhap day so :\n");
 for(i = 0;i < 10;i++)
 {
   printf("a[%d]",i);
   scanf("%d",&a[i]);
 }
 printf("Vi tri so chan:\n");
 for(j = 0;j < 10;j += 2)
 printf("\n%d",a[j]);

 return 0;
}
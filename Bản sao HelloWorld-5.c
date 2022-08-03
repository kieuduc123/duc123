#include <stdio.h>
main(){
int a[10],i;
printf(“nhap:\n”);
int max,min;
int demmax,demmin;
int total=0;
for(i=0;i<10;i++){
printf(“a[%d]”,i);
scanf(“%d”,&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<10;i++){
if(a[i]>max){
max=a[i];
}
if(a[i]<min){
min=a[i];
}
}
demmax=0;
demmin=0;
for(i=0;i<10;i++){
if(a[i]==max){
demmax++;
}
if(a[i]==min){
demmin++;
}
}
for(i=0;i<10;i++){
total+=a[i];
}

printf(“max = %d: So lan xuat hien la: %d\n”,max,demmax);
printf(“min = %d: So lan xuat hien la: %d\n”,min,demmin);
printf(“\nTong cac phan tu la: %d”,total);
}
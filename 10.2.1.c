#include<stdio.h>

int message(int a[],int n){
 	int i,sum=0;

 for(i=0; i<n; i++){
    sum+=a[i];
 }
 	return sum;
}
main(){
    int a[1000];
    int i;
    int n;
    int sum=0;
   
printf("Enter size of the array: ");
scanf("%d",&n);
 
printf("Enter elements in array:\n");
 for(i=0;i<n;i++){
 	printf("Enter a[%d]:",i);
    scanf("%d",&a[i]);
 }

   sum=message(a,n);
   printf("sum of array is :%d",sum);
}

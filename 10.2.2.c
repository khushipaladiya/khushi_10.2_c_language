#include<stdio.h>

int message(char str[]) {
	int a = 0;
   while (str[a] != '\0')
      a++;
   return (a);
}
int main(){
   char str[100];
   int length;
 
printf("\nEnter the String : ");
gets(str);
 
   length=message(str);
 
printf("\nLength of the String is : %d",length);
   return(0);
}

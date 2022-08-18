#include<stdio.h>
#include <math.h>
int main(){
   int x,y,hcf,i ; 
   printf("Enter First Numberz: ");
   scanf("%d",&x);
   printf("Enter Second Numberz: ");
   scanf("%d",&y);
  for(i = 1;i <= x || i <= y;i++){
    if(x%i == 0 && y%i == 0){
    hcf = i; 
    }
  } 

 printf("Highest common factor : %d",i );

 return 0;
}
#include <stdio.h>
int main()
{
    int i;
    printf("Enter number :");
    scanf("%d",&i);
    printf("The Factor of %d is  :",i);
    for (int x = 2; i>1; x++){
        while (i%x==0){
            if(x==i){
                printf(" %d",x);
                i=i/x;
            }
            else{
                printf(" %d x",x);
                i=i/x;
            }
        }
    }
    return 0;
}
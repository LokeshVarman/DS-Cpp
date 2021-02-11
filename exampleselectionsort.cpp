#include <stdio.h>

 

int main()
{
    int a[10]={1,2,6,3,4,90,8,9,77,54};
    int max=0,min=0;
    for(int i=0;i<10;i++){
        if(max<a[i]){
            max=a[i];
        }
        else if(min>a[i]){
            min=a[i];
        }
    }
    printf("max=%d\nmin=%d",max,min);
   return 0;
}
 
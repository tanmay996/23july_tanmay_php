#include<stdio.h>
void data()
{
    int i;
    int a[5] = {1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
      printf("Maximum value from given array is %d",a[0]);
    
}
void main()
{
    data();
}
  
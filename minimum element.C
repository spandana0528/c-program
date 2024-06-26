#include<stdio.h>
void main(){
int a[52],min,i,n;
scanf("%d",&n);
min=a[0];
for(i=1;i<n;i++)
{
    if(min>a[i])
    {
        min=a[i];
    }

}
printf("%d",min);
}

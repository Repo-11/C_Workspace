#include<stdio.h>

int main(){
    int a[50],i,n,max,min;
    printf("\nEnter the Number of Array Elements : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the a[%d] Element : ",i);
        scanf("%d",&a[i]);
    }
    max=min=a[1];
    for(i=2;i<=n;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("\nThe maximum element of the array is = %d",max);
    printf("\nThe minimum element of the array is = %d",min);
    return 0;
}
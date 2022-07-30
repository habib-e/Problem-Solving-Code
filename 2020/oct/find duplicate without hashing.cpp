
#include<stdio.h>

int finddup(int arr[],int n)
{
    int xor = 0;
    for(int i=0; i<n; i++)
    {
        xor ^=arr[i];
        printf("1 xor : %d",xor);
    }
}
for(int i=1; i<=n-1; i++)
{
    xor ^=i;
    printf("2 xor : %d",xor);
}
return xor;
}
int main()
{
    int arr[]= {1,2,3,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Duplicate element is %d",finddup(arr,n));
    return 0;

}

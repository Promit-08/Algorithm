#include<stdio.h>
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int position = linear_search(arr,size);
}

int linear_search(int arr[],int size)
{
    int data = 9;
    int tracker = 0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            printf("Value exist at %d th position",arr[i+1]);
            tracker = 1;
            break;
        }
    }
    if(tracker==0)
    {
        printf("Value doesn't found!");
    }
}

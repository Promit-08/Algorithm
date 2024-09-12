#include<stdio.h>
int Bubble_sort(int arr[],int n)
{
    for(int ph=0;ph<n-1;ph++)
    {
        int flag = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
                flag = 1;
            }
        }
        if(flag==0)
        break;
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

int binary_search(int arr[],int target,int n)
{
    int lower = 0;
    int upper = n-1;

    while(lower<=upper)
    {
        int mid = (lower + upper) / 2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target<arr[mid])
        {
            upper=mid-1;
        }
        else
        {
            lower=mid+1;
        }
    }
    return -1;
}

int main()
{
    int array[100],n;
    printf("Enter array size = ");
    scanf("%d",&n);
    printf("Enter an array = ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    Bubble_sort(array,n);
    print(array,n);

    int target;
    printf("\nEnter a target = ");
    scanf("%d",&target);
    int a = binary_search(array,target,n);
    if(a == -1)
    {
        printf("No value found\n");
    }
    else
    {
       printf("Targeted number found at index %d\n",a);
    }
}

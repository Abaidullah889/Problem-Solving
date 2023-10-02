#include<stdio.h>
#include<stdlib.h>

int Median(int*,int);

int main()
{   
    int size=0;
    

    scanf("%d",&size);

    int * arr =(int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int median =Median(arr,size);
    printf("\n %d",median);

    return 0;
}

int Median(int* arr,int size)
{   
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<(size-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }


    if(size%2==0)
    {
        int mid1=arr[size/2+1];
        int mid2=arr[size/2];
        return (mid1=mid2)/2;
    }
    else
    {
        return arr[size/2];
    }

}
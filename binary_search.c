#include<stdio.h>
int main()
{
    int i,start,mid,end,key;
    int binary_search[5] = {34,56,78,83,89,97};

    start = 0;
    end = 5;
    //key = 78;
    printf("Input the searching number\n");
    scanf("%d",&key);

    do{
        mid = (int) ((start + end) / 2);
        if(binary_search[mid] == key){
            printf("%d find a %d",key,mid+1);
            break;
        }
        else if(binary_search[mid] > key){

            end = mid - 1;

        }
        else{

            start = mid + 1;

        }
    }
    while(start <= end);

    if(start > end)
        printf("Failed");
   return 0;
}

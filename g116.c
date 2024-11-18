/*Write a program to get N integer inputs in an array. 



Select an element from the array and count the following:

The number of elements that are greater than the selected element
The number of elements that are lesser than the selected element
The number of elements that are exactly divisible by the selected element 
Input format :
The first line of input consists of an integer N, representing the size of the array.

The second line consists of N elements of the array, separated by space.

The third line consists of an integer S, representing the selected element from the array.

Output format :
The first line of output prints "Greater : " followed by the number of elements greater than the selected element.

The second line prints "Lesser : " followed by the number of elements less than the selected element.

The third line prints "Exactly divisible : " followed by the number of elements that are exactly divisible by the selected element.*/

#include<stdio.h>
int main()
{
    int i,less=0,greater=0,input,count=0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&input);
    for(i=0;i<n;i++)
    {
        if(input<arr[i])
        greater++;
    }
    for(i=0;i<n;i++)
    {
        if(input>arr[i])
        less++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%input == 0)
        count++;
    }
    printf("Greater : %d\n", greater);
    printf("Lesser : %d\n", less);
    printf("Exactly divisible : %d",count);
    return 0;
}

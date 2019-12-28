//program to insert an element in an array
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[30],element,num,i,location;
    printf("Enter number of element: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be inserted: ");
    scanf("%d",&element);
    printf("\nEnter the location");
    scanf("%d",&location);
    //create space at the specified location
    for(i=num;i>=location;i--)
    {
        arr[i]=arr[i-1];
    }
    num++;
    arr[location-1]=element;
    //print out the result of insertion
    for(i=0;i<=num;i++)
        printf("\n %d",arr[i]);
    getch();
}

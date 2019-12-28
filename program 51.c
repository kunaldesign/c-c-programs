//program to delete an element from the specified location from array
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[50],num,i,loc;
    printf("\nEnter number of elements: ");
    scanf("%d",&num);
    //read elements in an array
    printf("\nEnter %d elements: ",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",arr[i]);
    }
    //read the location
    printf("\n location of the element to be deleted: ");
    scanf("%d",&loc);
    /* loop for the deletion */
    while(loc<num)
    {
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;  // No of elements reduced by 1
    //print array
    for (i=0;i<num;i++)
        printf("\n %d",arr[i]);
    getch();
}

//program to read marks and print percentage and division
#include<stdio.h>
#include<conio.h>
void main()
{
    int math,chem,phy,eng,com,tot;
    float per;
    printf("enter the subject marks: \n");
    printf("maths= ");
    scanf("%d",&math);
    printf("chemistry= ");
    scanf("%d",&chem);
    printf("physics= ");
    scanf("%d",&phy);
    printf("english= ");
    scanf("%d",&eng);
    printf("computer= ");
    scanf("%d",&com);
    // calculating total
    tot=math+chem+phy+eng+com;
    //calculating percentage
    per=(float)tot*100/500;
    printf("total marks: %d \n",tot);
    printf("percentage is: %.2f \n",per);
    //checking division and printing
    if(per>=60)
    {
        printf("first division");
    }
    else if(per>=40)
    {
        printf("second division");
    }
    else
    {
        printf("fail \n");
    }
    getch();
}

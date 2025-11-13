#include <stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("Enter num1:");
    scanf("%f",&num1);
    printf("Enter num2:");
    scanf("%f",&num2);
    //Entering the Menu
    printf("1.Additionk\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Divison\n");
    printf("Enter the Choice:");
    scanf("%d",&choice);

    //Switch case
    switch (choice)
    {
    case 1: result=num1+num2;
        printf("Addition=%f\n",result);
        break;
    case 2: result=num1-num2;
        printf("Subtraction=%f\n",result);
        break;
    case 3: result=num1*num2;
        printf("Multiplication=%f\n",result);
        break;
    case 4:
        if (num2!=0)
            {result=num1/num2;
            printf("Divison=%f\n",result);}
        else
            printf("number cannot be divisible by 0");
        break;
    default:
        printf("Chose a number between 1 and 4");
        break;
    }
    return 0;
}
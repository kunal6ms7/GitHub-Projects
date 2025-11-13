#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,perimeter,area,s;
    printf("Enter the sides of triangle:\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);

    //condition for triangle
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("It forms a true triangle\n");

        //To check the type of triangle
        if (a==b && b==c && a==c)
        {
            printf("It is an Equilateral Triangle\n");
        }
        else if (a==b || b==c || a==c)
        {
            printf("It is an isosceles Triangle\n");
        }
        else
        {   
            printf("It is a scalan Triangle\n");
        }
        if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
            {
                printf("It is also a Right angle Triangle\n");
            }
        perimeter=a+b+c;
        s=perimeter/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Perimeter=%.2f units\n",perimeter);
        printf("Area = %.2f unit sq\n",area);
    }
    else
    {
        printf("It dosent forms a True Triangle\n");
    }
    
    return 0;
    
}

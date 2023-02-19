#include<stdio.h>

int main()
{
    int hours;
    float gross_pay;
    float tax;
    float net_pay;
    tax = 0;
    gross_pay = 0;
    //double gross pay;
    //double taxes;
    //double net pay;
    printf("Hours worked per week:");
    scanf("%d", &hours);

    if (hours > 40)
        {
            gross_pay = (hours-40)*18;
        }
        else
        {
            gross_pay = hours*12;
        }
    printf("Gross_pay is $%f\n", gross_pay);
    if (gross_pay <= 300)
    {
        tax += (gross_pay * 0.15);
    }
    if(gross_pay > 300 && gross_pay<=450 )
    {
        tax += (gross_pay - 300) * 0.20;
    }
    if(gross_pay > 450)
    {
        tax += (gross_pay - 450) * 0.25;
    }
    printf("Total tax is %f\n", tax);
    net_pay = gross_pay - tax;
    printf("Net pay is $%f",net_pay);

    /*Basic pay rate = $12/hr
    Overtime (in excess of 40 hours) = time and a half
    Tax rate:
        15% of the first $300
        20% of the next $150
        25% of the rest*/
    return 0;
}

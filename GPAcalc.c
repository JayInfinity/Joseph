#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Moni Yahwehson's code


//sub function to calculate for the actual point of each course

int point(int a, int b)
{
    int c, fail=0;

    scanf("%d%d", &a,&b);

    if(a==5)
    {
    c=a*b;
    }
    else if(a==4)
    {
    c=a*b;
    }
    else if(a==3)
    {
    c=a*b;
    }
    else if(a==2)
    {
    c=a*b;
    }
    else
    {
    c=fail;
    }

    return c;
}

int main()
{

    int grade, credit, CPE362, CPE372, CPE382, CPE322, CPE312, CPE314, CPE344, CPE324, CPE301;
    int total_point, total_credit=20;
    float GPA;

    /* NOTE: Grades: (A=5, B=4, C=3, D=2, F=0) */

    printf("Simple GPA calculator for 300L second semester grades\n\n");

    printf("Total number of courses this semester = 9\n");
    printf("Total credit load this semester = 20\n\n");

    printf("Enter grade and credit for CPE362: ");
    CPE362=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE372: ");
    CPE372=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE382: ");
    CPE382=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE322: ");
    CPE322=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE312: ");
    CPE312=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE314: ");
    CPE314=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE344: ");
    CPE344=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE324: ");
    CPE324=point(&grade, &credit);

    printf("\nEnter grade and credit for CPE301: ");
    CPE324=point(&grade, &credit);

    total_point=CPE312+CPE314+CPE322+CPE344+CPE362+CPE372+CPE382+CPE324+CPE301;

    // To calculate for GPA, your total point is divided by the total credit load for the semester

    GPA=total_point/total_credit;

    printf("\n\n\nYour GPA for the semester is: %f", GPA);

    return 0;

}


#include<stdio.h>
#include<math.h>
void main()
{
    float w,h,bmi;
    printf(" enter your weight and height : \n");
    scanf("%f %f",&w,&h);
    bmi=w/pow(h,2);
    if(bmi<15)
        printf("starvation");
    else if (bmi>=15.1 && bmi <=17.5)
        printf("anorexic");
    else if (bmi>=17.6 && bmi <=18.5)
        printf("underweight");
    else if (bmi>=18.6 && bmi <=24.9)
        printf("ideal");
    else if (bmi>=25.0 && bmi <=25.9)
        printf("overweight");
    else if (bmi>=30 && bmi <=30.9)
        printf("obese");
    else
        printf("morbidily obese");
    
    
}
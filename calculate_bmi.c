#include <stdio.h>

int main() {
   float a,b,c;
   printf("enter weight in kg a:\n");
   scanf("%f", &a);
   printf("enter height in mts b:\n");
   scanf("%f", &b);
   c=a/(b*b);
   {if (c<15){
   printf("starvation");
   }
   else if (c>15.1 && c<17.5){
       printf("anorexic");
   }
    else if (c>17.6 && c<18.5){
       printf("underweight");
   }
    else if (c>18.6 && c<24.9){
       printf("ideal");
   }
    else if (c>25 && c<29.9){
       printf("overweight");
   }
    else if (c>30 && c<30.9){
       printf("obese");
   }
    else{
       printf("morbidity obese");
    }
   
    return 0;
}}
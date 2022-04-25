//This Program is strictly made with basic datatypes and basic operators.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int currency,val1;
    float convert;
    char curr;
    printf("\t\t****Currency Converter****");
    printf("\nSelect From Below to be converted from * INR *");
    printf("\n\n1.Dollar \t2.Euro. \t3.Japanese Yen \t4.Pound \t5.Australlian Dollar");
    printf("\n6.Canadian Dollar \t7.Swiss franc \t8.Rem \t9.Hong Kong Dollar \t10.S.Korean Won");
    printf("\n\nPlease Enter a corresponding Input number for conversion: ");
    scanf("%d",&val1);

    printf("\nEnter a amount to be Converted: ");
    scanf("%d",&currency);
    if(val1==1){printf("\nINR to Dollar");convert=currency*0.013;curr='$';}
    else if(val1==2){printf("\nINR to Euro");convert=currency*0.012;curr='E';}
    else if(val1==3){printf("\nINR to JP. Yen");convert=currency*1.67;curr='Y';}
    else if(val1==4){printf("\nINR to Pound");convert=currency*0.010;curr='P';}
    else if(val1==5){printf("\nINR to AU Dollar");convert=currency*0.018;curr='$';}
    else if(val1==6){printf("\nINR to Canadian Dollar");convert=currency*0.017;curr='$';}
    else if(val1==7){printf("\nINR to Swiss Franc");convert=currency*0.012;curr='$';}
    else if(val1==8){printf("\nINR to Rem");convert=currency*0.034;curr='R';}
    else if(val1==9){printf("\nINR to Hong Kong Dollar");convert=currency*0.1;curr='$';}
    else if(val1==10){printf("\nINR to won");convert=currency*16.33;curr='W';}
    else printf("Please Choose a appropriate number from the above list!")
    ;
    printf("\n%0.3f %c\n",convert,curr);
    return 0;
}

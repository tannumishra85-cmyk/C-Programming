#include<stdio.h>

int main(){
    float d1 = 0 ;
    printf("Enter distance between two cities(in km) : ");
    scanf("%f" , &d1);
    float meter = (d1*1000);
    float c_meter = (meter*100);
    float inches = (meter*39.37);
    float foot = (meter*3.28);
    printf("\n%.2f meters in %.2f km.", meter,d1);
    printf("\n%.2f centi-meters in %.2f km.", c_meter,d1);
    printf("\n%.2f inches in %.2f km.", inches,d1);
    printf("\n%.2f foots in %.2f km.", foot, d1);
    
    return 0;
}
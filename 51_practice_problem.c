#include<stdio.h>

int main(){
    int m = 52, total_litracy = 48 , litrate_m = 35;

    int population = 80000;
    int total_illatrate = 80000 - ((80000*48)/100);
    int total_men = ((80000*52)/100);
    int total_litrate_men = ((80000*35)/100);
    int total_illatrate_men = total_men - total_litrate_men;
    int total_women = population - total_men;
    int total_illitrate_women = total_illatrate - total_illatrate_men;
    
    printf("Total number of illiterate men - %d and women - %d",total_illatrate_men,total_illitrate_women);


    return 0;
}
#include<stdio.h>

void main(){

    float rupees,dollars,pounds;
    printf("Enter the dollars ");
    scanf("%f",&dollars);
    rupees=dollars*48;
    pounds=rupees/70;
    
    printf("pounds is:%f",pounds);

}

#include<stdio.h>
void main(){
    float bytes,kilobytes,megabytes,gigabytes;
    printf("Enter the bytes\n");
    scanf("%f",&bytes);

    kilobytes=bytes/1024;

    megabytes=kilobytes/1024;

    gigabytes=megabytes/1024;

    printf("Kilobytes: %f\n", kilobytes);
    printf("Megabytes: %f\n", megabytes);
    printf("Gigabytes: %f\n", gigabytes);
}
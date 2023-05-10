#include<stdio.h>
//#define PI 3.141592265
int main (){
    int radius=5;
    double PI=3.14;
    double cir =2*radius*PI;
    PI=3.145;
    printf("r:%d,circumference:%lf", radius,cir);
    return 0;
}   
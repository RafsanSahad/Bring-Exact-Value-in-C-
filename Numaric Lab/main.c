#include <stdio.h>
#include<math.h>
double function(double x){
    return x * x -4;
}
double bisection(double a,double b, double tolarance){
    double c;
    int i=0;
    while((b-a) >= tolarance){
        printf("Line %d \n",i);
        i++;
        c=(a+b)/2;
        if(function(c) == 0){
            printf("Exact Value \n");
            return c;}
        
        if (function(c)*function(a)  < 0) {
            b=c;
        }
        else{
            a=c;
        }
        
    }
    
    printf("Its not exact");
    return (a+b)/2 ;}
int main(void) {

    double a,b, tolaerance,root;
    a=1;
    b=5;
    tolaerance=0.00;
    root= bisection(a, b, tolaerance);
    printf("Approximate root %lf",root);
    return 0;
}

#include<stdio.h>
#include<math.h>

struct points{
    double x;
    double y;
};

int main(){
    struct points p1, p2;
    double dist;
    printf("Enter x1 coordinate : ");
    scanf("%lf",&p1.x);
    printf("Enter y1 coordinate : ");
    scanf("%lf",&p1.y);
    printf("Enter x2 coordinate : ");
    scanf("%lf",&p2.x);
    printf("Enter y2 coordinate : ");
    scanf("%lf",&p2.y);
    dist = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("Distance = %.3lf", dist);
    return 0;
}
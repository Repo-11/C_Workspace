#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void discLessThanZero(float b, float a, float disc)
{
    float realp, imagp;
    printf("Imaginary Roots\n");
    imagp = sqrt(abs(disc)) / (2.0 * a);
    realp = -b / (2.0 * a);
    printf("Root1 = %f +i%f\n", realp, imagp);
    printf("Root2 = %f -i%f\n", realp, imagp);
}

void discEqualToZero(float b, float a)
{
    float root1, root2;
    printf("Root are real and equal\n");
    root1 = -b / (2.0 * a);
    root2 = root1;
    printf("Root1 = %f\n", root1);
    printf("Root2 = %f\n", root2);
}

void discMoreThanZero(float b, float a, float disc)
{
    float root1, root2;
    printf("Roots are real and distinct\n");
    root1 = (-b + sqrt(disc)) / (2.0 * a);
    root2 = (-b - sqrt(disc)) / (2.0 * a);
    printf("Root1 = %f\n", root1);
    printf("Root2 = %f\n", root2);
}

void findRoots(float b, float a, float c)
{
    float disc;
    disc = b * b - 4.0 * a * c;
    if (disc < 0)
        discLessThanZero(b, a, disc);
    else if (disc == 0)
        discEqualToZero(b, a);
    else if (disc > 0)
        discMoreThanZero(b, a, disc);
}

int main()
{
    float a, b, c, root1, root2;
    printf("Enter the values of a, b and c :\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0 || b == 0 || c == 0)
    {
        printf("Error : Roots cannot be determined\n");
        exit(1);
    }
    else
        findRoots(b, a, c);
    return 0;
}
#include<stdio.h>
#include<math.h>

struct complex{
    double real;
    double img;
};

void addComplex(struct complex str1, struct complex str2){
    printf("Addition of complex numbers is : %.3lf i%.3lf", str1.real+str2.real, str1.img+str2.img);
}

void prodComplex(struct complex str1, struct complex str2){
    struct complex str3;
    str3.real = str1.real*str2.real - str1.img*str2.img;
    str3.img = str1.real*str2.img + str1.img*str2.real;
    printf("\nProduct of complex numbers is : %.3lf i%.3lf", str3.real, str3.img);
}

void divComplex(struct complex str1, struct complex str2){
    struct complex str3;
    str3.real = (str1.real*str2.real + str1.img*str2.img)/(pow(str2.real,2) + pow(str2.img,2));
    str3.img = (str1.img*str2.real - str1.real*str2.img)/(pow(str2.real,2) + pow(str2.img,2));
    printf("\nDivision of complex numbers is : %.3lf i%.3lf", str3.real, str3.img);
}

int main(){
    struct complex str1, str2;
    printf("Enter the real part for 1st complex: ");
    scanf("%lf", &str1.real);
    printf("Enter imaginary part 1st complex: ");
    scanf("%lf", &str1.img);
    printf("Enter the real part 2nd complex: ");
    scanf("%lf", &str2.real);
    printf("Enter imaginary part 2nd complex: ");
    scanf("%lf", &str2.img);
    addComplex(str1,str2);
    prodComplex(str1,str2);
    divComplex(str1,str2);
    return 0;

}

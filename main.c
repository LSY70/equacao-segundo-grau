#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a, b, c;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    printf("Valor de C: ");
    scanf("%d", &c);

    double delta = pow(b, 2) + ((-4*a)*c);
    double x1 = (-(b) + sqrt(delta))/(2*a);
    double x2 = (-(b) - sqrt(delta))/(2*a);

    // b² - 4ac
    printf("\ncalculando Delta...\n");
    sleep(1);
    printf("b^2 -4ac\n");
    printf("%d^2 -4*%d*%d\n", b, a, c);
    usleep(500*1000);
    printf("%.2f %d*%d\n", pow(b, 2), (-4*a), c);
    usleep(500*1000);
    printf("%.2f %d\n", pow(b, 2), (-4*a)*c);
    printf("%.2f\n", pow(b, 2) + (-4*a)*c);
    printf("Delta = %.2f\n\n", delta);

    if (delta >= 0){
        usleep(500*1000);
        printf("(-b +- raiz(Delta))/2a\n");
        printf("(-(%d) +- raiz(%.2f))/2*%d\n\n", b, delta, a);
        printf("(%d + %.2f)/%d\n", -(b), sqrt(delta), 2*a);
        printf("\t(%.2f)/%d\n", -(b) + sqrt(delta), 2*a);
        printf("\t%.2f\n\n", (-(b) + sqrt(delta))/(2*a));
        printf("(%d - %.2f)/%d\n", -(b), sqrt(delta), 2*a);
        printf("\t(%.2f)/%d\n", -(b) - sqrt(delta), 2*a);
        printf("\t%.2f\n\n", (-(b) - sqrt(delta))/(2*a));
        printf("x1: %.2f\nx2: %.2f", x1, x2);
    }
    else{
        printf("Delta nao possui raiz.");
    }

}

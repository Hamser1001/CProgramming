#include <stdio.h>

int main() {
    char op;
    double n1;
    double n2;
    scanf("%lf%c%lf", &n1, &op, &n2);

    double res;
    if (op == '+'){
       res = n1 + n2;
    }
    else if (op == '-') {
       res = n1 - n2;
    }
    else if (op == '*') {   
        res = n1 * n2;
    }
    else if (op == '/') {
        res = n1 / n2;
    }

    printf("%.2f\n", res);
    return 0;
};
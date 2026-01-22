#include <stdio.h>

void absValue() {
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);
    if (x < 0) x = -x;
    printf("Absolute Value = %d\n", x);
}

void gradeCheck() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 91)
        printf("A Grade\n");
    else if (marks > 70)
        printf("B Grade\n");
    else if (marks > 50)
        printf("C Grade\n");
    else
        printf("D Grade\n");
}

void checkProfitLoss() {
    int cost, sell;
    printf("Enter Cost Price: ");
    scanf("%d", &cost);
    printf("Enter Selling Price: ");
    scanf("%d", &sell);

    if (sell > cost)
        printf("Profit\n");
    else if (sell < cost)
        printf("Loss\n");
    else
        printf("No Loss, No Profit\n");
}

void youngest() {
    int r, s, a;
    printf("Enter Ram's age: ");
    scanf("%d", &r);
    printf("Enter Sham's age: ");
    scanf("%d", &s);
    printf("Enter Ajay's age: ");
    scanf("%d", &a);

    if (r < s && r < a)
        printf("Ram is youngest\n");
    else if (s < r && s < a)
        printf("Sham is youngest\n");
    else
        printf("Ajay is youngest\n");
}

void greatest() {
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);

    if (x > y && x > z)
        printf("%d is greatest\n", x);
    else if (y > x && y > z)
        printf("%d is greatest\n", y);
    else
        printf("%d is greatest\n", z);
}

void printNumbers() {
    for (int i = 1; i <= 100; i++) printf("%d ", i);
    printf("\n");
}

void digitsCount() {
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    int k = n;
    while (k != 0) {
        k /= 10;
        c++;
    }
    printf("Number of digits = %d\n", c);
}

void factorialCalc() {
    int n, f = 1;
    printf("Enter number for factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) f *= i;

    printf("Factorial = %d\n", f);
}

void fibo() {
    int n;
    printf("Enter n for Fibonacci: ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        printf("Fibonacci %d : 1\n", n);
        return;
    }

    int a = 1, b = 1, nxt;
    for (int i = 3; i <= n; i++) {
        nxt = a + b;
        a = b;
        b = nxt;
    }
    printf("Fibonacci %d : %d\n", n, b);
}

void reverseNum() {
    int n, r = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    int t = n;
    while (t > 0) {
        r = r * 10 + (t % 10);
        t /= 10;
    }
    printf("Reversed Number = %d\n", r);
}

void patternAlpha() {
    char ch = 'a';
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}

void patternNumInc() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("%d ", j);
        printf("\n");
    }
}

void patternRev() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) printf("%d", j);
        printf("\n");
    }
}

void patternOdd() {
    int n = 4, v = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", v);
            v += 2;
        }
        printf("\n");
    }
}

void stars() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

int main() {
    int ch, again = 1;

    while (again == 1) {

        printf("1. Absolute Value\n");
        printf("2. Check Grade\n");
        printf("3. Profit / Loss\n");
        printf("4. Youngest Age\n");
        printf("5. Greatest Number\n");
        printf("6. Print 1 to 100\n");
        printf("7. Count Digits\n");
        printf("8. Factorial\n");
        printf("9. Fibonacci\n");
        printf("10. Reverse Number\n");
        printf("11. Pattern Alphabet\n");
        printf("12. Pattern Number Triangle\n");
        printf("13. Pattern Reverse Triangle\n");
        printf("14. Pattern Odd Numbers\n");
        printf("15. Pattern Stars\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: absValue(); break;
            case 2: gradeCheck(); break;
            case 3: checkProfitLoss(); break;
            case 4: youngest(); break;
            case 5: greatest(); break;
            case 6: printNumbers(); break;
            case 7: digitsCount(); break;
            case 8: factorialCalc(); break;
            case 9: fibo(); break;
            case 10: reverseNum(); break;
            case 11: patternAlpha(); break;
            case 12: patternNumInc(); break;
            case 13: patternRev(); break;
            case 14: patternOdd(); break;
            case 15: stars(); break;
            default: printf("Invalid Option!\n");
        }

        printf("\nDo you want to continue? Press 1: ");
        scanf("%d", &again);
    }

    return 0;
}

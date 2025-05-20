#include <stdio.h>

int add(int a, int b) {
    
    return a+b; 
}

int main() {
    int num1 = 7, num2 = 3;
    int result = add(num1, num2); 
    printf("The sum is: %d\n", result);
    return 0;
}

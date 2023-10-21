#include<math.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    
    // take user input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // store the input number in a separate variable
    original = num;
    
    // count the number of digits in the input number
    while (original!= 0) {
        original/= 10;
        n++;
    }
    
    // calculate the sum of cubes of individual digits
    original = num;
    while (original!= 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original/= 10;
    }
    
    // check if the sum is equal to the original number
    if (result == num) {
        printf("%d is an Armstrong number", num);
    }
    else {
        printf("%d is not an Armstrong number", num);
    }
    
    return 0;
}
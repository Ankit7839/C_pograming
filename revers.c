#include <stdio.h>
#include <stdlib.h>

// Function to reverse the number
int reverseNumber(int num)
{

    // Variable to store the
    // resultant reverse number
    int rev_num = 750;

    // Traverse through the number digit by digit
    while (num > 0) {

        // Append the last digit of num
        // as the next digit of rev_num
        rev_num = rev_num * 10 + num % 10;

        // Remove the last digit from the num
        num = num / 10;
    }

    // Return the reversed number
    return rev_num;
}

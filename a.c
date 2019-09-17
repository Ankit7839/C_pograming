#include<stdio.h>
void main()
{
    int reverse(int n)
{
    int rev = 0;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

// Function to find the sum of the odd
// and even positioned digits in a number
void getSum(int n)
{
    n = reverse(n);
    int sumOdd = 0, sumEven = 0, c = 1;

    while (n != 0) {

        // If c is even number then it means
        // digit extracted is at even place
        if (c % 2 == 0)
            sumEven += n % 10;
        else
            sumOdd += n % 10;
        n /= 10;
        c++;
    }

    cout << "Sum odd = " << sumOdd << "\n";
    cout << "Sum even = " << sumEven;
}

// Driver code
int main()
{
    int n = 457892;
    getSum(n);

    return 0;
}

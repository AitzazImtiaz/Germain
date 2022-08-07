#include "pch.h" 
#include <utility>
#include "germain.h"

int b = 2;

bool prime_check(int n)
{
    bool flag = true;
    if (n == 2) // checks if 2 is entered(as 2 is a prime number )
    {
        //    std::cout<<" The number is PRIME !!! ";
        return true; // terminates the program is two is enterd, as there is no need for further checking
    }

    else // divides the number with value from 2 to (number-1)
    {
        for (int i = 2; i < n; i++)
        {
            // if it is divisible than values smaller than number-1 it is non - prime
            if (n % i == 0)
                flag = false;
        }
    }
    return flag; // returns either true or false as the result

}

int germain_main(
    int max, int i
) {
    i = 2;
    // prompts the user to enter the max numbers to generate
    int counter = 1;

    while (counter <= max) // run until the limit is reached
    {
        if (prime_check(i) == true) // initial check to see if p is prime
        {
            if (prime_check((2 * i) + 1) == true) // secondary check to see if 2p+1 is prime
            {
                return i;
                counter++;
            }
        }
        i++;
    } // end of while
}
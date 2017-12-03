#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long n, i, flag, count, j, save;
    long b [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    while (scanf ("%ld", &n))
    {

        if (n == 0)
            return 0;

        save = n;

        long a [25] = {0};

        while (n != 1)
        {
            i = n;
            j = 0;

            while (i > 1)
            {
                count = 0;
                while (i % b [j] == 0)
                {
                    i /= b [j];
                    count++;
                }
                a [j] += count;
                j++;
            }

            n--;
        }

        // output

        for (i = 24; i >= 0; i--)
        {
            if (a [i] != 0)
                break;
        }
        j = i;

        printf("%3ld! =", save);
        if (j >= 15)
            flag = 0;
        else
            flag = 15;
        for (i = 0; i <= j; i++)
        {
            printf("%3ld", a [i]);
            flag++;
            if (flag == 15)
                printf("\n%6c",' ');
        }
        printf("\n");
    }
    return 0;
}

/* N! for N = 100 will not fit into any integral type,
you must determine divisibility in another manner.
And also be cautious that you are not printing a newline when factors size in 15.
Calculate the factorial of given number n
and then find the prime factor of factorial n (n!)

for example:
5 ! = 120 = 2 * 2 * 2 * 3 * 5
6 ! = 720 = 2 * 2 * 2 * 2 * 3 * 3 * 5

this destructive process should not be implemented ..
rather, we can find a far better way to do that, lets see
5 ! = 120 = 5 * 4 * 3 * 2

write a procedure that can count prime factors of a given number

prime_factor (5) + prime_factor (4) + prime_factor (3) + prime_factor (2) =
prime_factor (5!) = prime_factor (120)

similarly, 6 ! = 720 = 6 * 5 * 4 * 3 * 2

prime_factor (6) + prime_factor (5) + prime_factor (4) + prime_factor (3) + prime_factor (2)
 = prime_factor (6!) = prime_factor (720)

prime_factor of (N)
continue while (N > 1) {
continue while (N % prime = 0)
N /= prime;
prime = Next_prime ();
}

// u need to calculate just these prime factors,
2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,
59,61,67,71,73,79,83,89,97

// u must not print such prime factors position which frequency is zero

output format:

1. Number N have to be printed right justified of width 3
2. Each of occurrence will be printed again, right justified of field width 3
3. if there r more than 15 occurrence in one line then
 u have to print a newline and start to print next occurrence with a field width 6
*/

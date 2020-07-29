//Sieve of Eratosthenes

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define SIZE 100000000
int primeNumbers [ SIZE];    // 0 to SIZE - 1
int prime_ind, primeCtr;
int main()
{
    int startVal, until, primegen, primeCtr=0;
    primeNumbers [ 0 ] = 1;
    primeNumbers [ 1 ] = 1;
    until = sqrt(SIZE);
    for(primegen = 2; primegen <= until; primegen++) // 2 3 4 5 6 7 8 9 [ 2 3 5 7]
    {
        if(primeNumbers [ primegen ] == 1) continue; // identifying composite numbers
        for(startVal = primegen * primegen; startVal < SIZE; startVal+= primegen)
        {
              if(primeNumbers [ startVal ] == 1) continue;
                            primeNumbers[ startVal] = 1;
        }


    }
    //loop for finding unmarked numbers
     for(prime_ind = 0; prime_ind < SIZE; prime_ind++)
                if( primeNumbers [ prime_ind ] == 0) primeCtr++;
    printf("%d",primeCtr);
    return 0;

}


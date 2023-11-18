// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?

#define NUM 600851475143

int largest_prime_factor() 
{
    long number = NUM;
    int result = 1;
    int divisor = 2;

    while (number > 1)
    {
        if (number % divisor == 0)
        {
            result = divisor;
            number /= divisor;
        }
        else
            divisor += 1;
        
    }

    return result;
}
#include <iostream>

/**
* @brief Prints odd or even numbers from 0 to N.
* @param [in] N - integer number till which the printing is proceeding
* @param [in] isOdd - use 0 (false) for even values, and true (1) for odd
**/
void printOddEven(const int N, bool isOdd)
{
    for (int i = isOdd; i < N; i += 2)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main()
{
    const int N{ 15 };
    std::cout << "All even numbers from 0 to N:\n";
        for (int i = 0; i < N; ++i)
        {
            if (!(i % 2)) std::cout << i << " ";
        }
        std::cout << "\n";

        //Shorter variant:
        for (int i = 0; i < N; i += 2)
        {
            std::cout << i << " ";
        }
        std::cout << "\n";

        //Function (odds printing)"
        std::cout << "Function test (odd):\n";
        printOddEven(N, true);
        std::cout << "Function test (even):\n";
        printOddEven(N, false);
}
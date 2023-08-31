#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
 int _sqrt_helper(int i)
      {
        if ((i * i) <= n && ((i + 1) * (i + 1)) > n) {
           if (i * i == n) {
                return i;
            }
            return -1;
        } else {
            return _sqrt_helper(i + 1);
        }
    }

    if (n == 1) {
        return 1;
    }

    return _sqrt_helper(1);

}

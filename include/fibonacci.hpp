#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

#include <pair.hpp>

// int Fibonacci(int);
/**
 * @brief Fibonacci Class
 * 
 */
class Fibonacci
{
public:
  int number;
  /**
   * @brief Constructor with the number as parameter
   * 
   * @param n 
   */
  Fibonacci(int n);
  /**
   * @brief 
   * 
   */
  ~Fibonacci();
  /**
   * @brief Calculate the nth fibonacci
   * 
   */
  unsigned long long getResult();

  /**
   * @brief Static member function to calculate the nth fibonacci without instantiating an object
   * 
   */
  static unsigned long long calcFibonacci(int n);

private:
};

#endif // FIBONACCI_HPP
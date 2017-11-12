#ifndef PAIR_HPP
#define PAIR_HPP
/**
 * @brief Pair class that represent and do the calculations on a pairwise element.
 * 
 */
class Pair
{
  public:
    unsigned long long a;
    unsigned long long b;

    /**
     * @brief Constructor
     * 
     */
    Pair() {}

    /**
     * @brief Constructor with initialization of pair number a and b.
     * 
     * @param c 
     * @param d 
     */
    Pair(unsigned long long c, unsigned long long d) : a(c), b(d) {}
    /**
     * @brief //Pair overload of operator * (Arithmetic Multiplication). 
     * (a,b)*(c,d) = (a*c+a*d+b*c, a*c+b*d)
     * 
     * @param p Pair
     * @return Pair& 
     */
    Pair &operator*(const Pair &p);
    /**
     * @brief Destructor
     * 
     */
    ~Pair();
    /**
     * @brief Calculates the square of the pairwise number.
     * 
     * @return Pair 
     */
    Pair square();

  private:
};

#endif // PAIR_HPP

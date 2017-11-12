#include <pair.hpp>
#include <iostream>

Pair &Pair::operator*(const Pair &p)
{
    Pair *t = new Pair();

    t->a = (this->a * p.a) + (this->a * p.b) + (this->b * p.a);
    t->b = (this->a * p.a) + (this->b * p.b);

    return *t;
}

Pair Pair::square()
{
    return *this * *this;
}

Pair::~Pair() {}

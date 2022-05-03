#include <iostream>

class IntFunction
{
    int m_numb;

public:
    IntFunction(int numb)
        : m_numb{ numb }{}

    operator int()
    {
        return m_numb;
    }

    IntFunction& operator()(int numb)
    {
        m_numb += numb;
        return *this;
    }

    IntFunction& operator+(int numb)
    {
        m_numb += numb;
        return *this;
    }
};

std::ostream& operator<< (std::ostream &out, IntFunction &inFunc_ptr)
{
    out << static_cast<int>(inFunc_ptr);
    return out;
}

IntFunction add(int numb)
{
    return IntFunction(numb);
}

int main()
{
    std::cout << add(1) << std::endl;

    std::cout << add(1)(2)(3)(4)(5)(6) << std::endl;

    auto addTwo = add(2);

    std::cout << addTwo << std::endl;

    std::cout << addTwo + 3 << std::endl;

    std::cout << addTwo(3)(5) << std::endl;

    return 0;
}

#include <iostream>

using namespace std;

class IntFunction
{
    int m_numb;

public:

    IntFunction(int numb): m_numb{ numb }
    {

    }

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
    cout << add(1) << endl;

    cout << add(1)(2)(3)(4)(5)(6) << endl;

    auto addTwo = add(2);

    cout << addTwo << endl;

    cout << addTwo + 3 << endl;

    cout << addTwo(3)(5) << endl;

    return 0;
}

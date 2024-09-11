

// simple example of friend function

#include <iostream>
using namespace std;


class y;
class x
{
    int n;

public:
    void setvalue(int value)
    {
        n = value;
    }
    friend void add(x, y);
};
class y
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{
    cout << "summing data x and y " << o1.n + o2.data << endl;
}

int main()
{
    x a1;
    a1.setvalue(3);
    y b1;
    b1.setvalue(21);

    add(a1, b1);

    return 0;
}
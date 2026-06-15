#include <iostream>
using namespace std;

class testing
{
private:
    int a;
    int b;

public:
    void setdata(int x)
    {
        a = x;
        cout << "Enter the integer value" << endl;
        cin >> b;
    }

    void getdata()
    {
        cout << "The value of \"a\" is " << a << endl;
        cout << "The value of \"b\" is " << b << endl;
    }
};
int main()
{
    testing obj;
    obj.setdata(5);
    obj.getdata();
    return 0;
}
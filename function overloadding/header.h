#ifndef MYCLASS_H
#define MYCLASSH

class myclass
{
private:
    int a;
    int b;
    int result;

public:
    myclass();
    void setdata();
    void getdata();
    void calculate();

     void calculate(int a);
    void calculate(int a,int b);
};

#endif

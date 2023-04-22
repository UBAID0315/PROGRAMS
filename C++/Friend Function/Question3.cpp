#include<iostream>
using namespace std;

class Operation;

class Complex
{
    private:
        int real;
        int imaginary;
    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imaginary = i;
        }
        void display();
        friend class Operation;
};

class Operation
{
    public:
            static Complex add(Complex c1, Complex c2);
            static Complex sub(Complex c1, Complex c2);
};

void Complex::display()
{
    cout<<"Your answer is: "<<real<<" + "<<imaginary<<"i"<<endl;
}

Complex Operation::add(Complex c1, Complex c2)
{
    int real = c1.real + c2.real;
    int img = c1.imaginary + c2.imaginary;
    Complex result(real,img);
    return result;
}
Complex Operation::sub(Complex c1, Complex c2)
{
    int real = c1.real - c2.real;
    int img = c1.imaginary - c2.imaginary;
    Complex result(real,img);
    return result;
}

int main()
{
    int real,img;

    cout<<"C1 Real value: ";
    cin>>real;
    cout<<"C1 Img value: ";
    cin>>img;
    Complex c1(real,img);

    cout<<endl;

    cout<<"C2 Real value: ";
    cin>>real;
    cout<<"C2 Img value: ";
    cin>>img;
    cout<<endl;
    Complex c2(real,img);

    Complex sum = Operation::add(c1,c2);
    Complex diff = Operation::sub(c1,c2);

    sum.display();
    diff.display();

    return 0;
}

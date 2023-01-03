/*  Messed around with my own class template for calculating the area of a circle. It felt really convoluted to make because I had learned that when
    using a class template you have to specify the data type when creating the object in the main method. I was thinking to myself what is the point 
    of a generic class template if you have to specify the data type anyway... at least for my little program. On this small scale a template probably
    isn't even necessary but this was for practice/getting a template to compile. Perhaps a function template would be simpler. */

#include <iostream>
#include <cmath>

using namespace std;

template <class T1>
class Circle
{
    private:
    T1 number1;

    public:
    Circle(){}
    Circle(T1 number1)
    {
        this->number1 = number1;
    }

    void calculateArea();
    void setNumber(T1 number1);
};

template <class T1>
void Circle<T1>::calculateArea()
{
    cout << "Area of the circle is " << M_PI * number1 * number1 << endl;
}

template <class T1>
void Circle<T1>::setNumber(T1 number1)
{
    this->number1 = number1;
}

int main() {

    Circle <double> c1;
    double radius;
    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;
    c1.setNumber(radius);
    c1.calculateArea();



    return 0;
}



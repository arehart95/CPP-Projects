#include <iostream>
using namespace std;

class Shape
{
    public:
    double calculateArea(int radius)
    {
        return (3.14 * radius * radius);
    }
    double calculateArea(int width, int height)
    {
        return width * height;
    }
    double calculateArea(float base, float height)
    {
        return ((base * height)/2);
    }

};

class Circle: public Shape
{
    private:
    int radius;

    public:
    void setRadius(int radius)
    {
        this->radius = radius;
    }
    int getRadius()
    {
        return radius;
    }
};

class Rectangle: public Shape
{
    private:
    int width;
    int height;

    public:
    void setWidth(int width)
    {
        this->width = width;
    }
    int getWidth()
    {
        return width;
    }

    void setHeight(int height)
    {
        this->height = height;
    }
    int getHeight()
    {
        return height;
    }

};

class Triangle: public Shape
{
    private:
    float base;
    float height;

    public:
    void setBase(float base)
    {
        this->base = base;
    }
    float getBase()
    {
        return base;
    }

    void setHeight(float height)
    {
        this->height = height;
    }
    float getHeight()
    {
        return height;
    }

};

int main()
{

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    string shape;

    cout << "Enter the type of shape (circle, triangle, or rectangle)" << endl;
    cin >> shape;

    if(shape == "Circle" || shape == "circle")
    {
        int radius;
        cout << "Enter the radius of the circle: " << endl;
        cin >> radius;
        circle.setRadius(radius);
        cout << "The area of the circle is " << circle.calculateArea(circle.getRadius()) << endl;
    }
    if(shape == "Rectangle" || shape == "rectangle")
    {
        int width, height;
        cout << "Enter the width: " << endl;
        cin >> width;
        rectangle.setWidth(width);
        cout << "Enter the height: " << endl;
        cin >> height;
        rectangle.setHeight(height);

        cout << "The area of the rectangle is " << rectangle.calculateArea(rectangle.getWidth(), rectangle.getHeight());
    }
    if(shape == "Triangle" || shape == "triangle")
    {
        float base, height;
        cout << "Enter the base: " << endl;
        cin >> base;
        triangle.setBase(base);
        cout << "Enter the height: " << endl;
        cin >> height;
        triangle.setHeight(height);

        cout << "The area of the triangle is " << triangle.calculateArea(triangle.getBase(), triangle.getHeight());
    }

    return 0;
}

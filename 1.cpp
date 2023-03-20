#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
const double PI = 3.14159;

class Circle
{
public:
Circle();
Circle(const Circle &);

void SetRadius(double);
double Area();

private:
double radius;
};

int main()
{
Circle myCircle;
double circleArea = 0.0;
double userInput = 0.0;

cout << "Enter radius of the circle: ";
cin >> userInput;

myCircle.SetRadius(userInput);
circleArea = myCircle.Area();

cout << "The area is " << circleArea << endl << endl;

return 0;
}
Circle::Circle()
{
radius = 0.0;
}

Circle::Circle(const Circle & Object)
{
radius = Object.radius;
}

void Circle::SetRadius(double IncomingRadius)
{
radius = IncomingRadius;
}

double Circle::Area()
{
return(PI * pow(radius, 2));
}
#include <iostream>
using namespace std;

class Circle
{
private:
	float radius;
public:
	Circle(float _radius);
	float area();
	float perimeter(); // Perimeter.
};
#include <iostream>
using namespace std;


class Rectangle
{
private:
	float length, width;
public:
	Rectangle(float _length, float _width);
	float area();
	float perimeter();
};
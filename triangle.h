#include <iostream>
using namespace std;

class Triangle
{
private:
	float rightSide, leftSide, base, height;
public:
	Triangle(float _right, float _left, float _base, float _height);
	float area();
	float perimeter();
};
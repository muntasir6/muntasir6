#include "Calculator.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	cout << "Would you like to perform an arithmetic operation or a geometric calculation?" << endl;
	cout << "Enter A to choose arithemtic operations and G to choose geometric calculation: ";
	char choice;
	cin >> choice;

	if (choice == 'A')
	{
		float input1, input2;
		Calculator myCalc;
		cout << "A: Addition\nS: Subtraction\nM: Multiplication\nD: Division\nF: Factorial\n";
		cin >> choice;
		if (choice == 'D')
		{
			cout << "Enter the 1st number: ";
			cin >> input1;
			cout << "Enter the 2nd number: ";
			cin >> input2;
			cout << "Solution: " << myCalc.divide(input1, input2) << endl;
		}
		// Complete the rest of the conditions for the operations present in the Calculator class ...
	}
	else
	{
		cout << "Which geometric shape would you like to choose? ";
		cout << "C: Circle\nT: Triangle\nR: Rectangle\n";
		cin >> choice;
		if (choice == 'C')
		{
			float radius;
			cout << "Enter the radius: ";
			cin >> radius;
			Circle myCircle(radius);
			cout << "A: Area\nP: Perimeter\n";
			cin >> choice;
			if (choice == 'A')
				cout << myCircle.area() << endl;
			// Complete the condition of the perimeter ...
		}
		// Complete the conditions of the other geometric shapes ...
	}
	return 0;
}
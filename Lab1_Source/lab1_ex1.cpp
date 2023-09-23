#include <iostream>
#include <math.h>

using namespace std;

class Point
{
private:
	double x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	void setX(double x)
	{
		this->x = x;
	}
	void setY(double y)
	{
		this->y = y;
	}
	double getX() const
	{
		return this->x;
	}
	double getY() const
	{
		return this->y;
	}
	double distanceToPoint(const Point& des_point)
	{

		double x1 = this->x;
		double x2 = des_point.x;
		double y1 = this->y;
		double y2 = des_point.y;
		double x = pow(x1 - x2, 2);
		double y = pow(y1 - y2, 2);
		return sqrt(x + y);
	}
};

int main()
{
	Point A(2, 3);
	cout << A.getX() << " " << A.getY() << endl;

	Point B(1, 1);
	cout << pow(A.distanceToPoint(B), 2) << endl;

	Point C;
	C.setX(3);
	C.setY(6);
	cout << C.getX() << " " << C.getY() << endl;

	Point D;
	D.setX(12);
	cout << D.getX() << " " << D.getY() << endl;

	Point E(0, 0);
	cout << pow(A.distanceToPoint(E), 2) << endl;
}
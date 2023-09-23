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

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero center's x-y and radius
         */
        center.setX(0);
        center.setY(0);
        radius = 0;
    }

    Circle(Point center, double radius)
    {
        /*
         * STUDENT ANSWER
         */
        this->center = center;
        this->radius = radius;
    }

    Circle(const Circle& circle)
    {
        /*
         * STUDENT ANSWER
         */
        this->center = circle.center;
        this->radius = circle.radius;
    }

    void setCenter(Point point)
    {
        /*
         * STUDENT ANSWER
         */
        this->center.setX(point.getX());
        this->center.setY(point.getY());
    }

    void setRadius(double radius)
    {
        /*
         * STUDENT ANSWER
         */
        this->radius = radius;
    }

    Point getCenter() const
    {
        /*
         * STUDENT ANSWER
         */
        return this->center;
    }

    double getRadius() const
    {
        /*
         * STUDENT ANSWER
         */
        return this->radius;
    }

    void printCircle()
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};


int main()
{
    Circle A;
    A.printCircle();

    Point pointO(0, 2);
    A = Circle(pointO, 20);
    A.printCircle();

    Point point1(0, 2);
    A = Circle(point1, 20);
    Circle B = A;
    B.printCircle();

    Point point2(0, 1);
    A = Circle(point2, 20);
    Circle C(A);
    C.printCircle();

}
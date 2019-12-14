#include<iostream>
using namespace std;
class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t" << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t" << this << endl;
	}
	//			Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignment:" << this << endl;
		return *this;
	}


	//			Methods:
	double distance_to_POINT(const Point& other)
	{
		return sqrt((this->x*this->x) + (this->y*this->y));

	}
	void print()
	{
		cout << this->get_x() << "\t" << this->get_y() << endl;
	}
};

double distance(const Point& A, const Point& B)
{
	return sqrt((A.get_x() - B.get_x())*(A.get_x() - B.get_x()) + (A.get_y() - B.get_y())*(A.get_y() - B.get_y()));
}

void main()
{
	setlocale(LC_ALL, "");
	Point A(5,10);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B(1,2);
	cout << B.get_x() << "\t" << B.get_y() << endl;

	cout << "Растоянние до точки А: "<<A.distance_to_POINT(A) << endl;
	cout <<"Растоянние до точки В: " <<A.distance_to_POINT(B) << endl;
	cout << "Растоянние между точкой А и точкой В: "<<distance(A, B) << endl;

}
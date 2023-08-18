#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Shape {
public:
	Shape(int cnt, int x, int y) : cnt_(cnt), x_(x), y_(y) { }
	~Shape() { }

	virtual void get_point_count(void) = 0;
	virtual void get_position(void) = 0;
	virtual void area(void) = 0;
	void draw() { }

protected:
	int cnt_;
	int x_;
	int y_;
};

class RectangleShape : public Shape {
public :
	RectangleShape(int cnt, int x, int y, int width, int height): Shape(cnt,x,y){ }
	virtual ~RectangleShape() { }

	virtual void get_point_count() {
		cout << cnt_ << endl;
	}
	virtual void get_position() {
		cout << "현재 위치 : (" << x_ << "," << y_ << ")" << endl;
	}
	virtual void area() {
		int area = width_ * height_;
		cout << "넓이 : " << area << endl;
	}


private:
	int width_;
	int height_;

};

class CircleShape : public Shape{
public :
	CircleShape(int cnt, int x, int y, int radius): Shape(cnt, x, y) { }
	~CircleShape() { }

	virtual void get_point_count() {
		cout << cnt_ << endl;
	}
	virtual void get_position() { 
		cout << "현재 위치 : (" << x_ << "," << y_ << ")" << endl; 
	}
	virtual void area() {
		float PI = 3.14;
		double area = (radius_*radius_)*PI;
		cout << "넓이 : " << area << endl;
	}

private:
	int radius_;
};

int main() {
	Shape* r_shape = new RectangleShape(3,5,4,1,1);
	r_shape->get_point_count();
	r_shape->get_position();
	r_shape->area();

	delete r_shape;

	Shape* c_shape = new CircleShape(0, 1, 1, 2);
	c_shape->get_point_count();
	c_shape->get_position();
	c_shape->area();

	delete c_shape;
	return 0;
}
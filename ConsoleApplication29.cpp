#include <iostream>
#include <vector>

class Shape {
public:
	virtual ~Shape() {}

	virtual double calculateArea() const = 0;
};

class Square : public Shape {
private:
	double side;

public:
	Square(double s) : side(s) {}

	~Square() override {}

	double calculateArea() const override {
		return side * side;
	}
};

class Circle : public Shape {
private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	~Circle() override {}

	double calculateArea() const override {
		return 3.14159 * radius * radius;
	}
};
class Triangle : public Shape {
private:
	double base;
	double height;
public:
	Triangle(double b, double h) : base(b), height(h) {}

	~Triangle() override {}

	double calculateArea() const override {
		return 0.5 * base * height;
	}
};

int main() {
	std::vector<Shape*> shapes;

	shapes.push_back(new Square(5.0));
	shapes.push_back(new Circle(2.5));
	shapes.push_back(new Triangle(4.0, 3.0));

	for (int i=0; i<shapes.size(); i++) {
		std::cout << "Area: " << shapes[i]->calculateArea() << std::endl;
	}

return 0;
}




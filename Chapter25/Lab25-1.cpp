#include <iostream>
#include <cmath>
class Base_class {
	public:		
	int length,  width;
	int base, height;
	double radius;
	
	
		void findArea() {
			std::cout << "Please declared you function findArea()" << std::endl;
		}
		void perimeter(){
		    std::cout << "Please declared you function findArea()" << std::endl;	
		}
};		

class Triangle : public Base_class {
	public:
	Triangle() {
		base = 5; height = 5;
	}
	~Triangle(){
	}
	void findArea() {	
		std::cout << "Area = " << (0.5f * base * height) << std::endl;
	}
	void perimeter(){
		double c = std::sqrt((base*base)+(height*height));
		std::cout << "Perimeter of this triangle is " << c << std::endl;
	}
};

class Circle : public Base_class {
	public:
	Circle() {
		radius = 10;
	}
	void findArea() {
		std::cout << "Area of Circle is " << (3.14 * radius * radius) << std::endl;
	}
	void perimeter() {
		std::cout << "Perimter of Circle is " << (2.0 * 3.14 * radius) << std::endl;
	}
};

int main() {
	Triangle tr;
	
	tr.findArea();
	tr.perimeter();
	
	Circle cr;
	
	cr.findArea();
	cr.perimeter();
}

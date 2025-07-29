#include <iostream>
#include <cmath>
class triangle {
	float base, height;
	
	void setTriangle(float b, float h){
		base = b;
		height = h;
	}
	
	void perimeter() {
		float c;
		c = std::sqrt((base*base)+(height*height));
		std::cout << "Perimeter of triangle = "<< (base + height + c) << std::endl;
	}
	
	void area() {

		
	}
};

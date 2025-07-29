class Triangle {
	public:
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
		float area;
		area = 0.5f * base * height;
		std::cout << "Area of triangle = " << area << std::endl;		
	}
};

class Rectangle {
	public:
		int width, length;
	
	void setRectangle(int w, int l){
		width = w;
		length = l;
	}
	void perimeter(){
		std::cout << "Perimeter of rectangle is " << (2*(width+length))<< std::endl;
	}
	void area(){
		std::cout << "Area of rectangle is " << (width*length) << std::endl;
	}
};

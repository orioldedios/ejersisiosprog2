#ifndef POINT2D_H
#define PINT2D_H

class Point2D {

private:
	int* coords;


public:
	//así o de la otra forma
	/*Point2D() {
		coords = new int[2];
	}*/
	Point2D(int x, int y) {
		coords = new int[2];
		coords[0] = x;
		coords[1] = y;
	}
	~Point2D() {
		delete[]coords;
	}

	int getX()const {
		return this->coords[0];
	}

	int getY()const {
		return this->coords[0];
	}

	void setX(int x) {
		 this->coords[0]=x;
	}

	void setY(int y) {
		 this->coords[0]=y;
	}
	
	int maxCoord() const{
		if (this->coords[0] > this->coords[1])
			return this->coords[0];
		else
			return this->coords[1];

	}

	Point2D operator+(const Point2D& p)const {
		Point2D result(this->coords[0] + p.coords[0],this->coords[1]+p.coords[1]);
		return result;
	}
};

#endif
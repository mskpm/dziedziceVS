#pragma once

#include <iostream>
#include <math.h>
#include "../dziedziceVS/point.h"

class segment : public point {

	double x1{}, y1{}, x2{}, y2{};
	point start{ x1, y1 };
	point end{ x2, y2 };

	static unsigned int counter_s;
	const unsigned int id{ ++counter_s };

public:

	//static unsigned int counter;
	segment(double, double, double, double);
	segment(const point, const point);
	segment(const double, const double);
	segment(const segment&);

	friend std::ostream& operator<<(std::ostream&, segment&);

	friend bool operator==(segment&, segment&);

	segment& operator=(segment&);

	///////////////////////////////////////////////////////////////////////////
	point& getSTART() {
		return start;
	}
	///////////////////////////////////////////////////////////////////////////
	point& getEND() {
		return end;
	}
	///////////////////////////////////////////////////////////////////////////
	virtual unsigned int get_id()
	{
		return id;
	}
	///////////////////////////////////////////////////////////////////////////
	double getY2() {
		return  this->y2;
	}

	double getX2() {
		return  this->x2;
	}

	double getY1() {
		return this->y1;
	}

	double getX1() {
		return this->x1;
	}

	double dim();

	virtual void show();

	~segment();

};
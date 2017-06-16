#include "Vector.hpp"

namespace InterSector {	namespace DataDefine {

Vector::Vector(double _x, double _y)
	: x(_x), y(_y) {}

Vector::Vector()
	: x(0.0), y(0.0) {}

std::ostream & operator << (std::ostream & os, const Vector & vec) {
	return os << "(" << vec.x << "," << vec.y << ")";	
}

}}
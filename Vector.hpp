#ifndef INTERSECTOR_DATADEFINE_VECTOR_HPP_
#define INTERSECTOR_DATADEFINE_VECTOR_HPP_

#include "Common.hpp"

namespace InterSector { namespace DataDefine {

struct Vector {
	Vector(double x, double y);
	Vector();
	double x, y;
};

typedef Vector Point;

inline const Vector operator + (const Vector & lhs, const Vector & rhs) {
	return Vector(lhs.x + rhs.x, lhs.y + rhs.y);
}

inline const Vector operator -(const Vector & lhs, const Vector & rhs) {
	return Vector(lhs.x - rhs.x, lhs.y - rhs.y);
}

inline double operator * (const Vector & lhs, const Vector & rhs) {
	return lhs.x * rhs.x + lhs.y * rhs.y;
}

inline double crossMul(const Vector & lhs, const Vector & rhs) {
	return rhs.x * lhs.y - lhs.x * rhs.y;
}

inline const Vector operator / (const Vector & vec, double dominator) {
	return Vector(vec.x / dominator, vec.y / dominator);
}

inline double norm2(const Vector & vec) {
	return vec * vec;
}

inline double norm(const Vector & vec) {
	return sqrt(norm2(vec));
}

std::ostream & operator << (std::ostream & os, const Vector & vec);

}}
#endif
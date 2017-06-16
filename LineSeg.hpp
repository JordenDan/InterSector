#ifndef INTERSECTOR_DATADEFINE_LINESEG_HPP_
#define INTERSECTOR_DATADEFINE_LINESEG_HPP_

#include "Common.hpp"
#include "Vector.hpp"

namespace InterSector {	namespace DataDefine {

struct LineSeg {
	LineSeg(const Point & start, const Point & end);
	LineSeg(double xStart, double yStart, double xEnd, double yEnd);
	const Vector UnitDir() const;
	Point start, end;
};

}}

#endif
#include "LineSeg.hpp"

namespace InterSector {	namespace DataDefine {

LineSeg::LineSeg(const Point & _start, const Point & _end)
	:start(_start), end(_end) {}

LineSeg::LineSeg(double xStart, double yStart, double xEnd, double yEnd)
	: start(xStart, yStart), end(xEnd, yEnd) {}

const Vector LineSeg::UnitDir() const {
	Vector vecDir = end - start;
	return vecDir / norm(vecDir);
}

}}
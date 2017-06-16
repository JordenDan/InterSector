#ifndef INTERSECTOR_DATADEFINE_ARC_HPP_
#define INTERSECTOR_DATADEFINE_ARC_HPP_

#include "Common.hpp"
#include "Vector.hpp"

namespace InterSector {	namespace DataDefine {

inline double cvtDeg2Rad(double deg) {
	return deg / 180.0 * PI;
}

struct AngleRange {
	AngleRange(double angleStartR, double angleEndR); //range from -PI to PI.
	AngleRange();
	double angleStartDeg() const;
	double angleEndDeg() const;
	bool inRadRange(double rad) const;
	bool inDegRange(double deg) const;

	double angleStartR, angleEndR;
};

struct Arc {
	Arc(const Point & center, double R, const AngleRange & angleRange);
	Arc(const Point & center, double R, double angleStartR, double angleEndR);
	Arc();
	Point center;
	double radius;
	AngleRange angleRange;
};

}}

#endif
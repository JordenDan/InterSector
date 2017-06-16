#include "Arc.hpp"

namespace InterSector {	namespace DataDefine {

AngleRange::AngleRange(double _angleStartR, double _angleEndR)
	: angleStartR(_angleStartR), angleEndR(_angleEndR) {}

AngleRange::AngleRange()
: angleStartR(-PI), angleEndR(PI) {}

double AngleRange::angleStartDeg() const {
	return angleStartR / PI * 180.0;
}

double AngleRange::angleEndDeg() const {
	return angleEndR / PI * 180.0;
}

bool AngleRange::inRadRange(double rad) const {
	double tmpEnd = (angleStartR > angleEndR ? angleEndR : angleEndR + PI * 2);
	return !(rad < angleStartR) && !(rad > angleEndR)
		|| !(rad + 2 * PI < angleStartR) && !(rad + 2 * PI > angleEndR);
}

bool AngleRange::inDegRange(double deg) const {
	return inRadRange(cvtDeg2Rad(deg));
}
		
Arc::Arc(const Point & _center, double _r, const AngleRange & _angleRange)
	: center(_center), radius(_r), angleRange(_angleRange) {}

Arc::Arc(const Point & _center, double _r, double angleStartR, double angleEndR)
	: center(_center), radius(_r), angleRange(angleStartR, angleEndR) {}

Arc::Arc()
	: center(), radius(1.0), angleRange() {}

}}
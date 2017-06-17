#include "Common.hpp"
#include "Sector.hpp"

namespace InterSector {	namespace DataDefine {

class SectorImpl : public Sector {
public:
	SectorImpl(const Arc & arc) 
		: arc_(arc)
	{
		calcGraphElement();
	}

	virtual const LineSeg & startLine() const {
		return startLine_;
	}
	virtual const LineSeg & endLine() const {
		return endLine_;
	}	
	virtual const Arc & arc() const {
		return arc_;
	}	
	virtual const Point & center() const {
		return arc_.center;
	}

	virtual double radius() const {
		return arc_.radius;
	}
private:
	void calcGraphElement() {
	}
private:
	const Arc arc_;
	LineSeg startLine_, endLine_;
};

Sector::~Sector() throw() 
{}

std::shared_ptr<Sector> Sector::create(
	const Point & center, double R, double angleStartR, double angleEndR)
{
	return std::shared_ptr<Sector> (new SectorImpl(Arc(center, R, angleStartR, angleEndR)));
}

}}


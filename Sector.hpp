#ifndef INTERSECTOR_DATADEFINE_SECTOR_HPP_
#define INTERSECTOR_DATADEFINE_SECTOR_HPP_

#include "Common.hpp"
#include "Arc.hpp"
#include "LineSeg.hpp"

namespace InterSector {	namespace DataDefine {

class Sector {
public:
	Sector(const Arc & arc);
	virtual ~Sector() throw();
	virtual const LineSeg & startLine() const = 0;
	virtual const LineSeg & endLine() const = 0;
	virtual const Arc & arc() const = 0;
	virtual const Point & center() const = 0;
	virtual double radius() const = 0;
public:
	static std::auto_ptr<Sector> create(
		const Point & center, double R, double angleStartR, double angleEndR);
};

}}

#endif
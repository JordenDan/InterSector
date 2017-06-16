#ifndef INTERSECTOR_ALGO_INTERSECTORJUDGE_HPP_
#define INTERSECTOR_ALGO_INTERSECTORJUDGE_HPP_

#include "Common.hpp"
#include "Vector.hpp"
#include "LineSeg.hpp"
#include "Arc.hpp"
#include "Sector.hpp"

namespace InterSector {	namespace Algo {

using namespace InterSector::DataDefine;

class InterSectorJudge{
	static bool isSectorOverlapped(const Sector & lhs, const Sector & rhs);
};

}}

#endif



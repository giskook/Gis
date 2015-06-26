// 折线类,
// 数据库中buf的结构为:大小[(4bytes)+类型(1byte)+not use(2bytes)](Options)+点数(4bytes)+点数据(...)
#ifndef GIS_KOOK_INCLUDE_GEOMETRY_GKGEOMETRYPOLYLINE_H_H
#define GIS_KOOK_INCLUDE_GEOMETRY_GKGEOMETRYPOLYLINE_H_H

#include "Geometry/GKGeometry.h"

namespace GKGEOMETRY{


class GEOMETRY_API GKGeometryPolyline : public GKGeometry
{
public:
	GKGeometryPolyline(){};
	GKGeometryPolyline(std::vector<GKBASE::GKPoint2d> & pts){m_points= pts;};

public:
	// 得到Geomtry的类型
	virtual GKuint8 GetType() const {return (GKuint8)GKGeometry::GeoPolyline;} 
};

}
#endif
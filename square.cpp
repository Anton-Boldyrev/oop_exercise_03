#include "square.hpp"

TSquare::TSquare (const TPoint p1, const TPoint p2, const TPoint p3, const TPoint p4) {
	a = p1;
	b = p2;
	c = p3;
	d = p4;
	TPoint ab, bc, cd, da;
	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	bc.x = c.x - b.x;
	bc.y = c.y - b.y;
	cd.x = d.x - c.x;
	cd.y = d.y - c.y;
	da.x = a.x - d.x;
	da.y = a.y - d.y;
	assert( ( ab.x * da.x + ab.y * da.y ) / ( sqrt( ab.x * ab.x + ab.y * ab.y ) * sqrt( da.x * da.x + da.y * da.y )) == 0 &&  ( bc.x * cd.x + bc.y * cd.y ) / ( sqrt( bc.x * bc.x + bc.y * bc.y ) * sqrt( cd.x * cd.x + cd.y * cd.y )) == 0 && ( ab.x * bc.x + ab.y * bc.y ) / ( sqrt( ab.x * ab.x + ab.y * ab.y ) * sqrt( bc.x * bc.x + bc.y * bc.y )) == 0 && sqrt( ab.x * ab.x + ab.y * ab.y ) ==  sqrt( bc.x * bc.x + bc.y * bc.y ) && sqrt( bc.x * bc.x + bc.y * bc.y ) == sqrt( cd.x * cd.x + cd.y * cd.y ) && sqrt( cd.x * cd.x + cd.y * cd.y ) == sqrt( da.x * da.x + da.y * da.y )); 
}

double TSquare::Area() const {
    double ans = sqrt( (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y) ) * sqrt( (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y) );
    return fabs(ans);
}

TPoint TSquare::Center() const {
    TPoint p;
	double x = (a.x + b.x + c.x + d.x) / 4;
	double y = (a.y + b.y + c.y + d.y) / 4;
	p.x = x;
	p.y = y;
	return p;
}

void TSquare::Print(std::ostream& os) const {
    os << "square:\n" << a << " " << b << " " << c << " " << d << "\n";
}

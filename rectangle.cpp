#include "rectangle.hpp"

TRectangle::TRectangle (const TPoint p1, const TPoint p2, const TPoint p3, const TPoint p4) {
    a = p1;
    b = p2;
    c = p3;
    d = p4;
    TPoint ab, ad, cb, cd;
	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	ad.x = d.x - a.x;
	ad.y = d.y - a.y;
	cb.x = b.x - c.x;
	cb.y = b.y - c.y;
	cd.x = d.x - c.x;
	cd.y = d.y - c.y;

	assert((ab.x * ad.x + ab.y * ad.y) / (sqrt(ab.x * ab.x + ab.y * ab.y) * sqrt(ad.x * ad.x + ad.y * ad.y)) == 0 && (cb.x * cd.x + cb.y * cd.y) / (sqrt(cb.x * cb.x + cb.y * cb.y) * sqrt(cd.x * cd.x + cd.y * cd.y)) == 0);
}

double TRectangle::Area () const {
    double ans = (b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y);
    return fabs(ans);
}

TPoint TRectangle::Center() const {
    TPoint p;
    double x = (a.x + b.x + c.x + d.x) / 4;
    double y = (a.y + b.y + c.y + d.y) / 4;
    p.x = x;
    p.y = y;
    return p;
}

void TRectangle::Print(std::ostream& os) const {
    os << "rectangle:\n" << a << " " << b << " " << c << " " << d << "\n";
}

#ifndef TRAPEZOID_HPP
#define TRAPEZOID_HPP

#include "point.hpp"
#include "figure.hpp"
#include <cmath>

class TTrapezoid : public TFigure{
    private:
        TPoint a, b, c, d;
    public:
        double Area() const override;
        TPoint Center() const override;
        void Print(std::ostream&) const override;
        TTrapezoid();
        TTrapezoid(const TPoint p1, const TPoint p2, const TPoint p3, const TPoint p4);
};
#endif

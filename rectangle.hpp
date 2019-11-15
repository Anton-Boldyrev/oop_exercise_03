#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "point.hpp"
#include "figure.hpp"
#include <cmath>


class TRectangle : public TFigure {

    private:
        TPoint a, b, c, d;
    
    public:
        double Area() const override;
        TPoint Center() const override;
        void Print(std::ostream&) const override;
        TRectangle();
        TRectangle(const TPoint p1, const TPoint p2, TPoint p3, const TPoint p4);  
};

#endif

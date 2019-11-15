#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "point.hpp"
#include "figure.hpp"
#include <iostream>

class TSquare : public TFigure{
    private:
        TPoint a, b, c, d;
    public:
        double Area() const override;
        TPoint Center() const override;
        void Print(std::ostream&) const override;
        TSquare();
        TSquare(const TPoint p1, const TPoint p2, const TPoint p3, const TPoint p4);
};

#endif

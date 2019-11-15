#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <iostream>
#include <cassert>
#include <stdexcept>
#include "point.hpp"
#include <cmath>

class TFigure {
    public:
        virtual void Print(std::ostream&) const = 0;
        virtual TPoint Center() const = 0;
        virtual double Area() const = 0;
        virtual ~TFigure(){};
};
#endif

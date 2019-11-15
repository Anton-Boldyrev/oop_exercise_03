#include <vector>
#include <string>
#include <cstring>
#include "figure.hpp"
#include "point.hpp"
#include "rectangle.hpp"
#include "trapezoid.hpp"
#include "square.hpp"

int main()
{
    std::vector<TFigure*> v;
    int i, j;
    TPoint p1, p2, p3, p4;
    double A;
    std::cout << "Go:\na - to add figure\nd - to delete figure\nf - to print area and center of figure\nt - to print total area of all figures\ne - to complite programme execution\nh - to show this manual\n";
    std::string cmd;
    while ( true ) {
        std::cin >> cmd;
        if ( cmd == "a" ) {
            std::cout << "chose figure:\n1 - rectangle\n2 - trapezoid\n3 - square\n";
            std::cin >> i;
            TFigure* f;
            if ( i == 1 ) {
                std::cin >> p1 >> p2 >> p3 >> p4;
                f = new TRectangle( p1, p2, p3, p4 );
            } else if ( i == 2 ) {
                std::cin >> p1 >> p2 >> p3 >> p4;
                f = new TTrapezoid( p1, p2, p3, p4 );
            } else if ( i == 3 ) {
                std::cin >> p1 >> p2 >> p3 >> p4;
                f = new TSquare( p1, p2, p3, p4 );
            } else {
                std::cout << "ERROR\ntry again\n";
                continue;
            }
            v.push_back(f);
        } else if ( cmd == "d" ) {
            std::cout << "enter index\n";
            std::cin >> i;
            if ( i >= v.size() or i < 0 ) {
                std::cout << "ERROR\ntry again\n";
                continue;
            } else {
                delete v[i];
                v.erase( v.begin() + i);
            }
        } else if ( cmd == "f" ) {
            for ( auto tmp : v ) {
                std::cout << "Center: " << tmp->Center() << "\n";
                std::cout << "Area: " << tmp->Area() << "\n";
            }
        } else if ( cmd == "t" ) {
            double A = 0;
            for ( auto tmp : v ) {
                A += tmp->Area();
            }
            std::cout << "total area: " << A << "\n";
        } else if ( cmd == "h" ) {
            std::cout << "Go:\na - to add figure\nd - to delete figure\nf - to print area and center of figure\nt - to print total area of all figures\ne - to complite programme execution\nh - to show this manual\n";
        } else if ( cmd == "e" ) {
            for ( auto& c : v ) {
                delete c;
            }
            break;
        } else {
            std::cout << "ERROR\ntry again\n";
            continue;
        }
    }
}

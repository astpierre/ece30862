#ifndef POLYGON_H_
#define POLYGON_H_
#include <string>
// do not include "using namespace std;" <-- not used in .h files

class Polygon {
public:
    Polygon();
    Polygon(int, float); // signature
    virtual ~Polygon();

    virtual float getArea();
    virtual string getName();
protected:
    int numSides;
    float lenSides;
};
#end /* POLYGON_H_ */

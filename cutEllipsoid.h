#ifndef CUT_ELLIPSOID_H
#define CUT_ELLIPSOID_H
#include "figuraGeometrica.h"

  class CutEllipsoid:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int x_radius;
    int y_radius;
    int z_radius;
  public:

    CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int xradius_, int yradius_, int zradius_);
    ~CutEllipsoid(){};
    void draw(Sculptor &sculptor);
  };

#endif // CUT_ELLIPSOID_H

#ifndef PUT_ELLIPSOID_H
  #define PUT_ELLIPSOID_H

  #include "figuraGeometrica.h"

  class PutEllipsoid:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int x_radius;
    int y_radius;
    int z_radius;
  public:
    PutEllipsoid(int x_center_, int y_center_, int z_center_, int x_radius_, int y_radius_, int z_radius_, float r_, float g_, float b_, float a_);
    ~PutEllipsoid(){};
    void draw(Sculptor &sculptor);
  };

#endif // PUT_ELLIPSOID_H

#ifndef PUT_SPHERE_H
  #define PUT_SPHERE_H

  #include "figuraGeometrica.h"

  class PutSphere:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int radius;
  public:
    PutSphere(int x_center_, int y_center_, int z_center_, int radius_, float r_, float g_, float b_, float a_);
    ~PutSphere(){};
    void draw(Sculptor &sculptor);
  };

#endif // PUT_SPHERE_H

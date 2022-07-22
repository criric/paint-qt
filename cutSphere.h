#ifndef CUT_SPHERE_H
#define CUT_SPHERE_H
#include "figuraGeometrica.h"

  class CutSphere:public FiguraGeometrica{
    int x_center;
    int y_center;
    int z_center;
    int radius;
  public:

    CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_);
    ~CutSphere(){};
    void draw(Sculptor &sculptor);
  };

#endif // CUT_SPHERE_H

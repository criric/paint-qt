#ifndef PUT_BOX_H
#define PUT_BOX_H
#include "figuraGeometrica.h"
  
  class PutBox:public FiguraGeometrica{
    int xi;
    int xf;
    int yi;
    int yf;
    int zi;
    int zf;
  public:
    PutBox(int xi_, int xf_, int yi_, int yf_, int zi_, int zf_, float r_, float g_, float b_, float a_);
    ~PutBox(){};
    void draw(Sculptor &sculptor);
  };

#endif // PUT_BOX_H

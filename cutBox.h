#ifndef CUTBOX_H
#define CUTBOX_H
#include "figuraGeometrica.h"

  class CutBox:public FiguraGeometrica{
    int xi;
    int xf;
    int yi;
    int yf;
    int zi;
    int zf;
  public:
  
    CutBox(int _xi, int _xf, int _yi, int _yf, int _zi, int _zf);
    ~CutBox(){};

    void draw(Sculptor &sculptor);
  };

#endif // CUTBOX_H

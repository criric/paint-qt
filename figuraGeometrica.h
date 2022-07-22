#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "sculptor.h"

  class FiguraGeometrica{
    protected:
      float r;
      float g;
      float b;
      float a;
    public:
      virtual ~FiguraGeometrica(){};
      virtual void draw(Sculptor &sculptor)=0;
  };

#endif // FIGURA_GEOMETRICA_H

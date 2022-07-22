#ifndef PUT_VOXEL_H
  #define PUT_VOXEL_H

  #include "figuraGeometrica.h"

  class PutVoxel:public FiguraGeometrica{
    int x;
    int y;
    int z;
  public:
    PutVoxel(int x_, int y_, int z_, float r_, float g_, float b_, float a_);
    ~PutVoxel(){};
    void draw(Sculptor &sculptor);
  };

#endif // PUT_VOXEL_H

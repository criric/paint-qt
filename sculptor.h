#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <iostream>
#include <fstream>

#include "vector"
#include "voxel.h"

  enum{XY,YZ,ZX};

  class Sculptor {
    protected:
      Voxel ***v;

      int nx;
      int ny;
      int nz;

      float r;
      float g;
      float b;
      float a;

    public:

      Sculptor(int _nx, int _ny, int _nz);
      ~Sculptor();
      void setColor(float r, float g, float b, float alpha);
      void putVoxel(int x, int y, int z);
      void cutVoxel(int x, int y, int z);
      void writeOFF(std::string filename);
      std::vector<std::vector<Voxel>> readMx(int dimension = 0, int plan = XY);
  };

#endif // SCULPTOR_H

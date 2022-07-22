#include "cutEllipsoid.h"

CutEllipsoid::CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int xradius_, int yradius_, int zradius_){
  this -> x_center = xcenter_;
  this -> y_center = ycenter_;
  this -> z_center = zcenter_;
  this -> x_radius = xradius_;
  this -> y_radius = yradius_;
  this -> z_radius = zradius_;
}

void CutEllipsoid::draw(Sculptor &sculptor){
  sculptor.setColor(r, g, b, a);
  for(int x = x_center - x_radius; x < x_center + x_radius; x++){
    for(int y = y_center - y_radius; y < y_center + y_radius; y++){
      for(int z = z_center - z_radius; z < z_center + z_radius; z++){
        float distance = ((x-x_center)/2.0) * ((x-x_center)/2.0 ) / ((x_radius/2.0)*(x_radius/2.0)) +
                         ((y-y_center)/2.0) * ((y-y_center)/2.0) / ((y_radius/2.0)*(y_radius/2.0)) +
                         ((z-z_center)/2.0) * ((z-z_center)/2.0 ) / ((z_radius/2.0)*(z_radius/2.0));

        if((distance <= 1)){
          sculptor.cutVoxel(x, y, z);
        }
      }
    }
  }
}

#pragma once

#ifndef POINT_HXX_
#define POINT_HXX_


class Point
{
public:
  Point(int xVal = 0, int yVal=0);
  virtual ~Point();

  // set point to Coordinates
  void setCoords(int xVal, int yVal);

  int x;
  int y;

private:
};
#endif
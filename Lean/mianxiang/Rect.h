#pragma once
class Rect
{ public:
  int Area_int();
  double Area_double();
  Rect(double l, double w);
  Rect(int l, int w);
  ~Rect();
 private:
  int nLength;
  int nWidth;
  double mLength;
  double mWidth;
};

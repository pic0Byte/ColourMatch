#ifndef _GAMUT_
#define _GAMUT_

#define EMPTY -1



class Gamut {
public:

   Gamut();

   int rX, rY, rL, gX, gY, gL, bX, bY, bL, wX, wY, wL;


protected:

   void slope();

   float bGM, bGC, gRM, gRC, rBM, rBC;

};


class ExtGamut : public Gamut{
public:

    ExtGamut();

   Gamut native;

   bool isEmpty, isNativeLinked;
   int index;

   static int comRX, comRY, comGX, comGY, comBX, comBY, comWX, comWY;


protected:

   int commonPoints[15];

};


#endif  //_GAMUT_

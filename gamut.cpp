#include "gamut.h"



Gamut::Gamut() : rX(640), rY(330), rL(250), gX(300), gY(600), gL(680), bX(150),
                        bY(60), bL(70), wX(313), wY(329), wL(1000){

   slope();

}



void Gamut::slope(){

   if (bX != EMPTY && gX != EMPTY){

      bGM = (float) (bY-gY) / (bX-gX);
      bGC = (float) bY - (bGM * bX);

   }

   if (gX != EMPTY && rX != EMPTY){

      gRM = (gY - rY) / (gX - rX);
      gRC = gY - (gRM * gX);

   }

   if (rX != EMPTY && bX != EMPTY){

      rBM = (rY - bY) / (rX - bX);
      rBC = rY - (rBM * rX);

   }
}


ExtGamut::ExtGamut() : isEmpty(true){

}

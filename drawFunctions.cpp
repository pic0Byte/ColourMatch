#include "drawFunctions.h"
#include <QtDebug>

#define X_MAX 538
#define X_MIN 76
#define X_SCALE 800
#define X_PIX (X_MAX - X_MIN)
#define Y_MAX 8
#define Y_MIN 528
#define Y_SCALE 900
#define Y_PIX (Y_MIN - Y_MAX)




void drawFunctions::drawTriangle(QLabel *label, ExtGamut *gamut){


    QPixmap pixMap;
    pixMap.load(":/Resources/img/cie.grid.nums.png");
    QPainter painter(&pixMap);
    QPen pen(QColor::fromRgb(255,255,255), 1);
    painter.setPen(pen);


    painter.drawLine(scaleX(gamut->bX), scaleY(gamut->bY),
                     scaleX(gamut->gX), scaleY(gamut->gY));

    //painter.drawEllipse(gamut->bX, gamut->bY, 3, 3);
    painter.drawLine(scaleX(gamut->gX), scaleY(gamut->gY),
                     scaleX(gamut->rX), scaleY(gamut->rY));

    painter.drawLine(scaleX(gamut->rX), scaleY(gamut->rY),
                     scaleX(gamut->bX), scaleY(gamut->bY));

    label->setPixmap(pixMap);

}

int drawFunctions::scaleX (int x){
    double scaled = ((((double)x/X_SCALE) * X_PIX) + X_MIN);
    return (int) scaled;
}

int drawFunctions::scaleY (int y){
    double scaled = (Y_PIX - ((((double)y/Y_SCALE) * Y_PIX))
                     + Y_MAX);
    return (int) scaled;
}

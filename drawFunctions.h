#ifndef DRAWFUNCTIONS_H
#define DRAWFUNCTIONS_H

#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include "gamut.h"


namespace drawFunctions {


void drawTriangle(QLabel *label, ExtGamut *gamut);

int scaleX (int x);
int scaleY (int y);

}


#endif // DRAWFUNCTIONS_H

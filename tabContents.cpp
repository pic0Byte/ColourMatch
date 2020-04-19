#include "tabContents.h"
#include "ui_tabcontents.h"
#include "appData.h"
#include "drawFunctions.h"



tabContents::tabContents(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tabContents)
{
    ui->setupUi(this);

    this->setupData();

    this->setupWidgets();




}


tabContents::~tabContents()
{
    appData::killGamut(gamut);
    delete lblImg;
    delete ui;
}


void tabContents::setupData(){
    gamut = appData::newGamut();
    this->updateGamut();
}


void tabContents::setupWidgets(){

    lblImg = new QLabel(this);
    lblImg->setGeometry(150, 50, 372, 400);
    lblImg->setScaledContents(true);
    drawFunctions::drawTriangle(lblImg, gamut);

}


/*  Spinner update methods ====================================================
 *
 *
 */


void tabContents::updateGamut(){

    ui->lblIndex->setNum(gamut->index);

    gamut->rX = ui->spnRX->value();
    gamut->rY = ui->spnRY->value();
    gamut->gX = ui->spnGX->value();
    gamut->gY = ui->spnGY->value();
    gamut->bX = ui->spnBX->value();
    gamut->bY = ui->spnBY->value();
    gamut->wX = ui->spnWX->value();
    gamut->wY = ui->spnWY->value();


}


void tabContents::on_spnRX_valueChanged(int arg1){
    gamut->rX = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);

}

void tabContents::on_spnRY_valueChanged(int arg1){
    gamut->rY = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnGX_valueChanged(int arg1){
    gamut->gX = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnGY_valueChanged(int arg1){
    gamut->gY = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnBX_valueChanged(int arg1){
    gamut->bX = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnBY_valueChanged(int arg1){
    gamut->bY = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnWX_valueChanged(int arg1){
    gamut->wX = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

void tabContents::on_spnWY_valueChanged(int arg1){
    gamut->wY = arg1;
    drawFunctions::drawTriangle(lblImg, gamut);
}

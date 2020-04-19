#ifndef TABCONTENTS_H
#define TABCONTENTS_H

#include <QWidget>
#include "gamut.h"
#include <QLabel>

namespace Ui {
class tabContents;
}

class tabContents : public QWidget
{
    Q_OBJECT

public:
    explicit tabContents(QWidget *parent = nullptr);
    ~tabContents();


private slots:
    void on_spnRX_valueChanged(int arg1);
    void on_spnRY_valueChanged(int arg1);
    void on_spnGX_valueChanged(int arg1);
    void on_spnGY_valueChanged(int arg1);
    void on_spnBX_valueChanged(int arg1);
    void on_spnBY_valueChanged(int arg1);
    void on_spnWX_valueChanged(int arg1);
    void on_spnWY_valueChanged(int arg1);

private:
    Ui::tabContents *ui;
    ExtGamut *gamut;
    QLabel *lblImg;

    void setupData();
    void setupWidgets();
    void updateGamut();

};


#endif // TABCONTENTS_H

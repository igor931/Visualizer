#ifndef ABOUTETALON_H
#define ABOUTETALON_H

#include <QScrollArea>
#include <QFormLayout>
#include <QLabel>

#include "Target.h"

class AboutEtalon : public QScrollArea
{
public:
    explicit AboutEtalon(QWidget *_parent = 0);
    ~AboutEtalon();

    /// Установка информации об эталоне
    void setInfoAboutEtalon(Etalon *_etalon, int _number);

    /// Очистка всех полей информации об эталоне
    void resetInfoAboutEtalon();

private:
    /// Обновление информации об эталоне
    void updateInfoAboutEtalon();

    TPubEtalon *tPubEtalon;     /// Структура данных эталона

    QLabel labelNumber;         /// Номер эталона

    struct LabelAE
    {
        QLabel lV;
        QLabel lVx;
        QLabel lVy;
        QLabel lVh;
        QLabel lAx;
        QLabel lAy;
        QLabel lAh;
        QLabel lPsi;
        QLabel lX;
        QLabel lY;
        QLabel lH;
        QLabel lTrcNumSens;
        QLabel lSensImit;

//        QLabel lNoInform;

        QLabel lTrustXY;
        QLabel lIVO;
        QLabel lTVO;
        QLabel lOGP;
        QLabel lManevr;

//        QLabel lVisual;
//        QLabel lImitObj;
//        QLabel lTrsChar;
    } labelAE;
};

#endif // ABOUTETALON_H
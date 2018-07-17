#include "status.h"

namespace Visualizer
{

/// Класс виджета отображения текущего состояния потока вычислений
Status::Status()
{
    QHBoxLayout *hBoxLayout = new QHBoxLayout(this);

    hBoxLayout->addWidget(new QSplitter(this));

    hBoxLayout->addWidget(new QLabel(tr("Время"), this));
    time = new QLCDNumber(5, this);
    hBoxLayout->addWidget(time);

    hBoxLayout->addWidget(new QSplitter(this));

    hBoxLayout->addWidget(new QLabel(tr("Количество воздуных трасс"), this));
    countAirTracks = new QLCDNumber(3, this);
    hBoxLayout->addWidget(countAirTracks);

    hBoxLayout->addWidget(new QSplitter(this));

    hBoxLayout->addWidget(new QLabel(tr("Количество поверхностных трасс"), this));
    countSurfaceTracks = new QLCDNumber(3, this);
    hBoxLayout->addWidget(countSurfaceTracks);

    hBoxLayout->addWidget(new QSplitter(this));

    hBoxLayout->addWidget(new QLabel(tr("Максимальное количество трасс"), this));
    maxCountTracks = new QLCDNumber(3);
    hBoxLayout->addWidget(maxCountTracks);

    hBoxLayout->addWidget(new QSplitter(this));

    setLayout(hBoxLayout);
}

Status::~Status()
{
    delete time;
    delete countAirTracks;
    delete countSurfaceTracks;
    delete maxCountTracks;
}

void Status::showInfo(TypeOfInfo _typeOfInfo, double _info)
{
    switch(_typeOfInfo)
    {
    case Time:
        time->display((int) _info);
        break;
    case TrackAir:
        countAirTracks->display((int) _info);
        if(maxCountTracks->value() < (int) _info + countSurfaceTracks->value())
            maxCountTracks->display((int) _info + countSurfaceTracks->value());
        break;
    case TrackSurface:
        countSurfaceTracks->display((int) _info);
        if(maxCountTracks->value() < countAirTracks->value() + (int) _info)
            maxCountTracks->display(countAirTracks->value() + (int) _info);
        break;
    default:
        break;
    }
}

}

#include "mainwindow.h"

namespace Visualizer
{

/// Класс виджета главного окна
MainWindow::MainWindow(QWidget *_parent)
    : QMainWindow(_parent)
{

#ifdef Q_OS_WIN             /// Windows     (Qt 5)
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("cp-1251"));
#elif defined Q_OS_UNIX     /// Linux       (Qt 4)
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
#endif

    setWindowTitle(tr("Визуализатор 2.0.0"));

    aboutEtalon     = new AboutEtalon;
    aboutTrack      = new AboutTrack;
    graphHeight     = new GraphHeight;
    painter         = new Painter(aboutEtalon, aboutTrack, graphHeight);
    settings        = new Settings(painter);
    status          = new Status;
    //exp
    dataBaseWidget  = new DataBaseWidget();
    //exp
    playPause       = new PlayPause(painter, status, dataBaseWidget);

    /// Виджет отрисовки эталонов и трасс
    setCentralWidget(painter);

    /// Виджет управления потоком вычислений
    QToolBar *tPlayPause = new QToolBar(tr("Управление потоком вычислений"), this);
    tPlayPause->addWidget(playPause);
    tPlayPause->setMovable(false);
    addToolBar(tPlayPause);


    QToolBar *flagDb = new QToolBar(tr("База данных"), this);
    QCheckBox *check = new QCheckBox(tr("База данных"));
    check->setChecked(false);
    connect(check, SIGNAL(clicked(bool)), dataBaseWidget, SLOT(show_hide(bool)));
    flagDb->addWidget(check);
    flagDb->setMovable(false);
    addToolBar(flagDb);

    /// Виджет настроек отображения
    QToolBar *tSettings = new QToolBar(tr("Настройки"), this);
    tSettings->addWidget(settings);
    tSettings->setMovable(false);
    addToolBar(tSettings);



    /// Виджет отображения графика высоты
    QDockWidget *dGraphHeight = new QDockWidget(tr("График высоты"), this);
    dGraphHeight->setWidget(graphHeight);
    dGraphHeight->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    addDockWidget(Qt::LeftDockWidgetArea, dGraphHeight);
//    dGraphHeight->setWidget(dataBaseWidget);
    dataBaseWidget->show();
//    dataBaseWidget->hide();
    dGraphHeight->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    addDockWidget(Qt::LeftDockWidgetArea, dGraphHeight);
//    dataBaseWidget->
    /// Виджет отображения параметров эталонов
    QDockWidget *dAboutEtalon = new QDockWidget(tr("Информация об эталоне"), this);
    dAboutEtalon->setWidget(aboutEtalon);
    dAboutEtalon->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    addDockWidget(Qt::RightDockWidgetArea, dAboutEtalon);

    /// Виджет отображения параметров трасс
    QDockWidget *dAboutTrack = new QDockWidget(tr("Информация о трассе"), this);
    dAboutTrack->setWidget(aboutTrack);
    dAboutTrack->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    addDockWidget(Qt::RightDockWidgetArea, dAboutTrack);

    /// Виджет отображения текущего состояния потока вычислений
    statusBar()->addWidget(status);


}

MainWindow::~MainWindow()
{
    delete playPause;
    delete status;
    delete settings;
    delete painter;
    delete graphHeight;
    delete aboutTrack;
    delete aboutEtalon;
    delete dataBaseWidget;
}

}

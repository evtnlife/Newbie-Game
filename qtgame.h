#ifndef QTGAME_H
#define QTGAME_H

#include <QMainWindow>

class QtGame : public QMainWindow
{
    Q_OBJECT

public:
    QtGame(QWidget *parent = 0);
    ~QtGame();
};

#endif // QTGAME_H

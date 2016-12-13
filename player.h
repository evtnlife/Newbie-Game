#ifndef MYRECT_H
#define MYRECT_H

#include <QObject>
#include <QGraphicsRectItem>

class PLAYER: public QObject, public QGraphicsRectItem{
    Q_OBJECT

public:
    void keyPressEvent(QKeyEvent * event);

private:
    int controlBullet = 0;

public slots:
    void spawn();
};

#endif // MYRECT_H

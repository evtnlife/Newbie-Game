#ifndef BULLETS_H
#define BULLETS_H

#include <QObject>
#include <QGraphicsRectItem>

class BULLETS: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
    Q_ENUMS(BULLET)
public:
    enum BULLET{ comum = 0, especial, bazzoka };
    BULLETS(BULLET);

public slots:
    void move();

};
#endif // BULLETS_H

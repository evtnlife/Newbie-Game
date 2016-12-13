#include <enemy.h>
#include <QTimer>
#include <stdlib.h>
#include <QGraphicsScene>

Enemy::Enemy()
{
    life = 100;
    int randon_value = rand() % 700;
    setPos(randon_value,0);
    setRect(0,0,100,50);


    QTimer * timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move()
{
    setPos(x(),y()+5);
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }

}

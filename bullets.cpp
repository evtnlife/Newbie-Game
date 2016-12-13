#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QList>
#include <typeinfo>
#include <bullets.h>
#include <enemy.h>
#include <game.h>

extern GAME * game;

BULLETS::BULLETS(BULLET value)
{
    if(value == BULLET::comum)
        setRect(0,0,5,50);
    else if(value == BULLET::especial)
        setRect(0,0,10,20);
    else if(value == BULLET::bazzoka)
    {
        setRect(0,0,20,100);
    }

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    game->score->increaseShots();
    timer->start(30);
}

void BULLETS::move()
{
    QList<QGraphicsItem *> colliding_itens = collidingItems();
    for(int i = 0; i<colliding_itens.size(); ++i){
        if(typeid(*(colliding_itens[i])) == typeid(Enemy)){
            game->score->increaseScore();
            scene()->removeItem(colliding_itens[i]);
            scene()->removeItem(this);
            delete colliding_itens[i];
            delete this;
        }
    }

    setPos(x(),y()-10);
    if(pos().y() + rect().height() <0){
        scene()->removeItem(this);
        delete this;
    }
}

#include <player.h>
#include <bullets.h>
#include <enemy.h>
#include <QGraphicsScene>
#include <QKeyEvent>

void PLAYER::keyPressEvent(QKeyEvent *event)
{
        if(event->key() == Qt::Key_Left){
            if(pos().x()>50)
                setPos(x()-15,y());
        }
        else if(event->key() == Qt::Key_Right){
            if(pos().x()<750)
                setPos(x()+15,y());
        }
        else if(event->key() == Qt::Key_Space){
            //controy bullets
            BULLETS::BULLET bullet;
            if(controlBullet == 0)
                bullet = BULLETS::BULLET::comum;
            if(controlBullet == 1)
                bullet = BULLETS::BULLET::especial;
            else if(controlBullet == 2)
                bullet = BULLETS::BULLET::bazzoka;
            BULLETS * bullets = new BULLETS(bullet);
            bullets->setPos(x(),y());
            scene()->addItem(bullets);
        }
        else if(event->key() == Qt::Key_Space + Qt::Key_Left){
            setPos(x()-7,y()+5);
            BULLETS::BULLET bullet;
            if(controlBullet == 0)
                bullet = BULLETS::BULLET::comum;
            if(controlBullet == 1)
                bullet = BULLETS::BULLET::especial;
            else if(controlBullet == 2)
                bullet = BULLETS::BULLET::bazzoka;

            BULLETS * bullets = new BULLETS(bullet);
            bullets->setPos(x(),y());
            scene()->addItem(bullets);
        }
        else if(event->key() == Qt::Key_Space +Qt::Key_Right){
            setPos(x()+7,y()-5);
            BULLETS::BULLET bullet;
            if(controlBullet == 0)
                bullet = BULLETS::BULLET::comum;
            else if(controlBullet == 1)
                bullet = BULLETS::BULLET::especial;
            else if(controlBullet == 2)
                bullet = BULLETS::BULLET::bazzoka;

            BULLETS * bullets = new BULLETS(bullet);
            bullets->setPos(x(),y());
            scene()->addItem(bullets);
        }
        else if(event->key() == Qt::Key_1)
            controlBullet = 0;
        else if(event->key() == Qt::Key_2)
            controlBullet = 1;
        else if(event->key() == Qt::Key_3)
            controlBullet = 2;
}

void PLAYER::spawn()
{
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}

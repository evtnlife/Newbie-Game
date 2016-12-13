#ifndef GAME_H
#define GAME_H

#include <player.h>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <score.h>

class GAME: public QGraphicsView
{
public:
    GAME(QWidget * parent = 0);

    QGraphicsScene * scene;
    PLAYER * player;
    SCORE * score;
};

#endif // GAME_H

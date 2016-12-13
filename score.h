#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class SCORE: public QGraphicsTextItem
{
public:
    SCORE(QGraphicsItem * parent = 0);

    void increaseScore();
    int getScore();
    void increaseShots();
    int getFailShots();
private:
    int score;
    int shotsCount;
    int failShots;
};
#endif // SCORE_H

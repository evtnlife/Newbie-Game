#include <score.h>
#include <QFont>
#include <QColor>

SCORE::SCORE(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    int score = 0; // init score by 0;
    failShots = 0;
    shotsCount = 0;

    setPlainText("Score : " + QString::number(score) + " Shots : " + QString::number(shotsCount)+ " Fail Shots : " + QString::number(getFailShots()));
    setDefaultTextColor(QColor("blue"));
    setFont(QFont("Fantasy"));
}

void SCORE::increaseScore()
{
    score ++;
    setPlainText("Score : " + QString::number(score) + " Shots : " + QString::number(shotsCount)+ " Fail Shots : " + QString::number(getFailShots()));
}

int SCORE::getScore()
{
    return score;
}

void SCORE::increaseShots()
{
    shotsCount++;
    setPlainText("Score : " + QString::number(score) + " Shots : " + QString::number(shotsCount)+ " Fail Shots : " + QString::number(getFailShots()));
}

int SCORE::getFailShots()
{
    return shotsCount-score;
}


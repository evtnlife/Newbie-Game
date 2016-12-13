#include <game.h>
#include <player.h>
#include <QTimer>

GAME::GAME(QWidget * parent)
{
    // cria a cena
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600); //cria a cena(janela) com padrao 800x600 mas como default podendo ir ate infinito

    //seta um padrao para a cena e fixa seus valores.
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    //cria player
    player = new PLAYER();
    player->setRect(-48,+50,100,100);
    player->setPos(width()/2,height() - player->rect().height());

    //habilita focus sobre o item
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // add o item a cena
    scene->addItem(player);


    //spawn mobs
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(1500);

    score = new SCORE();
    scene->addItem(score);

    show();
}

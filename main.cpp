#include <QApplication>
#include "game.h"

GAME * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // add the scene the playground
    game = new GAME();
    game->show();

    return a.exec();
}

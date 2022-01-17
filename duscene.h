#ifndef DUSCENE_H
#define DUSCENE_H

#include <QGraphicsScene>

class gifAnimation;

class DuScene : public QGraphicsScene
{
public:
    DuScene(QObject *parent=nullptr);
private:
    gifAnimation *mGifAnimation;
};

#endif // DUSCENE_H

#include "duscene.h"

#include "gifanimation.h"
#include <QLabel>

DuScene::DuScene(QObject *parent)
    : QGraphicsScene(parent)
{
    mGifAnimation = new gifAnimation(this);
    mGifAnimation->setFilename("C:/Users/MARTHA/Desktop/homer.gif");
    mGifAnimation->startMovie();
    addWidget(mGifAnimation->getWidget());
}

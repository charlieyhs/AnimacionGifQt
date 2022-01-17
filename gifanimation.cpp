#include "gifanimation.h"

#include <QLabel>
#include <QMovie>

gifAnimation::gifAnimation(QObject *parent)
    : QObject(parent)
{
    mLabel = new QLabel(static_cast<QWidget *>(parent->parent()->parent()));
    mMovie = new QMovie(this);


}

void gifAnimation::startMovie()
{
    mMovie->setFileName(mFilename);
    mMovie->start();
    mLabel->setMovie(mMovie);
}

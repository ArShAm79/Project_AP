#include "Zombi.h"

Zombi::Zombi():Animation()
{
    //set life point
lifePoint=4;
//set pic
QList<QPixmap> qlist;
for(int i=0;i<29;i++){
    qlist.append(QPixmap(":/Zombi/zombie/"+QString::number(i)+".jpg"));
}
setPicsList(qlist);
//setPixmap(qlist.at(1));
//Qtimer
auto livingTimer=new QTimer;
livingTimer->start(50);
//connect
QObject::connect(livingTimer,SIGNAL(timeout()),this,SLOT(checkLiving()));
}

void Zombi::damage()
{
    lifePoint--;
}

void Zombi::move()
{
    setPos(x()-1,y());
}

void Zombi::checkLiving()
{
    if(lifePoint<=0){
        delete this;
        return;
    }
}

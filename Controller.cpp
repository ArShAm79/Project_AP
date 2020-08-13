#include "Controller.h"
#include"Zombi.h"
#include"Plants.h"
#include"Plants_Pea.h"
#include"Plants_Shooter.h"
Controller::Controller() : scene(new QGraphicsScene(0,0,1920,1080))
{
    holder = new QGraphicsRectItem(0,0,scene->width(),scene->height());
auto zombi1=new Zombi;
zombi1->setPos(1500,600);
scene->addItem(zombi1);
zombi1->start();

}

Controller::~Controller()
{
    delete scene;
    delete holder;
}

void Controller::addItem(QGraphicsItem *item)
{
    scene->addItem(item);
}

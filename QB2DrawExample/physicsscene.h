#ifndef PHYSICSSCENE_H
#define PHYSICSSCENE_H

#include <QGraphicsScene>
#include <Box2D/Box2D.h>

#include "../qb2draw.h"

class PhysicsScene : public QGraphicsScene
{
    Q_OBJECT

public:
    PhysicsScene(QObject *parent = Q_NULLPTR);

private:
    b2World *world;//The world
    QB2Draw *draw;//The drawer

private slots:
    void updateLogic();

    // QGraphicsScene interface
protected:
    virtual void drawForeground(QPainter *painter, const QRectF &rect) override;
};

#endif // PHYSICSSCENE_H

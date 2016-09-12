#ifndef QB2DRAW_H
#define QB2DRAW_H
#include <QObject>
#include <QPainter>
#include <Box2D/Box2D.h>

class QB2Draw : public b2Draw, QObject
{

public:
    QB2Draw(QRect displayGeometry,QPainter * p=NULL); //Constructor: Display geometry and painter

    //void setScale(float sx=1.0, float sy=1.0); TODO
    void DrawPolygon(const b2Vec2 *vertices, int32 vertexCount, const b2Color &color) override; //Draw a polyline
    void DrawSolidPolygon(const b2Vec2 *vertices, int32 vertexCount, const b2Color &color) override; //Draw a polygone
    void DrawCircle(const b2Vec2 &center, float32 radius, const b2Color &color) override; //Draw a circonference
    void DrawSolidCircle(const b2Vec2 &center, float32 radius, const b2Vec2 &axis, const b2Color &color) override; //Draw a circle
    void DrawSegment(const b2Vec2 &p1, const b2Vec2 &p2, const b2Color &color) override; //Draw a line
    void DrawTransform(const b2Transform &xf) override; //Set a transformate (translate and rotate)
    void DrawPoint(const b2Vec2 &p, float32 size, const b2Color &color) override;

    QPoint toQPoint(const b2Vec2 &vec) const; //To convert b2vec2 in QPoint (and also change the coordinate system)
    b2Vec2 toB2Vec2(const QPointF &point) const;
    b2Vec2 toB2Vec2(const QPoint &point) const;

    void setPtmRatio(float value);
    float getPtmRatio() const;

private:
    QPainter *painter; //The painter
    QRect geometry; //The geometry
    float ptmRatio;

    QColor toQColor(b2Color color); //To convert b2Color in QColor

public slots:
    void updateGeometry(QRect displayGeometry); //Update the geometry
    void setPainter(QPainter * p); //Set the painter

};

#endif // QB2DRAW_H

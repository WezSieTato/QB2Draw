#include <QString>
#include <QtTest>

#include <qb2draw.h>

class QB2DrawTests : public QObject
{
    Q_OBJECT

public:
    QB2DrawTests();

private Q_SLOTS:
    void testToQColor_data();
    void testToQColor();
};

QB2DrawTests::QB2DrawTests()
{
}

void QB2DrawTests::testToQColor_data()
{
    QTest::addColumn<float32>("r");
    QTest::addColumn<float32>("g");
    QTest::addColumn<float32>("b");
    QTest::addColumn<float32>("a");
    QTest::addColumn<QColor>("result");
    QTest::newRow("0") << 0.0f <<  0.0f <<  0.0f <<  0.0f  << QColor(0, 0, 0, 0);
    QTest::newRow("1") << 1.0f <<  1.0f <<  1.0f <<  1.0f  << QColor(255, 255, 255, 255);
    QTest::newRow("different r,g,b,a") << 0.2f <<  0.4f <<  0.6f <<  0.8f  << QColor(51, 102, 153, 204);

}

void QB2DrawTests::testToQColor()
{
    QFETCH(float32, r);
    QFETCH(float32, g);
    QFETCH(float32, b);
    QFETCH(float32, a);

    QFETCH(QColor, result);

    b2Color color(r, g, b, a);
    QB2Draw draw(QRect(0,0,0,0));
    QColor qColor = draw.toQColor(color);

    QCOMPARE(qColor, result);
}

QTEST_APPLESS_MAIN(QB2DrawTests)

#include "tst_qb2draw.moc"

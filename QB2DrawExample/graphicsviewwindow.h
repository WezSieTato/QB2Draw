#ifndef GRAPHICSVIEWWINDOW_H
#define GRAPHICSVIEWWINDOW_H

#include <QMainWindow>

namespace Ui {
class GraphicsViewWindow;
}

class GraphicsViewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraphicsViewWindow(QWidget *parent = 0);
    ~GraphicsViewWindow();

private:
    Ui::GraphicsViewWindow *ui;
};

#endif // GRAPHICSVIEWWINDOW_H

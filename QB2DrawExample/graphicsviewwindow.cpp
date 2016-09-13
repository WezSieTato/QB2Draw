#include "graphicsviewwindow.h"
#include "ui_graphicsviewwindow.h"

#include "physicsscene.h"

GraphicsViewWindow::GraphicsViewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GraphicsViewWindow)
{
    ui->setupUi(this);

    auto physicsScene = new PhysicsScene(this);
   ui->graphicsView->setScene(physicsScene);
//   ui->graphicsView->setSceneRect(physicsScene->sceneRect());
}

GraphicsViewWindow::~GraphicsViewWindow()
{
    delete ui;
}

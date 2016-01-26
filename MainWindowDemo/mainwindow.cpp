#include "mainwindow.h"
#include <QIcon>
#include <QKeySequence>
#include <QLabel> // set central widget

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QLabel *central = new QLabel(tr("Central Widget"));
    this->setCentralWidget(central);

#ifdef ENABLE_DEMO
    createActions();
    createMenus();
    createToolBars();
    createStatusBar();
#endif
}

MainWindow::~MainWindow()
{

}

#ifdef ENABLE_DEMO
void MainWindow::createActions()
{
    newAct = new QAction(QIcon(":/icons/new.png"), tr("&New"), this);
    newAct->setShortcut(QKeySequence::New);
    newAct->setStatusTip(tr("Create an new file..."));
    connect(newAct, SIGNAL(triggered()), this, SLOT(newfile()));

    openAct = new QAction(QIcon(":/icons/open.png"), tr("&Open"), this);
    openAct->setShortcut(QKeySequence::Open);
    openAct->setStatusTip(tr("Open an exist file..."));
    connect(openAct, SIGNAL(triggered()), this, SLOT(open()));

    saveAct = new QAction(QIcon(":/icons/save.png"), tr("&Save"), this);
    saveAct->setShortcut(QKeySequence::Save);
    saveAct->setStatusTip(tr("Create an new file..."));
    connect(saveAct, SIGNAL(triggered()), this, SLOT(save()));
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
}

void MainWindow::createToolBars()
{
    fileToolBar = addToolBar(tr("File"));
    fileToolBar->addAction(newAct);
    fileToolBar->addAction(openAct);
    fileToolBar->addAction(saveAct);
}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Ready"));
}
#endif

#ifdef ENABLE_DEMO
void MainWindow::newfile(){}
void MainWindow::open(){}
void MainWindow::save(){}
#endif

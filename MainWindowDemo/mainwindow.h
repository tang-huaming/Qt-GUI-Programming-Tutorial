#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// Creating Main Window Components
#define ENABLE_DEMO
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QMenuBar>
#include <QStatusBar>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
#ifdef ENABLE_DEMO
    QMenu *fileMenu;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QToolBar *fileToolBar;

    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
#endif

private slots:
#ifdef ENABLE_DEMO
    void newfile();
    void open();
    void save();
#endif
};

#endif // MAINWINDOW_H

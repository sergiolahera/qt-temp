#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMessageBox>


// This can work for any project. Use gral. QActions.
// Use c++ for anything else. For c++17 or c++20 you need to test first if the library is there.
// Control all plots in the the two white squares graphicview and 2
// Add more options for the graphicView on the GroupBox
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    //this->setAutoFillBackground(true);
    //ui->centralwidget->setAutoFillBackground(true);
    // Optionally, set a minimum or initial size of the screen
    //resize(1280, 800);
    ui->setupUi(this);
    setWindowTitle("Data Science Application");

    //setupMenus(); // Initialize menus fully code


    // ===== Connects for FILE Menu =====
    connect(ui->actionNew_Output,     &QAction::triggered, this, &MainWindow::newOutput);
    connect(ui->actionOpen_Last,      &QAction::triggered, this, &MainWindow::openLast);
    connect(ui->actionSave_Output,    &QAction::triggered, this, &MainWindow::saveOutput);
    connect(ui->actionClose,          &QAction::triggered, this, &MainWindow::closeWindow);
    connect(ui->actionQuit,           &QAction::triggered, this, &MainWindow::quitApp);

    connect(ui->actionChoose_Dataset,    &QAction::triggered, this, &MainWindow::chooseDataset);
    connect(ui->actionChoose_Algorithms, &QAction::triggered, this, &MainWindow::chooseAlgorithms);

    connect(ui->actionPlot_1,        &QAction::triggered, this, &MainWindow::plot_1);
    connect(ui->actionPlot_2,        &QAction::triggered, this, &MainWindow::plot_2);
    connect(ui->actionPlot_3,        &QAction::triggered, this, &MainWindow::plot_3);
    connect(ui->actionDiagram_1,     &QAction::triggered, this, &MainWindow::diagram_1);
    connect(ui->actionDiagram_2,     &QAction::triggered, this, &MainWindow::diagram_2);
    connect(ui->actionDiagram_3,     &QAction::triggered, this, &MainWindow::diagram_3);
    connect(ui->actionSet_of_Plots,  &QAction::triggered, this, &MainWindow::setOfPlots);

    connect(ui->actionRun_and_Execute, &QAction::triggered, this, &MainWindow::runExecute);

    connect(ui->actionVersion, &QAction::triggered, this, &MainWindow::showVersion);

}

MainWindow::~MainWindow()
{
    delete ui;
}

// This actions can be set in fully code 2 without using connect

// void MainWindow::setupMenus()
// {
//     // Main Menu
//     QMenu *mainMenu = menuBar()->addMenu(tr("File"));
//     QAction *newOutputAct = mainMenu->addAction(tr("New Output"), this, &MainWindow::newOutput);
//     QAction *openLastAct = mainMenu->addAction(tr("Open Last"), this, &MainWindow::openLast);
//     QAction *saveOutputAct = mainMenu->addAction(tr("Save Output"), this, &MainWindow::saveOutput);
//     mainMenu->addSeparator();
//     QAction *closeAct = mainMenu->addAction(tr("Close"), this, &MainWindow::closeWindow);
//     QAction *quitAct = mainMenu->addAction(tr("Quit"), this, &MainWindow::quitApp);

//     // Edit Menu
//     QMenu *editMenu = menuBar()->addMenu(tr("Edit"));
//     QAction *chooseDatasetAct = editMenu->addAction(tr("Choose Dataset"), this, &MainWindow::chooseDataset);
//     QAction *chooseAlgorithmsAct = editMenu->addAction(tr("Choose Algorithms"), this, &MainWindow::chooseAlgorithms);

//     // View Menu
//     QMenu *viewMenu = menuBar()->addMenu(tr("View"));
//     viewMenu->addAction(tr("Plot_1"), this, &MainWindow::plot_1);
//     viewMenu->addAction(tr("Plot_2"), this, &MainWindow::plot_2);
//     viewMenu->addAction(tr("Plot_3"), this, &MainWindow::plot_3);
//     viewMenu->addSeparator();
//     viewMenu->addAction(tr("Diagram_1"), this, &MainWindow::diagram_1);
//     viewMenu->addAction(tr("Diagram_2"), this, &MainWindow::diagram_2);
//     viewMenu->addAction(tr("Diagram_3"), this, &MainWindow::diagram_3);
//     viewMenu->addSeparator();
//     viewMenu->addAction(tr("Set of Plots"), this, &MainWindow::setOfPlots);

//     // Build Menu
//     QMenu *buildMenu = menuBar()->addMenu(tr("Build"));
//     buildMenu->addAction(tr("Run / Execute"), this, &MainWindow::runExecute);
// }

// Example slots (implement function logic as needed)

void MainWindow::newOutput()        { QMessageBox::information(this, "New Output", "New Output triggered."); }
void MainWindow::openLast()         { QMessageBox::information(this, "Open Last", "Open Last triggered."); }
void MainWindow::saveOutput()       { QMessageBox::information(this, "Save Output", "Save Output triggered."); }
void MainWindow::closeWindow()      { close(); }
void MainWindow::quitApp()          { QApplication::quit(); }

void MainWindow::chooseDataset()    { QMessageBox::information(this, "Choose Dataset", "Choose Dataset triggered."); }
void MainWindow::chooseAlgorithms() { QMessageBox::information(this, "Choose Algorithms", "Choose Algorithms triggered."); }

void MainWindow::plot_1()            { QMessageBox::information(this, "Plot_1", "Plot_1 triggered."); }
void MainWindow::plot_2()            { QMessageBox::information(this, "Plot_2", "Plot_2 triggered."); }
void MainWindow::plot_3()            { QMessageBox::information(this, "Plot_3", "Plot_3 triggered."); }

void MainWindow::diagram_1()         { QMessageBox::information(this, "Diagram_1", "Diagram_1 triggered."); }
void MainWindow::diagram_2()         { QMessageBox::information(this, "Diagram_2", "Diagram_2 triggered."); }
void MainWindow::diagram_3()         { QMessageBox::information(this, "Diagram_3", "Diagram_3 triggered."); }

void MainWindow::setOfPlots()       { QMessageBox::information(this, "Set of Plots", "Set of Plots triggered."); }

void MainWindow::runExecute()       { QMessageBox::information(this, "Run / Execute", "Run / Execute triggered."); }

void MainWindow::showVersion()    { QMessageBox::information(this, "Version", "Data Science Application v1.0"); }

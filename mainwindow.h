#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

/*public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
*/

private slots:
    void newOutput();
    void openLast();
    void saveOutput();
    void closeWindow();
    void quitApp();

    void chooseDataset();
    void chooseAlgorithms();

    void plot_1();
    void plot_2();
    void plot_3();
    void diagram_1();
    void diagram_2();
    void diagram_3();
    void setOfPlots();

    void runExecute();
    void showVersion();


private:
    Ui::MainWindow *ui;
    void setupMenus();
};
#endif // MAINWINDOW_H

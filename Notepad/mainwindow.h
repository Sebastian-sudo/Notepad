#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionNew_triggered();

  void on_actionOpen_triggered();

  void on_actionSave_2_triggered();

  void on_actionSave_as_triggered();

  void on_actionCut_triggered();

  void on_actionCopy_triggered();

  void on_actionPaste_triggered();

  void on_action_6_triggered();

  void on_action_7_triggered();

  void on_actionAbout_App_triggered();

private:
  Ui::MainWindow *ui;
  QString file_path;
};
#endif // MAINWINDOW_H

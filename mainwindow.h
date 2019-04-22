#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<string>
#include<QSystemTrayIcon>
#include<QWizard>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QWizardPage * createPage1();
    QWizardPage * createPage2();
    QWizardPage * createPage3();
    QWizardPage * createPage4();

public:
    std::string detectionImgFile;

private slots:
      void pedestrainReadImg();//读取图片
    void detectionPedestrain();//行人检测
    void detectionShowImg();//展示检测结果
    void detectionSaveImg();//保存检测结果
    void on_action_D_triggered();
    void on_action_U_triggered();
    void on_action_Bug_triggered();
    void on_action_A_triggered();
};

#endif // MAINWINDOW_H

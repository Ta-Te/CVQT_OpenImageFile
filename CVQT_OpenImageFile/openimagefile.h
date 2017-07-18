#ifndef OPENIMAGEFILE_H
#define OPENIMAGEFILE_H

#include <QMainWindow>
#include <QFileDialog>
#include <opencv2/opencv.hpp>

namespace Ui {
class OpenImageFile;
}

class OpenImageFile : public QMainWindow
{
    Q_OBJECT

public:
    explicit OpenImageFile(QWidget *parent = 0);
    ~OpenImageFile();

private slots:
    void on_pushButton_clicked();

    void on_action_3_triggered();

    void on_actionExit_2_triggered();

    void on_actionExit_triggered();

private:
    Ui::OpenImageFile *ui;
};

#endif // OPENIMAGEFILE_H

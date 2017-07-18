#include "openimagefile.h"
#include "ui_openimagefile.h"

OpenImageFile::OpenImageFile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OpenImageFile)
{
    ui->setupUi(this);
}

OpenImageFile::~OpenImageFile()
{
    delete ui;
}

void OpenImageFile::on_pushButton_clicked()
{
    cv::Mat image;


    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), ".",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp"));

    if(fileName != NULL)
    {
        image = cv::imread(fileName.toStdString().data());
        cvtColor(image, image, 4 );  // 4 for original CV_BGR2RGB

        // Qt image
        QImage img = QImage((const unsigned char*) (image.data),
                            image.cols, image.rows, QImage::Format_RGB888);

        // Set the background color of label
        ui->label->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
        // Display on label
        ui->label->setPixmap(QPixmap::fromImage(img));
        // Resize the label to fit the image
        ui->label->resize(ui->label->pixmap()->size());
    }
}

void OpenImageFile::on_action_3_triggered()
{
    OpenImageFile::on_pushButton_clicked();
}

void OpenImageFile::on_actionExit_2_triggered()
{
    close();
}

void OpenImageFile::on_actionExit_triggered()
{

}

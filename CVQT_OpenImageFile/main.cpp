#include "openimagefile.h"
#include <QApplication>

using namespace cv;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenImageFile w;
    w.show();

    return a.exec();
}

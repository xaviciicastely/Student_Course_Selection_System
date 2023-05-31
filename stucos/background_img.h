#ifndef BACKGROUND_IMG_H
#define BACKGROUND_IMG_H

#endif // BACKGROUND_IMG_H

#include <QMainWindow>

class BackGroundWidget1: public QFrame
{
        Q_OBJECT
    public:
        BackGroundWidget();
};

BackGroundWidget1::BackGroundWidget1()
{
    resize(800,600);
    QPixmap pixmap(":/images/xingkong01.jpg");
    QPalette palette;
    palette.setBrush(this->backgroundRole(),QBrush(pixmap));
    setPalette(palette);
    setMask(pixmap.mask());  //可以将图片中透明部分显示为透明的
    setAutoFillBackground(true);

    setWindowOpacity(0.9); //设置widget窗体透明度
}

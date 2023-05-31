#include "qcomboboxex.h"

ComboBoxEx::ComboBoxEx(QWidget *parent)
    : QComboBox(parent)
{
}

void ComboBoxEx::adjustItemWidth()
{
    //qDebug() << ft.family() << ft.pointSize() << ft.pixelSize();
    QFontMetrics fm(this->font());
    QRect rect;
    int max_len = 0;

    for (int i = 0; i < this->count(); i++)
    {
        rect = fm.boundingRect(this->itemText(i)); //获得字符串所占的像素大小
        if (max_len < rect.width())
        {
            max_len = rect.width();
        }
    }

    max_len *= 1.2;
    int w = qMax(max_len, this->width());
    this->view()->setFixedWidth(w);
}

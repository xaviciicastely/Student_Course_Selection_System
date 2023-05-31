#ifndef COMBOBOXEX_H
#define COMBOBOXEX_H

#include <QComboBox>

class ComboBoxEx : public QComboBox
{
    Q_OBJECT
public:
    ComboBoxEx(QWidget *parent = 0);

public:
    void adjustItemWidth();
};

#endif // COMBOBOXEX_H

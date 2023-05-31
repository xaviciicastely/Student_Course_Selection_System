#ifndef QCOMBOBOXEX_H
#define QCOMBOBOXEX_H

#include <QComboBox>

class qComboBoxEx : public QComboBox
{
    Q_OBJECT
public:
    ComboBoxEx(QWidget *parent = 0);

public:
    void adjustItemWidth();
};

#endif // COMBOBOXEX_H
#endif // QCOMBOBOXEX_H

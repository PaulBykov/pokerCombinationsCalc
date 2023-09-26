#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItem>
#include "ui_widget.h"

typedef unsigned short ush;


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public slots:
    void handleButtonClicked();

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QStandardItemModel* model;
};

#endif // WIDGET_H

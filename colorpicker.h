#ifndef COLORPICKER_H
#define COLORPICKER_H
#include <QWidget>

class ColorPicker : public QWidget
{
    Q_OBJECT
private:
    int r;
    int g;
    int b;
    int a;
public:
    explicit ColorPicker(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
    void set_r(int _r);
    void set_g(int _g);
    void set_b(int _b);
    void set_a(int _a);
};

#endif // COLORPICKER_H

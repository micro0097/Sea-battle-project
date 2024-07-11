#ifndef MAP_H
#define MAP_H

#include <QMainWindow>

namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = nullptr);
    ~Map();

private slots:
    void coordinateB(int x, int y);
    void on_pushButton_clicked();
private:
    Dialogformap *dialogformap;

private:
    Ui::Map *ui;
};

#endif // MAP_H

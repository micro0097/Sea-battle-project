#ifndef DIALOGFORMAP_H
#define DIALOGFORMAP_H

#include <QDialog>

namespace Ui {
class Dialogformap;
}

class Dialogformap : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogformap(QWidget *parent = nullptr);
    ~Dialogformap();

private slots:
    void on_buttonBox_accepted();

signals:
    void setcoordinate(int,int);
private:
    Ui::Dialogformap *ui;
};


#endif // DIALOGFORMAP_H

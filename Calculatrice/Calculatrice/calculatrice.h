#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculatrice; }
QT_END_NAMESPACE

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_Egal_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Additionner_clicked();

    void on_pushButton_Soustraire_clicked();

    void on_pushButton_Multiplier_clicked();

    void on_pushButton_Diviser_clicked();

    void on_pushButton_Effacer_clicked();

private:
    Ui::Calculatrice *ui;
};
#endif // CALCULATRICE_H

#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QJSEngine>

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}


void Calculatrice::on_pushButton_1_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "1");
}


void Calculatrice::on_pushButton_2_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "2");
}


void Calculatrice::on_pushButton_3_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "3");
}


void Calculatrice::on_pushButton_4_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "4");
}


void Calculatrice::on_pushButton_5_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "5");
}


void Calculatrice::on_pushButton_6_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "6");
}


void Calculatrice::on_pushButton_7_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "7");
}


void Calculatrice::on_pushButton_8_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "8");
}


void Calculatrice::on_pushButton_9_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "9");
}


void Calculatrice::on_pushButton_0_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "0");
}


void Calculatrice::on_pushButton_Egal_clicked()
{
    QJSEngine expression;
    ui->lineEditAfficheur->setText(expression.evaluate(ui->lineEditAfficheur->text()).toString());
}

void Calculatrice::on_pushButton_Additionner_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "+");
}


void Calculatrice::on_pushButton_Soustraire_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "-");
}


void Calculatrice::on_pushButton_Multiplier_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "*");
}


void Calculatrice::on_pushButton_Diviser_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "/");
}


void Calculatrice::on_pushButton_Effacer_clicked()
{
    ui->lineEditAfficheur->clear();
}


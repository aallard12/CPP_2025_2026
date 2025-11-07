#include "calculatricev2.h"
#include "ui_calculatricev2.h"
#include <QJSEngine>

CalculatriceV2::CalculatriceV2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatriceV2)
{
    ui->setupUi(this);

    // QObject::connect(ui->pushButton_0,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_1,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_2,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_3,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_4,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_5,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_6,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_7,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_8,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_9,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_Additionner,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_Diviser,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_Multiplier,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);
    // QObject::connect(ui->pushButton_Soustraire,&QPushButton::clicked,this,&CalculatriceV2::onQPushButtonClicked);

    QList<QPushButton*> allButtons = this->findChildren<QPushButton*>();
    foreach(QPushButton* button, allButtons) {
        if(button->text() != "=" && button->text() != "C") {
            connect(button, &QPushButton::clicked, this, &CalculatriceV2::onQPushButtonClicked);
        }
    }
}

CalculatriceV2::~CalculatriceV2()
{
    delete ui;
}

void CalculatriceV2::onQPushButtonClicked()
{
    QPushButton *touche;
    touche = qobject_cast<QPushButton*>(sender());

    QString valTouche = touche->text();

    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text() + valTouche);
}

void CalculatriceV2::on_pushButton_Effacer_clicked()
{
    ui->lineEditAfficheur->clear();
}


void CalculatriceV2::on_pushButton_Egal_clicked()
{
    QJSEngine expression;
    ui->lineEditAfficheur->setText(expression.evaluate(ui->lineEditAfficheur->text()).toString());
}


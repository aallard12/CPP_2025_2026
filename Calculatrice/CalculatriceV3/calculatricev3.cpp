#include "calculatricev3.h"
#include "ui_calculatricev3.h"
#include <QJSEngine>

CalculatriceV3::CalculatriceV3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatriceV3)
    , NB_TOUCHES(16)
{
    ui->setupUi(this);

    const QString tableDesSymboles[ ] = {"7", "8", "9", "+" ,"4", "5", "6", "-", "1", "2", "3", "*",
                                         "C", "0", "=", "/"};
    grille = new QGridLayout;
    afficheur = new QLineEdit;
    afficheur->setMinimumHeight(50);
    afficheur->setPlaceholderText("0");
    afficheur->setReadOnly(true);
    afficheur->setStyleSheet("background-color: rgb(0,0,0); color: rgb(255, 255, 255); font-size: 16px;");
    touches = new QPushButton*[NB_TOUCHES];
    grille->addWidget(afficheur,0,0,1,4);
    int indice = 0;

    for (int ligne = 1; ligne < 5; ligne ++){
        for (int colonne = 0; colonne < 4; colonne ++){

            touches[indice] = new QPushButton;
            touches[indice]->setText(tableDesSymboles[indice]);
            touches[indice]->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.885, y2:0.863636, stop:0.242291 rgba(51, 51, 51, 255), stop:0.828194 rgba(255, 19, 19, 255)); "
                                           "font: bold; font-size: 16px;");
            touches[indice]->setMinimumSize(100,50);
            touches[indice]->setMaximumSize(100,50);
            grille->addWidget(touches[indice],ligne,colonne);
            QObject::connect(touches[indice],&QPushButton::clicked,this,&CalculatriceV3::onQPushButtonClicked);
            indice ++;
        }
    }



    this->setLayout(grille);
}

CalculatriceV3::~CalculatriceV3()
{
    delete ui;
}

void CalculatriceV3::onQPushButtonClicked()
{
    QPushButton *touche;
    touche = qobject_cast<QPushButton*>(sender());

    QString valTouche = touche->text();

    if (valTouche == "=") {
        QJSEngine expression;
        afficheur->setText(expression.evaluate(afficheur->text()).toString());
    }
    else {
        afficheur->setText(afficheur->text() + valTouche);
    }

    if (valTouche == "C") {
        afficheur->clear();
    }

}



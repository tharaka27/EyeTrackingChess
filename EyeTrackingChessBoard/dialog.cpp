#include "dialog.h"
#include "ui_dialog.h"
#include "QFont"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setStylesheet();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setStylesheet()
{
     ui->display_text->setStyleSheet("QLabel { background-color : red; color : blue; font: 16pt;}");
}

void Dialog::on_A0_clicked()
{
    QString output = "A0";
    ui->display_text->setText(output);
    //setStylesheet();

}

void Dialog::on_A1_clicked()
{
    QString output = "A1";
    ui->display_text->setText(output);
}
void Dialog::on_A2_clicked()
{
    QString output = "A2";
    ui->display_text->setText(output);
}
void Dialog::on_A3_clicked()
{
    QString output = "A3";
    ui->display_text->setText(output);
}
void Dialog::on_A4_clicked()
{
    QString output = "A4";
    ui->display_text->setText(output);
}
void Dialog::on_A5_clicked()
{
    QString output = "A5";
    ui->display_text->setText(output);
}

void Dialog::on_A6_clicked()
{
    QString output = "A6";
    ui->display_text->setText(output);
}

void Dialog::on_B0_clicked()
{
    QString output = "B0";
    ui->display_text->setText(output);
}

void Dialog::on_B1_clicked()
{
    QString output = "B1";
    ui->display_text->setText(output);
}
void Dialog::on_B2_clicked()
{
    QString output = "B2";
    ui->display_text->setText(output);
}
void Dialog::on_B3_clicked()
{
    QString output = "B3";
    ui->display_text->setText(output);
}
void Dialog::on_B4_clicked()
{
    QString output = "B4";
    ui->display_text->setText(output);
}
void Dialog::on_B5_clicked()
{
    QString output = "B5";
    ui->display_text->setText(output);
}

void Dialog::on_B6_clicked()
{
    QString output = "B6";
    ui->display_text->setText(output);
}

void Dialog::on_C0_clicked()
{
    QString output = "C0";
    ui->display_text->setText(output);
}

void Dialog::on_C1_clicked()
{
    QString output = "C1";
    ui->display_text->setText(output);
}
void Dialog::on_C2_clicked()
{
    QString output = "C2";
    ui->display_text->setText(output);
}
void Dialog::on_C3_clicked()
{
    QString output = "C3";
    ui->display_text->setText(output);
}
void Dialog::on_C4_clicked()
{
    QString output = "C4";
    ui->display_text->setText(output);
}
void Dialog::on_C5_clicked()
{
    QString output = "C5";
    ui->display_text->setText(output);
}

void Dialog::on_C6_clicked()
{
    QString output = "C6";
    ui->display_text->setText(output);
}

void Dialog::on_D0_clicked()
{
    QString output = "D0";
    ui->display_text->setText(output);
}

void Dialog::on_D1_clicked()
{
    QString output = "D1";
    ui->display_text->setText(output);
}
void Dialog::on_D2_clicked()
{
    QString output = "D2";
    ui->display_text->setText(output);
}
void Dialog::on_D3_clicked()
{
    QString output = "D3";
    ui->display_text->setText(output);
}
void Dialog::on_D4_clicked()
{
    QString output = "D4";
    ui->display_text->setText(output);
}
void Dialog::on_D5_clicked()
{
    QString output = "D5";
    ui->display_text->setText(output);
}

void Dialog::on_D6_clicked()
{
    QString output = "A6";
    ui->display_text->setText(output);
}

void Dialog::on_E0_clicked()
{
    QString output = "E0";
    ui->display_text->setText(output);
}

void Dialog::on_E1_clicked()
{
    QString output = "E1";
    ui->display_text->setText(output);
}
void Dialog::on_E2_clicked()
{
    QString output = "E2";
    ui->display_text->setText(output);
}
void Dialog::on_E3_clicked()
{
    QString output = "E3";
    ui->display_text->setText(output);
}
void Dialog::on_E4_clicked()
{
    QString output = "E4";
    ui->display_text->setText(output);
}
void Dialog::on_E5_clicked()
{
    QString output = "E5";
    ui->display_text->setText(output);
}

void Dialog::on_E6_clicked()
{
    QString output = "E6";
    ui->display_text->setText(output);
}

void Dialog::on_F0_clicked()
{
    QString output = "F0";
    ui->display_text->setText(output);
}

void Dialog::on_F1_clicked()
{
    QString output = "F1";
    ui->display_text->setText(output);
}
void Dialog::on_F2_clicked()
{
    QString output = "F2";
    ui->display_text->setText(output);
}
void Dialog::on_F3_clicked()
{
    QString output = "F3";
    ui->display_text->setText(output);
}
void Dialog::on_F4_clicked()
{
    QString output = "F4";
    ui->display_text->setText(output);
}
void Dialog::on_F5_clicked()
{
    QString output = "F5";
    ui->display_text->setText(output);
}

void Dialog::on_F6_clicked()
{
    QString output = "F6";
    ui->display_text->setText(output);
}

void Dialog::on_G0_clicked()
{
    QString output = "G0";
    ui->display_text->setText(output);
}

void Dialog::on_G1_clicked()
{
    QString output = "G1";
    ui->display_text->setText(output);
}
void Dialog::on_G2_clicked()
{
    QString output = "G2";
    ui->display_text->setText(output);
}
void Dialog::on_G3_clicked()
{
    QString output = "G3";
    ui->display_text->setText(output);
}
void Dialog::on_G4_clicked()
{
    QString output = "G4";
    ui->display_text->setText(output);
}
void Dialog::on_G5_clicked()
{
    QString output = "G5";
    ui->display_text->setText(output);
}

void Dialog::on_G6_clicked()
{
    QString output = "G6";
    ui->display_text->setText(output);
}

#include "FingerPrint.h"
#include "ui_FingerPrint.h"
#include "easylogging++.h"

FingerPrint::FingerPrint(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FingerPrint)
{
    ui->setupUi(this);

}

FingerPrint::~FingerPrint()
{
    delete ui;
}

void FingerPrint::on_m_btnClose_clicked()
{
    close();
}

void FingerPrint::on_m_btnNext_clicked()
{

}

void FingerPrint::on_actionzhuce_triggered()
{
    ui->m_DisWidget->setCurrentIndex(0);
}

void FingerPrint::on_actionren_triggered()
{
    ui->m_DisWidget->setCurrentIndex(1);
}

void FingerPrint::on_m_btnSrcImg_clicked()
{

}

void FingerPrint::on_m_btnOriFild_clicked()
{

}

void FingerPrint::on_m_btnMatude_clicked()
{

}

void FingerPrint::on_m_btnSegment_clicked()
{

}

void FingerPrint::on_m_btnEnhance_clicked()
{

}

void FingerPrint::on_m_btnTexture_clicked()
{

}

void FingerPrint::on_m_btnBinary_clicked()
{

}

void FingerPrint::on_m_btnThin_clicked()
{

}

void FingerPrint::on_m_btnDebur_clicked()
{

}

void FingerPrint::on_m_btnMinutiae_clicked()
{

}
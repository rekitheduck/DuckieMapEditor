#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :  m_ui(std::make_unique<Ui::MainWindow>()){
    m_ui->setupUi(this);
}
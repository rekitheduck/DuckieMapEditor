#pragma once

#include <memory>

#include <QMainWindow>

#include "ui_MainWindow.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow() {};
private:
    std::unique_ptr<Ui::MainWindow> m_ui;
};

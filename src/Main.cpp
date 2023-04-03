#include <QApplication>

#include "MainWindow.h"

int main(int argc, char** argv) {
    QApplication application(argc, argv);
    application.setApplicationName("Duckie Map Editor");
    application.setApplicationVersion("1.0.0");

    MainWindow main_window;

    main_window.show();

    application.exec();

    return 0;
}

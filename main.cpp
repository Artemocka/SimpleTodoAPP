#include "MainWindow.h"

int main(int argc, char* argv[]) {
    QApplication _a(argc, argv);
    MainWindow *window = new MainWindow();
    window->show();
    return QApplication::exec();
}

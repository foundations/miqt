#include "binding.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>

PQApplication QApplication_new(int argc, char** argv) {
    return new QApplication(argc, argv);
}

PQWidget QWidget_new() {
    return new QWidget();
}

void QWidget_show(PQWidget self) {
    static_cast<QWidget*>(self)->show();    
}

PQPushButton QPushButton_new(const char* label, PQWidget parent) {
    return new QPushButton(label, static_cast<QWidget*>(parent));
}

void QPushButton_show(PQPushButton self) {
    static_cast<QPushButton*>(self)->show();
}

int QApplication_exec(PQApplication self) {
    return static_cast<QApplication*>(self)->exec();
}

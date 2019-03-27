#include <QPlainTextEdit>
#include <QApplication>

#include "forms.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TestClass* test = new TestClass();

    return a.exec();
}

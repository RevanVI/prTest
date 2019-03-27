#include "ProjectTestForms.h"

/*
MainWindow::MainWindow(QApplication* app)
{
    wgt = new QWidget();
    this->app = app;
    MainMenu();
}

void MainWindow::MainMenu()
{
    QPushButton* create = new QPushButton("Создать тест");
    QPushButton* start = new QPushButton("Пройти тест");
    QPushButton* stat = new QPushButton("Статистика");
    QPushButton* exit = new QPushButton("Выход");
    QObject::connect(exit, SIGNAL(clicked(bool)), app, SLOT(quit()));

    QVBoxLayout* layt = new QVBoxLayout();
    layt->addWidget(create);
    layt->addWidget(start);
    layt->addWidget(stat);
    layt->addWidget(exit);

    wgt->setLayout(layt);
    wgt->show();
}
*/

TestClass::TestClass()
{
    lbl = new QLabel("str");
    lbl->show();
}

TestClass::~TestClass()
{
    delete lbl;
}

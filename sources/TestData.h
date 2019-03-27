#pragma once
#include <QString>
struct Question
{
    QString text;
    qint32 ansCount;
    QString* answers;
    QString rightAns;
};


class TestData
{
private:
    QString testName;
    qint32 testType;
    qint32 questCount;
    Question* questions;

    qint32 gradeCount;
    qint32* grades;
    QString* grNames;

public:
    TestData();
    ~TestData();

    QString* getName();
    qint32 getType();
    qint32 getQuestCount();
    qint32 getGradeCount();

    Question* getQuest(qint32 questNum);
    qint32 getAnsCount(Question* quest);

    qint32* getGrades();
    QString* getGrNames();
};





#include "TestData.h"


TestData::TestData()
{
    this->questions = nullptr;
    this->testType = 0;
    this->questCount = 0;
}

TestData::~TestData()
{
    for (qint32 i = 0; i < questCount; ++i)
        delete questions[i].answers;
    delete[] questions;
    delete[] grades;
    delete[] grNames;
}

QString* TestData::getName()
{
    return &testName;
}

qint32 TestData::getType()
{
    return testType;
}

qint32 TestData::getQuestCount()
{
    return questCount;
}

qint32 TestData::getGradeCount()
{
    return gradeCount;
}

Question* TestData::getQuest(qint32 questNum)
{
    return &questions[questNum];
}

qint32 TestData::getAnsCount(Question *quest)
{
    return quest->ansCount;
}

qint32* TestData::getGrades()
{
    return grades;
}

QString* TestData::getGrNames()
{
    return grNames;
}

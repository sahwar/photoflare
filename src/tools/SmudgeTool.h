#ifndef SMUDGETOOL_H
#define SMUDGETOOL_H

#include "Tool.h"

class SmudgeToolPrivate;

class SmudgeTool : public Tool
{
public:
    SmudgeTool(QObject *parent = 0);
    ~SmudgeTool();

    QCursor getCursor();
    void setRadius(int radius);

private:
    SmudgeToolPrivate *d;
};

#endif // SMUDGETOOL_H
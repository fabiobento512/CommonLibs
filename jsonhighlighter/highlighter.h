#ifndef HIGHLIGHTER_H
#define HIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextCharFormat>

// Downloaded from here:
// https://github.com/isomoar/json-editor/blob/master/syntaxhighlightening/highlighter.cpp

class Highlighter: public QSyntaxHighlighter
{
public:
     Highlighter(QTextDocument *parent = 0);
protected:
     struct HighlightingRule
     {
         QRegExp pattern;
         QTextCharFormat format;
     };
     QVector<HighlightingRule> rules;


protected:
    void highlightBlock(const QString &text);
};

#endif // HIGHLIGHTER_H

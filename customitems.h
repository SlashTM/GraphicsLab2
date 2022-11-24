#ifndef CUSTOMQTABLEITEM_H
#define CUSTOMQTABLEITEM_H

#include <QTableWidgetItem>
#include <QObject>

class NameItem : public QTableWidgetItem
{
public:
    QString filePath;
    NameItem(const QString& data, const QString& _filepath);
};

class SizeItem : public QTableWidgetItem
{
public:
    int size_a, size_b;
    SizeItem(const QString& data, int _size_a, int _size_b);
    bool operator<(const QTableWidgetItem& other) const;
};

#endif // CUSTOMQTABLEITEM_H

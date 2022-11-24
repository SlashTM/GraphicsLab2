#include "customitems.h"

NameItem::NameItem(const QString& data, const QString& _filepath):
    QTableWidgetItem(data)
{
    this->filePath = _filepath;
}

SizeItem::SizeItem(const QString& data, int _size_a, int _size_b):
    QTableWidgetItem(data)
{
    size_a = _size_a;
    size_b = _size_b;
}
bool SizeItem::operator<(const QTableWidgetItem& oth) const
{
    const SizeItem *other = dynamic_cast<const SizeItem*>(&oth);
    return size_a * size_b < other->size_a * other->size_b;
}

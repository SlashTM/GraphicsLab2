#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <map>
#include <set>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_selectFolderButton_clicked();

    void on_selectFilesButton_clicked();

    void on_clearButton_clicked();

    void tableItemClicked(int row, int column);

private:
    std::map<QString, QString> compression;
    void AppendDataIntoTable(const QStringList &list, bool isDir = false);
    const int messageTimeout = 5000;
    std::map<QString, std::set<QString>> fileDirs;
    QString lastDir = "/";
    Ui::MainWindow *ui;
    QStringList dirFilter;
};
#endif // MAINWINDOW_H

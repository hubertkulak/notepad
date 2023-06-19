#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); //konstruktor jesli parent = 0 to widzet nie ma rodzica
    ~MainWindow(); //destruktor



private slots:
    void NewDocument();

    void open();

    void save();

    void saveAs();

    void print();

    void exit();

    void copy();

    void cut();

    void paste();

    void undo();

    void redo();

    void selectFont();

    void setFontBold(bool bold);

    void setFontUnderline(bool underline);

    void setFontItalic(bool italic);

    void about();

    void on_actionNew_triggered();

private:
    Ui::MainWindow *ui; //deklaruje zmienną członka który jest wskaźnikiem na klasę notepad ui
    QString currentFile;
};

#endif // MAINWINDOW_H

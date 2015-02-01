#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString labelText();
    void setLabelText(const QString &string);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void finished(QNetworkReply* object);
private slots:
    void replyFinished(QNetworkReply* object);
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

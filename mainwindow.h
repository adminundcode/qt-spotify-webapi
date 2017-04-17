#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QOAuth2AuthorizationCodeFlow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void granted();

    void authStatusChanged (QAbstractOAuth::Status status);
    void on_actionGrant_triggered();

    void on_actionGet_User_Information_triggered();

    void on_actionGet_Playlists_triggered();

private:
    Ui::MainWindow *ui;

    QOAuth2AuthorizationCodeFlow spotify;
    bool isGranted;
    QString userName;
};

#endif // MAINWINDOW_H

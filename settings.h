#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

namespace Ui {
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    void setUsername(const QString& name);


private slots:
    void on_PBhome_clicked();

    void on_PBwarehouse_clicked();

    void on_PBactivity_clicked();

    void on_pushButton_clicked();

private:
    Ui::Settings *ui;
    static QString m_username; // Declare the static member variable
    void showNameFromDatabase();
};

#endif // SETTINGS_H

#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);

    ~Home();
    void setUsername(const QString& name);

private slots:
    void on_PBwarehouse_clicked();

    void on_PBactivity_clicked();

    void on_PBsettings_clicked();

private:

    Ui::Home *ui;
    static QString m_username;  // Declare static member variable
    void showNameFromDatabase();
};

#endif // HOME_H

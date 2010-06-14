#include <QApplication>
#include "jmplayer.h"
//
int main(int argc, char ** argv)
{
    QApplication app( argc, argv );
    Jmplayer win;
    win.show(); 
    app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
    return app.exec();
}

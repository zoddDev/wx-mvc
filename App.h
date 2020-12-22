//
// Created by zodd on 12/22/20.
//

#ifndef WXWIDGETSHELLOWORLD_APP_H
#define WXWIDGETSHELLOWORLD_APP_H

// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class App : public wxApp
{
    virtual bool OnInit();
};


#endif //WXWIDGETSHELLOWORLD_APP_H

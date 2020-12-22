#include "InitialFrame.h"
#include <wx/menu.h>
#include <wx/log.h>
#include <wx/wx.h>

InitialFrame::InitialFrame() : wxFrame(NULL, wxID_ANY, "Hello World")
{
    // MENU FILE
    menu_file = new wxMenu;
    menu_file->Append(ID_Hello, "&Hello...\tCtrl-H",
                      "Help string shown in status bar for this menu item");
    menu_file->AppendSeparator();
    menu_file->Append(wxID_EXIT);

    // MENU HELP
    menu_help = new wxMenu;
    menu_help->Append(wxID_ABOUT);

    // MENU BAR
    menu_bar = new wxMenuBar;
    menu_bar->Append(menu_file, "&File");
    menu_bar->Append(menu_help, "&Help");
    SetMenuBar(menu_bar);

    // STATUS
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}

wxMenu *InitialFrame::get_menu_file()
{
    return menu_file;
}

wxMenuBar *InitialFrame::get_menu_bar()
{
    return menu_bar;
}

wxMenu *InitialFrame::get_menu_help()
{
    return menu_help;
}

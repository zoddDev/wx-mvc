//
// Created by zodd on 12/22/20.
//

#ifndef YOUR_PROJECT_NAME_INITIALFRAME_H
#define YOUR_PROJECT_NAME_INITIALFRAME_H


#include <wx/frame.h>
#include <wx/event.h>

enum ID
{
    ID_Hello = 1,
};

class InitialFrame : public wxFrame
{
public:
    InitialFrame();

    wxMenuBar *get_menu_bar();
    wxMenu *get_menu_file();
    wxMenu *get_menu_help();

private:
    wxMenuBar *menu_bar;
    wxMenu *menu_file;
    wxMenu *menu_help;
};


#endif //YOUR_PROJECT_NAME_INITIALFRAME_H

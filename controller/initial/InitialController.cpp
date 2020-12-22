#include <wx/log.h>
#include <wx/wx.h>
#include "InitialController.h"

InitialController::InitialController()
{
    create_frame();
}

void InitialController::create_frame()
{
    this->frame = new InitialFrame();
    toggle_view();
    create_binds();
}

void InitialController::create_binds()
{
    // HELLO
    get_casted_frame()->Bind(wxEVT_MENU, [=](wxCommandEvent&)
    {
        wxLogMessage("Hello World from Zodd!");
    }, ID_Hello);

    // EXIT
    get_casted_frame()->Bind(wxEVT_MENU, [=](wxCommandEvent&)
    {
        frame->Close(true);
    }, wxID_EXIT);

    // ABOUT
    get_casted_frame()->Bind(wxEVT_MENU, [=](wxCommandEvent&)
    {
        wxMessageBox("This is a wxWidgets Hello World example",
                     "About Hello World", wxOK | wxICON_INFORMATION);
    }, wxID_ABOUT);
}

InitialFrame *InitialController::get_casted_frame()
{
    return (InitialFrame*) frame;
}

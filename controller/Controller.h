//
// Created by zodd on 12/22/20.
//

#ifndef YOUR_PROJECT_NAME_CONTROLLER_H
#define YOUR_PROJECT_NAME_CONTROLLER_H

#include "../view/initial/InitialFrame.h"

class Controller
{
protected:
    wxFrame *frame;

    virtual void create_frame();

    virtual void create_binds();

private:

public:
    Controller();

    Controller(wxFrame *frame);

    ~Controller();

    virtual bool toggle_view();
};


#endif //YOUR_PROJECT_NAME_CONTROLLER_H

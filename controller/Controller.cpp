#include "Controller.h"

Controller::Controller()
{

}

Controller::Controller(wxFrame *frame)
{
    if (frame != nullptr)
    {
        this->frame = frame;
        this->toggle_view();
    }
}

Controller::~Controller()
{

}

bool Controller::toggle_view()
{
    return frame->m_fsIsShowing ? frame->Show(false) : frame->Show(true);
}

void Controller::create_frame()
{

}

void Controller::create_binds()
{

}

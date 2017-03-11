//
// Created by mike on 11/03/17.
//
#include "wx-3.0/wx/frame.h"
#include "wx-3.0/wx/string.h"
#include "wx-3.0/wx/gdicmn.h"
#include "wx-3.0/wx/event.h"
#include "wx-3.0/wx/menu.h"
#include "wx-3.0/wx/msgdlg.h"
#include "wx-3.0/wx/log.h"

#ifndef PLAYGROUND_STANDARDWINDOW_H
#define PLAYGROUND_STANDARDWINDOW_H


class StandardWindow : public wxFrame {
public:
    StandardWindow(const wxString &title, const wxPoint &pos, const wxSize &size);

private:
    void OnHello(wxCommandEvent &event);

    void OnExit(wxCommandEvent &event);

    void OnAbout(wxCommandEvent &event);

wxDECLARE_EVENT_TABLE();
};


#endif //PLAYGROUND_STANDARDWINDOW_H

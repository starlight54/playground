//
// Created by mike on 11/03/17.
//
#include "../../Headers/Gui/MenuItems.h"
#include "../../Headers/Gui/StandardWindow.h"
#include "../../AppMain.h"

StandardWindow::StandardWindow(const wxString &title, const wxPoint &pos, const wxSize &size) : wxFrame(NULL, wxID_ANY,
                                                                                                        title, pos,
                                                                                                        size) {
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}

void StandardWindow::OnExit(wxCommandEvent &event) {
    Close(true);
}

void StandardWindow::OnAbout(wxCommandEvent &event) {
    wxMessageBox("This is a wxWidgets' Hello world sample",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}

void StandardWindow::OnHello(wxCommandEvent &event) {
    wxLogMessage("Hello world from wxWidgets!");
}

wxBEGIN_EVENT_TABLE(StandardWindow, wxFrame)
                EVT_MENU(Hello, StandardWindow::OnHello)
                EVT_MENU(wxID_EXIT, StandardWindow::OnExit)
                EVT_MENU(wxID_ABOUT, StandardWindow::OnAbout)
wxEND_EVENT_TABLE()
//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
//
// Copyright (C) 2002 - 2013, The pgAdmin Development Team
// This software is released under the PostgreSQL Licence
//
// ctlMessageWindow.cpp - debugger
//
//////////////////////////////////////////////////////////////////////////

#include "pgAdmin3.h"

// wxWindows headers
#include <wx/wx.h>

// App headers
#include "debugger/ctlMessageWindow.h"

IMPLEMENT_CLASS(ctlMessageWindow, wxTextCtrl)

////////////////////////////////////////////////////////////////////////////////
// ctlMessageWindow constructor
//
//  Initialize the grid control and clear it out....
//

ctlMessageWindow::ctlMessageWindow(wxWindow *parent, wxWindowID id)
	: wxTextCtrl(parent, wxID_ANY, wxT(""), wxPoint(0, 0), wxSize(0, 0),
	             wxTE_MULTILINE | wxTE_READONLY)
{
	SetFont(settings->GetSQLFont());
}

////////////////////////////////////////////////////////////////////////////////
// AddMessage()
//
//    Adds the message in the 'DBMS Messages' window.
//

void ctlMessageWindow::AddMessage(wxString message)
{
	AppendText(message + wxT("\n"));
}

////////////////////////////////////////////////////////////////////////////////
// delMessage()
//
//    Removes the given message from the 'DBMS Messages' window.
//

void ctlMessageWindow::DelMessage(const char *name)
{
	SetValue(wxT(""));
}


wxString ctlMessageWindow::GetMessage(int row)
{
	return(GetValue());
}

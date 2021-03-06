// -*- C++ -*- generated by wxGlade 0.3.5.1 on Sat Jan 15 17:29:02 2005

#include "xtnDialogDiffCurrent.h"
#include "xtnApp.h"
#include <wx/filename.h>

xtnDialogDiffCurrent::xtnDialogDiffCurrent(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxDialog(parent, id, title, pos, size, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER)
{
    // begin wxGlade: xtnDialogDiffCurrent::xtnDialogDiffCurrent
    szOptions_staticbox = new wxStaticBox(this, -1, _("Diff Options"));
    lbTitle = new wxStaticText(this, -1, _("xmlDiff current file"));
    lbWith = new wxStaticText(this, -1, _("With "));
    txWith = new wxTextCtrl(this, -1, wxT(""));
    btBrowseFile = new wxButton(this, BT_WITH_BROWSE, _("..."));
    radioBefore = new wxRadioButton(this, -1, _("...as Before file"));
    ioAfter = new wxRadioButton(this, -1, _("... as After file"));
    lbIds = new wxStaticText(this, -1, _("Identifiers "));
    txIds = new wxTextCtrl(this, -1, _("@id,@value"));
    lbIgnore = new wxStaticText(this, -1, _("Ignore Tags"));
    txIgnore = new wxTextCtrl(this, -1, _("@ignore-attr,ignore-tag"));
    cbBeforeValues = new wxCheckBox(this, -1, _("Add before values"));
    lbSep = new wxStaticText(this, -1, _("Separator "));
    txSep = new wxTextCtrl(this, -1, _("|"));
    cbTagChilds = new wxCheckBox(this, -1, _("Tag Childs"));
    btDiff = new wxButton(this, BT_DIFF, _("&Diff !"));
    btCancel = new wxButton(this, BT_CANCEL, _("&Cancel"));

    set_properties();
    do_layout();
	Fit();
    // end wxGlade
}

// Test commentaire

void xtnDialogDiffCurrent::set_properties()
{
    // begin wxGlade: xtnDialogDiffCurrent::set_properties
    SetTitle(_("Diff to current XML File"));
    SetMinSize(wxSize(450, 325));
    txWith->SetToolTip(_("Diff the currently opened XML file with this file."));
    txWith->SetFocus();
    btBrowseFile->SetSize(wxSize(25, -1));
    radioBefore->SetToolTip(_("Use the file specified above as before file, and the currently opened file as after file."));
    radioBefore->SetValue(1);
    ioAfter->SetToolTip(_("Use the file specified above as after file, and the currently opened file as before file."));
    txIds->SetToolTip(_("Use these items as identifiers. (List of items separated by comma, attributes must be prefixed by @, and '.' can be used for the text)"));
    txIgnore->SetToolTip(_("Differences on these items will be ignored"));
    cbBeforeValues->SetToolTip(_("If checked, when a difference occurs, the output file will contain \"before value <separator> after value\""));
    cbBeforeValues->SetValue(1);
    txSep->SetToolTip(_("Text to separate before and after values"));
    cbTagChilds->SetToolTip(_("Recursively tag childs of added or deleted nodes."));
    cbTagChilds->SetValue(1);
    // end wxGlade
}


void xtnDialogDiffCurrent::do_layout()
{
    // begin wxGlade: xtnDialogDiffCurrent::do_layout
    wxBoxSizer* szMain = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* szButtons = new wxBoxSizer(wxHORIZONTAL);
    wxStaticBoxSizer* szOptions = new wxStaticBoxSizer(szOptions_staticbox, wxVERTICAL);
    wxBoxSizer* szSep = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szIgnore = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szIds = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szBefore = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* szWith = new wxBoxSizer(wxHORIZONTAL);
    szMain->Add(lbTitle, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 4);
	szWith->AddSpacer(5);
    szWith->Add(lbWith, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5);
	szWith->AddSpacer(5);
    szWith->Add(txWith, 1, wxALIGN_CENTER_VERTICAL, 0);
    szWith->Add(btBrowseFile, 0, wxALIGN_CENTER_VERTICAL, 0);
    szMain->Add(szWith, 0, wxALL|wxEXPAND|wxALIGN_RIGHT, 3);
    szBefore->Add(radioBefore, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    szBefore->Add(ioAfter, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    szMain->Add(szBefore, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 3);
    szIds->Add(lbIds, 0, wxALIGN_CENTER_VERTICAL, 0);
	szIds->AddSpacer(5);
    szIds->Add(txIds, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOptions->Add(szIds, 0, wxALL|wxEXPAND, 3);
    szIgnore->Add(lbIgnore, 0, wxALIGN_CENTER_VERTICAL, 0);
	szIgnore->AddSpacer(5);
    szIgnore->Add(txIgnore, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOptions->Add(szIgnore, 0, wxALL|wxEXPAND, 3);
	szOptions->AddSpacer(5);
    szOptions->Add(cbBeforeValues, 0, wxALL, 3);
    szSep->Add(lbSep, 0, wxALIGN_CENTER_VERTICAL, 0);
	szSep->AddSpacer(5);
    szSep->Add(txSep, 1, wxALIGN_CENTER_VERTICAL, 0);
    szOptions->Add(szSep, 0, wxALL|wxEXPAND, 3);
	szOptions->AddSpacer(5);
    szOptions->Add(cbTagChilds, 0, wxALL, 3);
    szMain->Add(szOptions, 0, wxALL|wxEXPAND, 3);
    szButtons->Add(btDiff, 0, wxALIGN_CENTER_VERTICAL, 0);
	szButtons->AddSpacer(5);
    szButtons->Add(btCancel, 0, wxALIGN_CENTER_VERTICAL, 0);
	szMain->AddStretchSpacer();
    szMain->Add(szButtons, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 2);
	szMain->AddSpacer(5);
    SetAutoLayout(true);
    SetSizer(szMain);
    Layout();
    // end wxGlade
}


// Event Map Table
BEGIN_EVENT_TABLE(xtnDialogDiffCurrent, wxDialog)
	EVT_BUTTON(xtnDialogDiffCurrent::BT_DIFF, xtnDialogDiffCurrent::OnDiff)
	EVT_BUTTON(xtnDialogDiffCurrent::BT_CANCEL, xtnDialogDiffCurrent::OnCancel)
	EVT_BUTTON(xtnDialogDiffCurrent::BT_WITH_BROWSE, xtnDialogDiffCurrent::OnBrowseWith)
END_EVENT_TABLE()

void xtnDialogDiffCurrent::OnCancel(wxCommandEvent &event)
{
	EndModal(wxID_CANCEL);
}

void xtnDialogDiffCurrent::OnBrowseWith(wxCommandEvent &event)
{
	wxString name;
	wxFileName fn;
	fn.Assign(txWith->GetValue());
	name = wxFileSelector(_("Open a file"), 
		fn.GetPath(wxPATH_GET_VOLUME|wxPATH_GET_SEPARATOR), 
		fn.GetName(),
		wxT(""), 
		XMLTREENAV_FILTERLIST_ALL,
		wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    if (name != wxT(""))
    {
		txWith->SetValue(name);
    }
}

void xtnDialogDiffCurrent::OnDiff(wxCommandEvent &event)
{
	EndModal(wxID_OK);
}


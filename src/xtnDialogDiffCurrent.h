// -*- C++ -*- generated by wxGlade 0.3.5.1 on Sat Jan 15 17:29:02 2005

#include <wx/wx.h>
#include <wx/image.h>
#include <wxmisc/wxUniCompat.h>
#include <libxmldiff/libxmldiff.h>
#include <libxmldiff/lx2_parse.h>

#ifndef XTNDIALOGDIFFCURRENT_H
#define XTNDIALOGDIFFCURRENT_H

// begin wxGlade: dependencies
// end wxGlade



// Getter / Setter
#define DEFINE_setDlgOptions \
	void setDlgOptions(const struct globalOptions opt) \
	{ \
	    vector<xmlstring>::const_iterator id; \
		for(id = opt.ids.begin(); id != opt.ids.end(); id++) \
		{ \
			if (id == opt.ids.begin()) txIds->SetValue(xmlstring2wxString(*id)); \
			  else txIds->SetValue(txIds->GetValue() + wxT(",") + xmlstring2wxString(*id)); \
		} \
		cbBeforeValues->SetValue(opt.beforeValue); \
		txSep->SetValue(xmlstring2wxString(opt.separator)); \
		cbTagChilds->SetValue(opt.tagChildsAddedRemoved); \
	}

#define DEFINE_getDlgOptions \
	void getDlgOptions(struct globalOptions & opt) \
	{ \
		parseOption("--ids", wxString2string(txIds->GetValue()), opt); \
		opt.beforeValue = cbBeforeValues->GetValue(); \
		opt.separator = wxString2xmlstring(txSep->GetValue()); \
		opt.tagChildsAddedRemoved = cbTagChilds->GetValue(); \
	}


class xtnDialogDiffCurrent: public wxDialog {
public:
    // begin wxGlade: xtnDialogDiffCurrent::ids
    enum {
        BT_WITH_BROWSE = 1000,
        BT_DIFF = 1001,
        BT_CANCEL = 1002
    };
    // end wxGlade

    xtnDialogDiffCurrent(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);

private:
    // begin wxGlade: xtnDialogDiffCurrent::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: xtnDialogDiffCurrent::attributes
    wxStaticBox* szOptions_staticbox;
    wxStaticText* lbTitle;
    wxStaticText* lbWith;
    wxTextCtrl* txWith;
    wxButton* btBrowseFile;
    wxRadioButton* radioBefore;
    wxRadioButton* ioAfter;
    wxStaticText* lbIds;
    wxTextCtrl* txIds;
    wxCheckBox* cbBeforeValues;
    wxStaticText* lbSep;
    wxTextCtrl* txSep;
    wxCheckBox* cbTagChilds;
    wxButton* btDiff;
    wxButton* btCancel;
    // end wxGlade

protected:
	// - Actions
	void OnDiff(wxCommandEvent &event);
	void OnCancel(wxCommandEvent &event);
	void OnBrowseWith(wxCommandEvent &event);
	// - Déclaration de la table
    DECLARE_EVENT_TABLE()

public:
	bool isWithAfter() { return ioAfter->GetValue(); }
	wxString withFilename() { return txWith->GetValue(); }
	DEFINE_setDlgOptions;
	DEFINE_getDlgOptions;
};


#endif // XTNDIALOGDIFFCURRENT_H

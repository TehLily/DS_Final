/***************************************************************
* Name : MainFrame.cpp
* Author: Lily Ellison
* Created : 03/26/2023
* Course: CIS 152 - Data Structure
* Version: 1.0
* OS: Windows 10 Home
* IDE: Visual Studio 2019
* Copyright : This is my own original work
* based onspecifications issued by our instructor
* Description : Attmpted GUI for FinalProjectEllison:
*				An app that searches for appropriate courses and
*               registers users when conditions are met.
*				Unfinished
*            Input: User information: name, skill level
*                   and budget
*                   Course information: title, cost, skill level,
*                   max and current capacity
*            Ouput: User information, course information, any errors,
*                   successful registration messages
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/


#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>



//downloaded and installed a library and module to run wxWidgets, but kept crashing my computer and ran out of time
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr,wxID_ANY, title) {
	wxPanel* panel = new wxPanel(this); //panel sits inside frame to provide structure

	wxStaticText* welcome = new wxStaticText(panel, wxID_ANY, "WELCOME!", wxPoint(100, 50));  //a text label of sorts

	wxStaticText* instructions = new wxStaticText(panel, wxID_ANY, "Please enter your information to register.", wxPoint(100, 75));

	wxTextCtrl* nameBox = new wxTextCtrl(panel, wxID_ANY, "Name", wxPoint(100, 100), wxSize(400, -1));  //textbox for user to enter name. Could not figure out syntax to access this entry from a button click event

	wxStaticText* skillText = new wxStaticText(panel, wxID_ANY, "Please select your skill level:", wxPoint(100, 150));
		
	wxArrayString skillOptions; //drop down menu choices
	skillOptions.Add("Novice");
	skillOptions.Add("Apprentice");
	skillOptions.Add("Master");

	wxChoice* skill = new wxChoice(panel, wxID_ANY, wxPoint(150, 175), wxSize(100, -1), skillOptions); //drop down menu
	skill->Select(0);

	wxStaticText* budgetText = new wxStaticText(panel, wxID_ANY, "Please select your budget:", wxPoint(100, 250));

	wxArrayString budgetOptions;  //budget choices
	budgetOptions.Add("$50");
	budgetOptions.Add("$100");
	budgetOptions.Add("$150");
	
	wxRadioBox* budgetRadio = new wxRadioBox(panel, wxID_ANY, "Budget:", wxPoint(150, 275), wxDefaultSize, budgetOptions);  //radiobox buttons to select budget

	wxButton* regButton = new wxButton(panel, wxID_ANY, "Register", wxPoint(400, 350), wxSize(100, 35)); //button to process input (not working)
	wxButton* exitButton = new wxButton(panel, wxID_ANY, "Exit", wxPoint(400, 400), wxSize(100, 35)); //button to close window - got this one to work!

	regButton->Bind(wxEVT_BUTTON, &MainFrame::OnRegButtonClick, this); //attaching event handlers to buttons
	exitButton->Bind(wxEVT_BUTTON, &MainFrame::OnExitButtonClick, this);

	CreateStatusBar(); //status bar mostly used during testing

	/*
	Other widgets I learned but didn't use:
	//wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(120, 150));

	//wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextCtrl - editable", wxPoint(500, 145), wxSize(200, -1));
	//wxListBox* listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), skillOptions);

	*/
	

}

/*
* shows how to access the string in the text box while it's being entered, but I wanted to process the info on a button click
void MainFrame::OnTextChanged(wxCommandEvent& evt) {
	wxString str = wxString::Format("Text: %d", evt.GetString());
	wxLogStatus(str);
}
*/

void MainFrame::OnRegButtonClick(wxCommandEvent& evt) {
	wxLogStatus("Got name"); //wanted something to show that it registered the button click
	//evt.Skip();
}

void MainFrame::OnExitButtonClick(wxCommandEvent& evt) {
	Close(TRUE); //closes window
}


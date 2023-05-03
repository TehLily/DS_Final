/***************************************************************
* Name : MainFrame.h
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

#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame {
public:
	MainFrame(const wxString& title);
	std::string name = "";
	int skillValue;
	int budgetAmt;

private:
	void OnRegButtonClick(wxCommandEvent& evt);
	void OnExitButtonClick(wxCommandEvent& evt);
	
};


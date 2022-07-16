#pragma once

#include "wx/wx.h"


class Factory
{
public:
	wxButton* fabricateButton(wxWindow* parentframe, wxWindowID tri);
};


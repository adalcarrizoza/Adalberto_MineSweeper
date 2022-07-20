#include "Factory.h"

wxButton* Factory::fabricateButton(wxWindow* parentframe, wxWindowID tri) {
	
	

	switch (tri) {
	case 1000: {
		return new wxButton(parentframe, tri, "0", wxPoint(100, 510), wxSize(70, 70));
		break; }
	case 1001: {
		return new wxButton(parentframe, tri, "1", wxPoint(20, 270), wxSize(70, 70));
		break; }
	case 1002: {
		return new wxButton(parentframe, tri, "2", wxPoint(100, 270), wxSize(70, 70));
		break; }
	case 1003: {
		return new wxButton(parentframe, tri, "3", wxPoint(180, 270), wxSize(70, 70));
		break; }
	case 1004: {
		return new wxButton(parentframe, tri, "4", wxPoint(20, 350), wxSize(70, 70));
		break; }
	case 1005: {
		return new wxButton(parentframe, tri, "5", wxPoint(100, 350), wxSize(70, 70));
		break; }
	case 1006: {
		return new wxButton(parentframe, tri, "6", wxPoint(180, 350), wxSize(70, 70));
		break; }
	case 1007: {
		return new wxButton(parentframe, tri, "7", wxPoint(20, 430), wxSize(70, 70));
		break; }
	case 1008: {
		return new wxButton(parentframe, tri, "8", wxPoint(100, 430), wxSize(70, 70));
		break; }
	case 1009: {
		return new wxButton(parentframe, tri, "9", wxPoint(180, 430), wxSize(70, 70));
		break; }
	case 1011: {
		return new wxButton(parentframe, tri, ".", wxPoint(20, 510), wxSize(70, 70));
		break; }
	case 1012: {
		return new wxButton(parentframe, tri, "=", wxPoint(180, 510), wxSize(70, 70));
		break; }
	case 1013: {
		return new wxButton(parentframe, tri, "MOD", wxPoint(20, 190), wxSize(70, 70));
		break; }
	case 1014: {
		return new wxButton(parentframe, tri, "BIN", wxPoint(100, 190), wxSize(70, 70));
		break; }
	case 1015: {
		return new wxButton(parentframe, tri, "HEX", wxPoint(180, 190), wxSize(70, 70));
		break; }
	case 1016: {
		return new wxButton(parentframe, tri, "CE", wxPoint(260, 190), wxSize(70, 70));
		break; }
	case 1017: {
		return new wxButton(parentframe, tri, "/", wxPoint(260, 270), wxSize(70, 70));
		break; }
	case 1018: {
		return new wxButton(parentframe, tri, "*", wxPoint(260, 350), wxSize(70, 70));
		break; }
	case 1019: {
		return new wxButton(parentframe, tri, "-", wxPoint(260, 430), wxSize(70, 70));
		break; }
	case 1020: {
		return new wxButton(parentframe, tri, "+", wxPoint(260, 510), wxSize(70, 70));
		break; }
	case 1021: {
		return new wxButton(parentframe, tri, "neg", wxPoint(340, 190), wxSize(70, 70));
		break; }

	}

	}



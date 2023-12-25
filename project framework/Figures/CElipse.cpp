#include "CElipse.h"

//CElipse::CElipse() {}
CElipse::CElipse(Point p1, Point p2, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	One = p1;
	Two = p2;
}

void CElipse::DrawMe(GUI* pGUI) const
{
	// Call Output::DrawRect to draw a Square on the screen
	pGUI->DrawElipse(One, Two, FigGfxInfo, Selected);
}
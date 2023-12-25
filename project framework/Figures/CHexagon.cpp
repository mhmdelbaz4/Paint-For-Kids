#include "CHexagon.h"


CHexagon::CHexagon(Point point, int len, int height, GfxInfo FigureGfxInfo) : CFigure(FigureGfxInfo)
{
	TopLeft = point;
	SideLength = len;
	Height = height;

}

void CHexagon::DrawMe(GUI* pGUI) const
{
	pGUI->DrawHexagon(TopLeft, SideLength, Height, FigGfxInfo, Selected);
}

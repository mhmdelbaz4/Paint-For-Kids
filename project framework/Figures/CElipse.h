#ifndef CELIPSE_H
#define CELIPSE_H

#include "CFigure.h"

class CElipse : public CFigure
{
private:
	Point One;
	Point Two;

public:
	CElipse();
	CElipse(Point p1, Point p2, GfxInfo FigureGfxInfo);
	virtual void DrawMe(GUI* pOut) const;
	
};

#endif
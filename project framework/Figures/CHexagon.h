#include "CFigure.h"

class CHexagon : public CFigure
{
    int SideLength;
    int Height;
    Point TopLeft;

public:
    CHexagon();
    CHexagon(Point, int, int, GfxInfo FigureGfxInfo);

    void DrawMe(GUI*) const;
};

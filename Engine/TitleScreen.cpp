#include "TitleScreen.h"
#include "Surface.h"

void TitleScreen::Draw(Graphics & gfx)
{
	static const Surface title = Surface::FromFile(L"title.png");
	gfx.DrawSpriteKey(x, y, title, title.GetPixel(0, 0));
}

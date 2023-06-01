#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateTirette(bool state) {
	img_tirette_ok.setVisible(state);
	img_tirette_nok.setVisible(!state);
	auto rect = img_tirette_nok.getRect();
	invalidateRect(rect);
}

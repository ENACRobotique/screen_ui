#include <gui/screen2_screen/Screen2View.hpp>
#include <touchgfx/containers/clock/AnalogClock.hpp>

uint32_t time = 0;

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::handleTickEvent() {
	time += 10;
	uint8_t s = (time/100) % 60;
	uint8_t m = (time / 100) / 60;
	uint8_t h = (time / 100) / 3600;
	clock.setTime24Hour(h, m, s);
}

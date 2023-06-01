#ifndef FRONTENDAPPLICATION_HPP
#define FRONTENDAPPLICATION_HPP

#include <gui_generated/common/FrontendApplicationBase.hpp>
#ifdef SIMULATOR
#include <Windows.h>
#endif

class FrontendHeap;

using namespace touchgfx;

class FrontendApplication : public FrontendApplicationBase
{
public:
    FrontendApplication(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplication() { }

    virtual void handleTickEvent()
    {
        model.tick();
        FrontendApplicationBase::handleTickEvent();
#ifdef SIMULATOR
        this->sampleKeys();
#endif
    }
private:

#ifdef SIMULATOR
	virtual void sampleKeys(){
		if(GetKeyState('T') & 0x8000){
			model.setTirette(true);
		} else {
			model.setTirette(false);
		}

		return;
	}
#endif

};

#endif // FRONTENDAPPLICATION_HPP

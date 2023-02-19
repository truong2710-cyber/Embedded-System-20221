#include <gui/screen1_screen/Screen1View.hpp>
#include <cmsis_os.h>

Screen1View::Screen1View()
{
	tickCount = 0;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
extern osMessageQueueId_t Queue1Handle;
void Screen1View::handleTickEvent()
{
	Screen1ViewBase::handleTickEvent();
	tickCount += 1;
//	image1.setY(tickCount % 320);
	if(tickCount % 5 == 0){
		image2.setVisible(1);
		image3.setVisible(0);
		image4.setVisible(0);
		image5.setVisible(0);
		image6.setVisible(0);
	} else if (tickCount % 5 == 1){
		image2.setVisible(0);
		image3.setVisible(1);
		image4.setVisible(0);
		image5.setVisible(0);
		image6.setVisible(0);
	} else if (tickCount % 5 == 2){
		image2.setVisible(0);
		image3.setVisible(0);
		image4.setVisible(1);
		image5.setVisible(0);
		image6.setVisible(0);
	} else if (tickCount % 5 == 3){
		image2.setVisible(0);
		image3.setVisible(0);
		image4.setVisible(0);
		image5.setVisible(1);
		image6.setVisible(0);
	} else{
		image2.setVisible(0);
		image3.setVisible(0);
		image4.setVisible(0);
		image5.setVisible(0);
		image6.setVisible(1);
	}
	uint8_t res = 0;
	uint32_t count = osMessageQueueGetCount(Queue1Handle);
	if (count > 0)
	{
		osMessageQueueGet(Queue1Handle, &res, NULL, osWaitForever);
		if (res == 'R')
		{
			int16_t x = image1.getX();
			if (x < 190)
			x += 2;
//			if (x > 190){
//				x = 190;
//			}
			image1.setX(x);
		}
	}
	invalidate();
}

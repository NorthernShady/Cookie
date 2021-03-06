#include "View.h"
#include "Controller.h"

View::View ( string appName )
{
	appName_    = appName;
	controller_ = 0;
}

void View::setController ( Controller* controller )
{
	controller_ = controller;
}

Controller* View::getController () const
{
	return controller_;
}

int View::getWidth () const
{
	return width_;
}

int View::getHeight () const
{
	return height_;
}

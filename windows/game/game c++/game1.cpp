#include "Window.h"

Window::Window()
{

}


bool Window::init()
{
    ::RegisterClassEx();


    return true;
}


bool Window::release()
{
    return true;
}


Window::~Window()
{

}
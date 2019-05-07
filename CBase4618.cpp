#include "stdafx.h"
#include "CBase4618.h"


CBase4618::CBase4618(CControl _cctrlz, cv::Mat _canvasz)
{
	_cctrl = _cctrlz;
	_canvas = _canvasz;

}
CBase4618::CBase4618() {}
CBase4618::~CBase4618()
{

}

void CBase4618::update(double &xPosition, double &yPosition)
{

}

void CBase4618::draw(int x, int y)
{

}

void CBase4618::run()
{
	double  x, y;
	double xx, yy;

	int x1 = (_canvas.size().width * 2 / sqrt(2) - _canvas.size().width) / 2;
	int x2 = x1 + _canvas.size().width;

	int y1 = (_canvas.size().height * 2 / sqrt(2) - _canvas.size().height) / 2;
	int y2 = y1 + _canvas.size().height;

	do {
		update(x, y);

		x = x * _canvas.size().width / 100;
		y = y * _canvas.size().height / 100;

		std::cout << x << "   " << y << std::endl;

		xx = x * 2 / sqrt(2) - x1;

		if (xx < 0)
			xx = 0;
		else if (xx > _canvas.size().width)
			xx = _canvas.size().width;

		yy = y *  2 / sqrt(2) - y1;

		if (yy < 0)
			yy = 0;
		else if (yy > _canvas.size().height)
			yy = _canvas.size().height;

		//std::cout << xx << "   " << yy << std::endl;

		draw(xx, yy);
		//draw(x * _canvas.size().width / 100, y * _canvas.size().height / 100);

	} while(cv::waitKey(1) != 'q');
}
/** CSketch.h
 *
 * @brief A class which is used to implement Etch-A-Sketch.
 *
 * This class inherits from the base class called CBase4618.h and
 * overrides the functions.
 *
 * @author Jasdeep Grewal
 *
 * @version 1 -- 7 February 2019
 */
#pragma once
#include "stdafx.h"
#include "CControl.h"
#include "CBase4618.h"

class CSketch : public CBase4618
{
private:
	// future data members
	int _com;
	cv::Size _canvasSize;
	int color ;

public:
	/** Creates constructor for canvas
	*
	* @param Canvas size is initialized
	* @param Comport number is initialized
	*
	* @return Does not return anything
	*/
	CSketch(cv::Size, int);
	~CSketch();
	/** Updates X and Y coordinates
	*
	* @param Gets analog inputs
	* @param Updates them continuously to mimic an Etch-A-Sketch
	*
	* @return Does not return anything
	*/
	void update(double &xPosition, double &yPosition);
	/** Draws lines based on X and Y coordinates
	*
	* @param Repeatedly gets analog inputs and determines X and Y coordinates
	* @param Makes a line using the X and Y coordinates
	*
	* @return Does not return anything
	*/
	void draw(int x, int y);
	/** Button debounce
	*
	* @param Uses number of ticks to debounce pushbutton
	*
	* @return True if button was pressed
	*/
	bool btnPressed(int gpioPin);
};

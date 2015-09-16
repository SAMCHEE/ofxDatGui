/*
    Copyright (C) 2015 Stephen Braitsch [http://braitsch.io]

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#pragma once
#include "ofxDatGuiComponent.h"

class ofxDatGuiBreak : public ofxDatGuiComponent{

    public:
    
        ofxDatGuiBreak(int height = 0, ofxDatGuiFont* font=nullptr) : ofxDatGuiComponent("", font)
        {
            if (height <= 0){
                mRow.height *= .1;
            }   else{
                mRow.height = height;
            }
        }
    
        void draw()
        {
            ofxDatGuiComponent::drawBkgd();
        }
    
        bool hitTest(ofPoint m)
        {
            return false;
        }

};

class ofxDatGuiLabel : public ofxDatGuiComponent{

    public:
        
        ofxDatGuiLabel(string label, ofxDatGuiFont* font=nullptr) : ofxDatGuiComponent(label, font)
        {
            mStripeColor = ofxDatGuiColor::BUTTON_STRIPE;
        }
    
        void draw()
        {
            ofxDatGuiComponent::drawBkgd();
            ofxDatGuiComponent::drawLabel();
            ofxDatGuiComponent::drawStripe();
        }
    
        bool hitTest(ofPoint m)
        {
            return false;
        }
    
    protected:


};
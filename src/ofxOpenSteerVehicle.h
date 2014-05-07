#pragma once

#include "ofxOpenSteer.h"

//using namespace OpenSteer;
using namespace ofxOpenSteer;

class ofxOpenSteerVehicle: public OpenSteer::SimpleVehicle{

    public:
        ofxOpenSteerVehicle();
        ~ofxOpenSteerVehicle();
        
        virtual void reset();
        virtual void update();
        virtual void update(float curTime, float elapsedTime);
        virtual void draw();    
        virtual OpenSteer::Vec3 getSteeringForce(const float elapsedTime);
		ofVec3f getPosition();

    protected:
		OpenSteer::Color color; // XXX Just a convenience in case we want to use the default drawing method
        static OpenSteer::AVGroup neighbors;
};
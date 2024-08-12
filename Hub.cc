/*
 * Hub.cc
 *
 *  Created on: Oct 21, 2021
 *      Author: musma
 */

#include<omnetpp.h>
class Hub:public cSimpleModule
{
protected:
virtual void initialize();
virtual void handleMessage(cMessage *msg);
virtual void finish();
};
    Define_Module(Hub);

    void Hub::initialize()
    {

    }

    void Hub::handleMessage(cMessage *msg)
    {
    cGate *g= msg->getArrivalGate();
    int i;
        for(i=0;i<g->size();i++)
        {
        if(i!=g->getIndex())
        send(msg->dup(),"out",i);
        }
    }

    void Hub::finish()
    {

    }





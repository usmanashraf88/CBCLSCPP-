

#include <string.h>
#include <omnetpp.h>

using namespace omnetpp;

class Location : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(Location);

void Location::initialize()
{
    if (strcmp("loc", getName()) == 0) {
        cMessage *msg = new cMessage("myLoc");
        send(msg, "out");
    }
}

void Location::handleMessage(cMessage *msg)
{
    send(msg, "out"); // send out the message
}


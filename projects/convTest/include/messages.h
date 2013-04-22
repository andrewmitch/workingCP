#ifndef __MESSAGES_H
#define __MESSAGES_H

/********************************************************
* MESSAGES
********************************************************/

typedef enum {
    controllerReadyReq = 1,
    controllerStartReq,
    controllerStopReq,
    controllerPauseReq,
    controllerResumeReq,
    
    platform1PickupReq,
    robotInPickupAck,
    robotInPickupConfirm,
    platform1PickupConfirmed,
    platform1PickupFailed,
    
    robotInDropReq,
    conveyorDropAllowed,
    
    conveyorPickupReq,
    robotOutPickupAck,
    robotOutPickupConfirm,
    conveyorPickupConfirmed,
    conveyorPickupFailed,
    
    robotOutDropReq,
    platform2DropAllowed,
    
    error
} message_t;

#endif

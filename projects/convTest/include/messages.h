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
    robotInDropped,
   
    conveyorPickupReq, // Send pick up request to robot out
    robotOutPickupAck,
    robotOutPickupConfirm,
    conveyorPickupConfirmed,
    conveyorPickupFailed,
    
    robotOutDropReq,
    platform2DropAllowed,
    robotOutDropped,
    
    error
} message_t;

#endif

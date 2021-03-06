
/**
 * libemulation
 * Apple II Interface
 * (C) 2010-2012 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Defines the Apple II interface
 */

#ifndef _APPLEIIIINTERFACE_H
#define _APPLEIIIINTERFACE_H

#include "AppleIIInterface.h"

#define APPLEIII_BANKSIZE           0x8000
#define APPLEIII_SYSTEMBANK         2
#define APPLEIII_SYSTEMBANKADDRESS  (APPLEIII_SYSTEMBANK * APPLEIII_BANKSIZE)

typedef enum
{
    APPLEIII_GET_ENVIRONMENT,
    APPLEIII_GET_ZEROPAGE,
    APPLEIII_GET_APPLEIIMODE,
    APPLEIII_GET_NOT_IONMI,
    APPLEIII_SET_EXTENDEDRAMBANK,
} AppleIIISystemControlMessage;

typedef enum
{
    APPLEIII_ENVIRONMENT_DID_CHANGE,
    APPLEIII_ZEROPAGE_DID_CHANGE,
    APPLEIII_APPLEIIMODE_DID_CHANGE,
} AppleIIISystemControlNotification;

// Apple III environment register
#define APPLEIII_ROMSEL1            (1 << 0)
#define APPLEIII_ROMSEL2            (1 << 1)
#define APPLEIII_NORMALSTACK        (1 << 2)
#define APPLEIII_RAMWP              (1 << 3)
#define APPLEIII_RESETENABLE        (1 << 4)
#define APPLEIII_VIDEOENABLE        (1 << 5)
#define APPLEIII_IOENABLE           (1 << 6)
#define APPLEIII_SLOWSPEED          (1 << 7)

// Apple III ram bank register
#define APPLEIII_NOT_IRQ4           (1 << 4)
#define APPLEIII_NOT_IRQ3           (1 << 5)
#define APPLEIII_NOT_APPLEIIMODE    (1 << 6)
#define APPLEIII_NOT_IRQ            (1 << 7)

// Apple III sound register
#define APPLEIII_BL                 (1 << 6)
#define APPLEIII_NOT_IONMI          (1 << 7)

// Aplpe III keyboard modifiers
#define APPLEIII_ANYKEYDOWN         (1 << 0)
#define APPLEIII_NOT_SHIFT          (1 << 1)
#define APPLEIII_NOT_CONTROL        (1 << 2)
#define APPLEIII_NOT_CAPSLOCK       (1 << 3)
#define APPLEIII_NOT_OPENAPPLE      (1 << 4)
#define APPLEIII_NOT_CLOSEAPPLE     (1 << 5)
#define APPLEIII_KEYBOARD_CONNECTED (1 << 6)
#define APPLEIII_KEY_BIT7           (1 << 7)

typedef enum
{
    APPLEIII_IS_BL = APPLEII_VIDEO_END,
    APPLEIII_UPDATE_CHARACTERSET,
} AppleIIIVideoMessage;

#endif

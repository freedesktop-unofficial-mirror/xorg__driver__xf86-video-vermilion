/**************************************************************************
 * 
 * Copyright (c) Intel Corp. 2007.
 * All Rights Reserved.
 *
 * Intel funded Tungsten Graphics (http://www.tungstengraphics.com) to
 * develop this driver.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * THE COPYRIGHT HOLDERS, AUTHORS AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE 
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 **************************************************************************/
/* Authors: 
 *   Thomas Hellstr�m <thomas-at-tungstengraphics-dot-com>
 */

#include "vermilion.h"
#include "vermilion_reg.h"

/*
 * Add panel timing information and gamma here.
 */

/* SHARP LQ150X1LGN2A */
static VERMILIONPanelRec panel0 = {
    "SHARP LQ150X1LGN2A",
    80000,
    50000,
    1024,
    1024,
    1720,
    1056,
    768,
    768,
    990,
    773,
    23400,
    16000,
    1.0
};

VERMILIONPanelPtr VERMILIONPanels[] = {
    &panel0
};

int VERMILIONNumPanels = sizeof(VERMILIONPanels) / sizeof(VERMILIONPanelPtr);

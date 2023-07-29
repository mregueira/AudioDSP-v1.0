/*
 * File:           C:\Users\Marcelo\Desktop\SigmaFinal\Test\Part2\IC 2\TestPart2_IC_2_PARAM.h
 *
 * Created:        Thursday, February 9, 2023 12:03:32 AM
 * Description:    TestPart2:IC 2 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2023 Analog Devices, Inc. All rights reserved.
 */
#ifndef __TESTPART2_IC_2_PARAM_H__
#define __TESTPART2_IC_2_PARAM_H__


/* Module DC2 - DC Input Entry*/
#define MOD_DC2_COUNT                                  1
#define MOD_DC2_DEVICE                                 "IC2"
#define MOD_DC2_DCINPALG1_ADDR                         0
#define MOD_DC2_DCINPALG1_FIXPT                        0x00800000
#define MOD_DC2_DCINPALG1_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_DC2_DCINPALG1_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

#endif

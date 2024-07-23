/*
 * Component description for USBCORE
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2024-05-07T20:51:46Z */
#ifndef _WBZ65_USBCORE_COMPONENT_H_
#define _WBZ65_USBCORE_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR USBCORE                                      */
/* ************************************************************************** */

/* -------- USBCORE_UOTGIR : (USBCORE Offset: 0x40) (R/W 32) USB OTG Interrupt Status Register -------- */
#define USBCORE_UOTGIR_AVBUS_VLD_Pos          _UINT32_(0)                                          /* (USBCORE_UOTGIR) A-VBUS change indicator bit Position */
#define USBCORE_UOTGIR_AVBUS_VLD_Msk          (_UINT32_(0x1) << USBCORE_UOTGIR_AVBUS_VLD_Pos)      /* (USBCORE_UOTGIR) A-VBUS change indicator bit Mask */
#define USBCORE_UOTGIR_AVBUS_VLD(value)       (USBCORE_UOTGIR_AVBUS_VLD_Msk & (_UINT32_(value) << USBCORE_UOTGIR_AVBUS_VLD_Pos)) /* Assigment of value for AVBUS_VLD in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_AVBUS_VLD_CHANGE_Val _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) Change on usb_a_vbus_vld input detected  */
#define   USBCORE_UOTGIR_AVBUS_VLD_NO_CHANGE_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) No change on usb_a_vbus_vld input detected  */
#define USBCORE_UOTGIR_AVBUS_VLD_CHANGE       (USBCORE_UOTGIR_AVBUS_VLD_CHANGE_Val << USBCORE_UOTGIR_AVBUS_VLD_Pos) /* (USBCORE_UOTGIR) Change on usb_a_vbus_vld input detected Position  */
#define USBCORE_UOTGIR_AVBUS_VLD_NO_CHANGE    (USBCORE_UOTGIR_AVBUS_VLD_NO_CHANGE_Val << USBCORE_UOTGIR_AVBUS_VLD_Pos) /* (USBCORE_UOTGIR) No change on usb_a_vbus_vld input detected Position  */
#define USBCORE_UOTGIR_BSESS_END_Pos          _UINT32_(2)                                          /* (USBCORE_UOTGIR) B-Device VBUS change indicator bit Position */
#define USBCORE_UOTGIR_BSESS_END_Msk          (_UINT32_(0x1) << USBCORE_UOTGIR_BSESS_END_Pos)      /* (USBCORE_UOTGIR) B-Device VBUS change indicator bit Mask */
#define USBCORE_UOTGIR_BSESS_END(value)       (USBCORE_UOTGIR_BSESS_END_Msk & (_UINT32_(value) << USBCORE_UOTGIR_BSESS_END_Pos)) /* Assigment of value for BSESS_END in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_BSESS_END_CHANGE_Val _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) Change on usb_b_sess_end input detected  */
#define   USBCORE_UOTGIR_BSESS_END_NO_CHANGED_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) No change on usb_b_sess_end input detected  */
#define USBCORE_UOTGIR_BSESS_END_CHANGE       (USBCORE_UOTGIR_BSESS_END_CHANGE_Val << USBCORE_UOTGIR_BSESS_END_Pos) /* (USBCORE_UOTGIR) Change on usb_b_sess_end input detected Position  */
#define USBCORE_UOTGIR_BSESS_END_NO_CHANGED   (USBCORE_UOTGIR_BSESS_END_NO_CHANGED_Val << USBCORE_UOTGIR_BSESS_END_Pos) /* (USBCORE_UOTGIR) No change on usb_b_sess_end input detected Position  */
#define USBCORE_UOTGIR_SESVDIF_Pos            _UINT32_(3)                                          /* (USBCORE_UOTGIR) Session Valid Change Indicator bit Position */
#define USBCORE_UOTGIR_SESVDIF_Msk            (_UINT32_(0x1) << USBCORE_UOTGIR_SESVDIF_Pos)        /* (USBCORE_UOTGIR) Session Valid Change Indicator bit Mask */
#define USBCORE_UOTGIR_SESVDIF(value)         (USBCORE_UOTGIR_SESVDIF_Msk & (_UINT32_(value) << USBCORE_UOTGIR_SESVDIF_Pos)) /* Assigment of value for SESVDIF in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_SESVDIF_CHANGE_Val   _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) Change on usb_sess_vld input detected  */
#define   USBCORE_UOTGIR_SESVDIF_NO_CHANGED_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) No change on usb_sess_vld input detected  */
#define USBCORE_UOTGIR_SESVDIF_CHANGE         (USBCORE_UOTGIR_SESVDIF_CHANGE_Val << USBCORE_UOTGIR_SESVDIF_Pos) /* (USBCORE_UOTGIR) Change on usb_sess_vld input detected Position  */
#define USBCORE_UOTGIR_SESVDIF_NO_CHANGED     (USBCORE_UOTGIR_SESVDIF_NO_CHANGED_Val << USBCORE_UOTGIR_SESVDIF_Pos) /* (USBCORE_UOTGIR) No change on usb_sess_vld input detected Position  */
#define USBCORE_UOTGIR_ACTVIF_Pos             _UINT32_(4)                                          /* (USBCORE_UOTGIR) Bus Activity Indicator bit Position */
#define USBCORE_UOTGIR_ACTVIF_Msk             (_UINT32_(0x1) << USBCORE_UOTGIR_ACTVIF_Pos)         /* (USBCORE_UOTGIR) Bus Activity Indicator bit Mask */
#define USBCORE_UOTGIR_ACTVIF(value)          (USBCORE_UOTGIR_ACTVIF_Msk & (_UINT32_(value) << USBCORE_UOTGIR_ACTVIF_Pos)) /* Assigment of value for ACTVIF in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_ACTVIF_DETECT_Val    _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) Activity on the D+, D-, ID, or VBus lines has been detected  */
#define   USBCORE_UOTGIR_ACTVIF_NO_DETECT_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) Active has not been detected  */
#define USBCORE_UOTGIR_ACTVIF_DETECT          (USBCORE_UOTGIR_ACTVIF_DETECT_Val << USBCORE_UOTGIR_ACTVIF_Pos) /* (USBCORE_UOTGIR) Activity on the D+, D-, ID, or VBus lines has been detected Position  */
#define USBCORE_UOTGIR_ACTVIF_NO_DETECT       (USBCORE_UOTGIR_ACTVIF_NO_DETECT_Val << USBCORE_UOTGIR_ACTVIF_Pos) /* (USBCORE_UOTGIR) Active has not been detected Position  */
#define USBCORE_UOTGIR_LSTATEIF_Pos           _UINT32_(5)                                          /* (USBCORE_UOTGIR) Line State Stable Indicator bit Position */
#define USBCORE_UOTGIR_LSTATEIF_Msk           (_UINT32_(0x1) << USBCORE_UOTGIR_LSTATEIF_Pos)       /* (USBCORE_UOTGIR) Line State Stable Indicator bit Mask */
#define USBCORE_UOTGIR_LSTATEIF(value)        (USBCORE_UOTGIR_LSTATEIF_Msk & (_UINT32_(value) << USBCORE_UOTGIR_LSTATEIF_Pos)) /* Assigment of value for LSTATEIF in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_LSTATEIF_STABLE_Val  _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) USB line state has been stable for 1ms  */
#define   USBCORE_UOTGIR_LSTATEIF_NOT_STABLE_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) USB line state has not been stable for 1ms  */
#define USBCORE_UOTGIR_LSTATEIF_STABLE        (USBCORE_UOTGIR_LSTATEIF_STABLE_Val << USBCORE_UOTGIR_LSTATEIF_Pos) /* (USBCORE_UOTGIR) USB line state has been stable for 1ms Position  */
#define USBCORE_UOTGIR_LSTATEIF_NOT_STABLE    (USBCORE_UOTGIR_LSTATEIF_NOT_STABLE_Val << USBCORE_UOTGIR_LSTATEIF_Pos) /* (USBCORE_UOTGIR) USB line state has not been stable for 1ms Position  */
#define USBCORE_UOTGIR_T1MSECIF_Pos           _UINT32_(6)                                          /* (USBCORE_UOTGIR) 1 Millisecond Timer bit Position */
#define USBCORE_UOTGIR_T1MSECIF_Msk           (_UINT32_(0x1) << USBCORE_UOTGIR_T1MSECIF_Pos)       /* (USBCORE_UOTGIR) 1 Millisecond Timer bit Mask */
#define USBCORE_UOTGIR_T1MSECIF(value)        (USBCORE_UOTGIR_T1MSECIF_Msk & (_UINT32_(value) << USBCORE_UOTGIR_T1MSECIF_Pos)) /* Assigment of value for T1MSECIF in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_T1MSECIF_EXPIRE_Val  _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) 1ms timer has expired  */
#define   USBCORE_UOTGIR_T1MSECIF_NOT_EXPIRE_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) 1ms timer has not expired  */
#define USBCORE_UOTGIR_T1MSECIF_EXPIRE        (USBCORE_UOTGIR_T1MSECIF_EXPIRE_Val << USBCORE_UOTGIR_T1MSECIF_Pos) /* (USBCORE_UOTGIR) 1ms timer has expired Position  */
#define USBCORE_UOTGIR_T1MSECIF_NOT_EXPIRE    (USBCORE_UOTGIR_T1MSECIF_NOT_EXPIRE_Val << USBCORE_UOTGIR_T1MSECIF_Pos) /* (USBCORE_UOTGIR) 1ms timer has not expired Position  */
#define USBCORE_UOTGIR_IDIF_Pos               _UINT32_(7)                                          /* (USBCORE_UOTGIR) ID State Change Indicator bit Position */
#define USBCORE_UOTGIR_IDIF_Msk               (_UINT32_(0x1) << USBCORE_UOTGIR_IDIF_Pos)           /* (USBCORE_UOTGIR) ID State Change Indicator bit Mask */
#define USBCORE_UOTGIR_IDIF(value)            (USBCORE_UOTGIR_IDIF_Msk & (_UINT32_(value) << USBCORE_UOTGIR_IDIF_Pos)) /* Assigment of value for IDIF in the USBCORE_UOTGIR register */
#define   USBCORE_UOTGIR_IDIF_DETECT_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGIR) Change in ID state is detected  */
#define   USBCORE_UOTGIR_IDIF_NO_DETECT_Val   _UINT32_(0x0)                                        /* (USBCORE_UOTGIR) No change in ID state is detected  */
#define USBCORE_UOTGIR_IDIF_DETECT            (USBCORE_UOTGIR_IDIF_DETECT_Val << USBCORE_UOTGIR_IDIF_Pos) /* (USBCORE_UOTGIR) Change in ID state is detected Position  */
#define USBCORE_UOTGIR_IDIF_NO_DETECT         (USBCORE_UOTGIR_IDIF_NO_DETECT_Val << USBCORE_UOTGIR_IDIF_Pos) /* (USBCORE_UOTGIR) No change in ID state is detected Position  */
#define USBCORE_UOTGIR_Msk                    _UINT32_(0x000000FD)                                 /* (USBCORE_UOTGIR) Register Mask  */


/* -------- USBCORE_UOTGIRCLR : (USBCORE Offset: 0x44) (R/W 32)  -------- */
#define USBCORE_UOTGIRCLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIRCLR)   Reset Value */

#define USBCORE_UOTGIRCLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIRCLR) Register Mask  */


/* -------- USBCORE_UOTGIRSET : (USBCORE Offset: 0x48) (R/W 32)  -------- */
#define USBCORE_UOTGIRSET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIRSET)   Reset Value */

#define USBCORE_UOTGIRSET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIRSET) Register Mask  */


/* -------- USBCORE_UOTGIRINV : (USBCORE Offset: 0x4C) (R/W 32)  -------- */
#define USBCORE_UOTGIRINV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIRINV)   Reset Value */

#define USBCORE_UOTGIRINV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIRINV) Register Mask  */


/* -------- USBCORE_UOTGIE : (USBCORE Offset: 0x50) (R/W 32) USB OTG Interrupt Enable Register -------- */
#define USBCORE_UOTGIE_AVBUS_VLD_Pos          _UINT32_(0)                                          /* (USBCORE_UOTGIE) A- Vbus Valid Interrupt Enable bit Position */
#define USBCORE_UOTGIE_AVBUS_VLD_Msk          (_UINT32_(0x1) << USBCORE_UOTGIE_AVBUS_VLD_Pos)      /* (USBCORE_UOTGIE) A- Vbus Valid Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_AVBUS_VLD(value)       (USBCORE_UOTGIE_AVBUS_VLD_Msk & (_UINT32_(value) << USBCORE_UOTGIE_AVBUS_VLD_Pos)) /* Assigment of value for AVBUS_VLD in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_AVBUS_VLD_ON_Val     _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) A-Vbus valid interrupt is enabled  */
#define   USBCORE_UOTGIE_AVBUS_VLD_OFF_Val    _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) A-Vbus valid interrupt is disabled  */
#define USBCORE_UOTGIE_AVBUS_VLD_ON           (USBCORE_UOTGIE_AVBUS_VLD_ON_Val << USBCORE_UOTGIE_AVBUS_VLD_Pos) /* (USBCORE_UOTGIE) A-Vbus valid interrupt is enabled Position  */
#define USBCORE_UOTGIE_AVBUS_VLD_OFF          (USBCORE_UOTGIE_AVBUS_VLD_OFF_Val << USBCORE_UOTGIE_AVBUS_VLD_Pos) /* (USBCORE_UOTGIE) A-Vbus valid interrupt is disabled Position  */
#define USBCORE_UOTGIE_BSESS_END_Pos          _UINT32_(2)                                          /* (USBCORE_UOTGIE) B-Session End Interrupt Enable bit Position */
#define USBCORE_UOTGIE_BSESS_END_Msk          (_UINT32_(0x1) << USBCORE_UOTGIE_BSESS_END_Pos)      /* (USBCORE_UOTGIE) B-Session End Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_BSESS_END(value)       (USBCORE_UOTGIE_BSESS_END_Msk & (_UINT32_(value) << USBCORE_UOTGIE_BSESS_END_Pos)) /* Assigment of value for BSESS_END in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_BSESS_END_ON_Val     _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) B-session end interrupt is enabled  */
#define   USBCORE_UOTGIE_BSESS_END_OFF_Val    _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) B-session end interrupt is disabled  */
#define USBCORE_UOTGIE_BSESS_END_ON           (USBCORE_UOTGIE_BSESS_END_ON_Val << USBCORE_UOTGIE_BSESS_END_Pos) /* (USBCORE_UOTGIE) B-session end interrupt is enabled Position  */
#define USBCORE_UOTGIE_BSESS_END_OFF          (USBCORE_UOTGIE_BSESS_END_OFF_Val << USBCORE_UOTGIE_BSESS_END_Pos) /* (USBCORE_UOTGIE) B-session end interrupt is disabled Position  */
#define USBCORE_UOTGIE_SESS_VLD_Pos           _UINT32_(3)                                          /* (USBCORE_UOTGIE) Session Valid Interrupt Enable bit Position */
#define USBCORE_UOTGIE_SESS_VLD_Msk           (_UINT32_(0x1) << USBCORE_UOTGIE_SESS_VLD_Pos)       /* (USBCORE_UOTGIE) Session Valid Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_SESS_VLD(value)        (USBCORE_UOTGIE_SESS_VLD_Msk & (_UINT32_(value) << USBCORE_UOTGIE_SESS_VLD_Pos)) /* Assigment of value for SESS_VLD in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_SESS_VLD_ON_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) Session valid interrupt is enabled  */
#define   USBCORE_UOTGIE_SESS_VLD_OFF_Val     _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) Session valid interrupt is disabled  */
#define USBCORE_UOTGIE_SESS_VLD_ON            (USBCORE_UOTGIE_SESS_VLD_ON_Val << USBCORE_UOTGIE_SESS_VLD_Pos) /* (USBCORE_UOTGIE) Session valid interrupt is enabled Position  */
#define USBCORE_UOTGIE_SESS_VLD_OFF           (USBCORE_UOTGIE_SESS_VLD_OFF_Val << USBCORE_UOTGIE_SESS_VLD_Pos) /* (USBCORE_UOTGIE) Session valid interrupt is disabled Position  */
#define USBCORE_UOTGIE_ACTIVITY_Pos           _UINT32_(4)                                          /* (USBCORE_UOTGIE) Activity Interrupt Enable bit Position */
#define USBCORE_UOTGIE_ACTIVITY_Msk           (_UINT32_(0x1) << USBCORE_UOTGIE_ACTIVITY_Pos)       /* (USBCORE_UOTGIE) Activity Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_ACTIVITY(value)        (USBCORE_UOTGIE_ACTIVITY_Msk & (_UINT32_(value) << USBCORE_UOTGIE_ACTIVITY_Pos)) /* Assigment of value for ACTIVITY in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_ACTIVITY_ON_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) ACTIVITY interrupt is enabled  */
#define   USBCORE_UOTGIE_ACTIVITY_OFF_Val     _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) ACTIVITY interrupt is disabled  */
#define USBCORE_UOTGIE_ACTIVITY_ON            (USBCORE_UOTGIE_ACTIVITY_ON_Val << USBCORE_UOTGIE_ACTIVITY_Pos) /* (USBCORE_UOTGIE) ACTIVITY interrupt is enabled Position  */
#define USBCORE_UOTGIE_ACTIVITY_OFF           (USBCORE_UOTGIE_ACTIVITY_OFF_Val << USBCORE_UOTGIE_ACTIVITY_Pos) /* (USBCORE_UOTGIE) ACTIVITY interrupt is disabled Position  */
#define USBCORE_UOTGIE_LSTATE_Pos             _UINT32_(5)                                          /* (USBCORE_UOTGIE) Line State Interrupt Enable bit Position */
#define USBCORE_UOTGIE_LSTATE_Msk             (_UINT32_(0x1) << USBCORE_UOTGIE_LSTATE_Pos)         /* (USBCORE_UOTGIE) Line State Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_LSTATE(value)          (USBCORE_UOTGIE_LSTATE_Msk & (_UINT32_(value) << USBCORE_UOTGIE_LSTATE_Pos)) /* Assigment of value for LSTATE in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_LSTATE_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) Line state interrupt is enabled  */
#define   USBCORE_UOTGIE_LSTATE_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) Line state interrupt is disabled  */
#define USBCORE_UOTGIE_LSTATE_ON              (USBCORE_UOTGIE_LSTATE_ON_Val << USBCORE_UOTGIE_LSTATE_Pos) /* (USBCORE_UOTGIE) Line state interrupt is enabled Position  */
#define USBCORE_UOTGIE_LSTATE_OFF             (USBCORE_UOTGIE_LSTATE_OFF_Val << USBCORE_UOTGIE_LSTATE_Pos) /* (USBCORE_UOTGIE) Line state interrupt is disabled Position  */
#define USBCORE_UOTGIE_ONE_MSEC_Pos           _UINT32_(6)                                          /* (USBCORE_UOTGIE) 1 Millisecond Timer Interrupt Enable bit Position */
#define USBCORE_UOTGIE_ONE_MSEC_Msk           (_UINT32_(0x1) << USBCORE_UOTGIE_ONE_MSEC_Pos)       /* (USBCORE_UOTGIE) 1 Millisecond Timer Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_ONE_MSEC(value)        (USBCORE_UOTGIE_ONE_MSEC_Msk & (_UINT32_(value) << USBCORE_UOTGIE_ONE_MSEC_Pos)) /* Assigment of value for ONE_MSEC in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_ONE_MSEC_ON_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) 1 millisecond timer interrupt is enabled  */
#define   USBCORE_UOTGIE_ONE_MSEC_OFF_Val     _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) 1 millisecond timer interrupt is disabled  */
#define USBCORE_UOTGIE_ONE_MSEC_ON            (USBCORE_UOTGIE_ONE_MSEC_ON_Val << USBCORE_UOTGIE_ONE_MSEC_Pos) /* (USBCORE_UOTGIE) 1 millisecond timer interrupt is enabled Position  */
#define USBCORE_UOTGIE_ONE_MSEC_OFF           (USBCORE_UOTGIE_ONE_MSEC_OFF_Val << USBCORE_UOTGIE_ONE_MSEC_Pos) /* (USBCORE_UOTGIE) 1 millisecond timer interrupt is disabled Position  */
#define USBCORE_UOTGIE_IDIE_Pos               _UINT32_(7)                                          /* (USBCORE_UOTGIE) ID Interrupt Enable bit Position */
#define USBCORE_UOTGIE_IDIE_Msk               (_UINT32_(0x1) << USBCORE_UOTGIE_IDIE_Pos)           /* (USBCORE_UOTGIE) ID Interrupt Enable bit Mask */
#define USBCORE_UOTGIE_IDIE(value)            (USBCORE_UOTGIE_IDIE_Msk & (_UINT32_(value) << USBCORE_UOTGIE_IDIE_Pos)) /* Assigment of value for IDIE in the USBCORE_UOTGIE register */
#define   USBCORE_UOTGIE_IDIE_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UOTGIE) ID interrupt is enabled  */
#define   USBCORE_UOTGIE_IDIE_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UOTGIE) ID interrupt is disabled  */
#define USBCORE_UOTGIE_IDIE_ON                (USBCORE_UOTGIE_IDIE_ON_Val << USBCORE_UOTGIE_IDIE_Pos) /* (USBCORE_UOTGIE) ID interrupt is enabled Position  */
#define USBCORE_UOTGIE_IDIE_OFF               (USBCORE_UOTGIE_IDIE_OFF_Val << USBCORE_UOTGIE_IDIE_Pos) /* (USBCORE_UOTGIE) ID interrupt is disabled Position  */
#define USBCORE_UOTGIE_Msk                    _UINT32_(0x000000FD)                                 /* (USBCORE_UOTGIE) Register Mask  */


/* -------- USBCORE_UOTGIECLR : (USBCORE Offset: 0x54) (R/W 32)  -------- */
#define USBCORE_UOTGIECLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIECLR)   Reset Value */

#define USBCORE_UOTGIECLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIECLR) Register Mask  */


/* -------- USBCORE_UOTGIESET : (USBCORE Offset: 0x58) (R/W 32)  -------- */
#define USBCORE_UOTGIESET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIESET)   Reset Value */

#define USBCORE_UOTGIESET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIESET) Register Mask  */


/* -------- USBCORE_UOTGIEINV : (USBCORE Offset: 0x5C) (R/W 32)  -------- */
#define USBCORE_UOTGIEINV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UOTGIEINV)   Reset Value */

#define USBCORE_UOTGIEINV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UOTGIEINV) Register Mask  */


/* -------- USBCORE_UOTGSTAT : (USBCORE Offset: 0x60) (R/W 32) USB OTG Status Register -------- */
#define USBCORE_UOTGSTAT_VBUSVD_Pos           _UINT32_(0)                                          /* (USBCORE_UOTGSTAT) A-VBUS Valid Indicator bit Position */
#define USBCORE_UOTGSTAT_VBUSVD_Msk           (_UINT32_(0x1) << USBCORE_UOTGSTAT_VBUSVD_Pos)       /* (USBCORE_UOTGSTAT) A-VBUS Valid Indicator bit Mask */
#define USBCORE_UOTGSTAT_VBUSVD(value)        (USBCORE_UOTGSTAT_VBUSVD_Msk & (_UINT32_(value) << USBCORE_UOTGSTAT_VBUSVD_Pos)) /* Assigment of value for VBUSVD in the USBCORE_UOTGSTAT register */
#define   USBCORE_UOTGSTAT_VBUSVD_ABOVE_Val   _UINT32_(0x1)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is above VA_VBUS_VLD on the A device  */
#define   USBCORE_UOTGSTAT_VBUSVD_BELOW_Val   _UINT32_(0x0)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is below VA_VBUS_VLD on the A device  */
#define USBCORE_UOTGSTAT_VBUSVD_ABOVE         (USBCORE_UOTGSTAT_VBUSVD_ABOVE_Val << USBCORE_UOTGSTAT_VBUSVD_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is above VA_VBUS_VLD on the A device Position  */
#define USBCORE_UOTGSTAT_VBUSVD_BELOW         (USBCORE_UOTGSTAT_VBUSVD_BELOW_Val << USBCORE_UOTGSTAT_VBUSVD_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is below VA_VBUS_VLD on the A device Position  */
#define USBCORE_UOTGSTAT_SESEND_Pos           _UINT32_(2)                                          /* (USBCORE_UOTGSTAT) B-Session End Indicator bit Position */
#define USBCORE_UOTGSTAT_SESEND_Msk           (_UINT32_(0x1) << USBCORE_UOTGSTAT_SESEND_Pos)       /* (USBCORE_UOTGSTAT) B-Session End Indicator bit Mask */
#define USBCORE_UOTGSTAT_SESEND(value)        (USBCORE_UOTGSTAT_SESEND_Msk & (_UINT32_(value) << USBCORE_UOTGSTAT_SESEND_Pos)) /* Assigment of value for SESEND in the USBCORE_UOTGSTAT register */
#define   USBCORE_UOTGSTAT_SESEND_BELOW_Val   _UINT32_(0x1)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is below VB_SESS_END on the B device  */
#define   USBCORE_UOTGSTAT_SESEND_ABOVE_Val   _UINT32_(0x0)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is above VB_SESS_END on the B device  */
#define USBCORE_UOTGSTAT_SESEND_BELOW         (USBCORE_UOTGSTAT_SESEND_BELOW_Val << USBCORE_UOTGSTAT_SESEND_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is below VB_SESS_END on the B device Position  */
#define USBCORE_UOTGSTAT_SESEND_ABOVE         (USBCORE_UOTGSTAT_SESEND_ABOVE_Val << USBCORE_UOTGSTAT_SESEND_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is above VB_SESS_END on the B device Position  */
#define USBCORE_UOTGSTAT_SESVD_Pos            _UINT32_(3)                                          /* (USBCORE_UOTGSTAT) Session Valid Indicator bit Position */
#define USBCORE_UOTGSTAT_SESVD_Msk            (_UINT32_(0x1) << USBCORE_UOTGSTAT_SESVD_Pos)        /* (USBCORE_UOTGSTAT) Session Valid Indicator bit Mask */
#define USBCORE_UOTGSTAT_SESVD(value)         (USBCORE_UOTGSTAT_SESVD_Msk & (_UINT32_(value) << USBCORE_UOTGSTAT_SESVD_Pos)) /* Assigment of value for SESVD in the USBCORE_UOTGSTAT register */
#define   USBCORE_UOTGSTAT_SESVD_ABOVE_Val    _UINT32_(0x1)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is above Session Valid on the A or B device  */
#define   USBCORE_UOTGSTAT_SESVD_BELOW_Val    _UINT32_(0x0)                                        /* (USBCORE_UOTGSTAT) Vbus voltage is below Session Valid on the A or B device  */
#define USBCORE_UOTGSTAT_SESVD_ABOVE          (USBCORE_UOTGSTAT_SESVD_ABOVE_Val << USBCORE_UOTGSTAT_SESVD_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is above Session Valid on the A or B device Position  */
#define USBCORE_UOTGSTAT_SESVD_BELOW          (USBCORE_UOTGSTAT_SESVD_BELOW_Val << USBCORE_UOTGSTAT_SESVD_Pos) /* (USBCORE_UOTGSTAT) Vbus voltage is below Session Valid on the A or B device Position  */
#define USBCORE_UOTGSTAT_LSTATE_Pos           _UINT32_(5)                                          /* (USBCORE_UOTGSTAT) Line State Stable Indicator bit Position */
#define USBCORE_UOTGSTAT_LSTATE_Msk           (_UINT32_(0x1) << USBCORE_UOTGSTAT_LSTATE_Pos)       /* (USBCORE_UOTGSTAT) Line State Stable Indicator bit Mask */
#define USBCORE_UOTGSTAT_LSTATE(value)        (USBCORE_UOTGSTAT_LSTATE_Msk & (_UINT32_(value) << USBCORE_UOTGSTAT_LSTATE_Pos)) /* Assigment of value for LSTATE in the USBCORE_UOTGSTAT register */
#define   USBCORE_UOTGSTAT_LSTATE_STABLE_Val  _UINT32_(0x1)                                        /* (USBCORE_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has been stable for the previous 1 ms  */
#define   USBCORE_UOTGSTAT_LSTATE_NOT_STABLE_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has not been stable for the previous 1 ms  */
#define USBCORE_UOTGSTAT_LSTATE_STABLE        (USBCORE_UOTGSTAT_LSTATE_STABLE_Val << USBCORE_UOTGSTAT_LSTATE_Pos) /* (USBCORE_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has been stable for the previous 1 ms Position  */
#define USBCORE_UOTGSTAT_LSTATE_NOT_STABLE    (USBCORE_UOTGSTAT_LSTATE_NOT_STABLE_Val << USBCORE_UOTGSTAT_LSTATE_Pos) /* (USBCORE_UOTGSTAT) USB line state (UCTRL[SE0 and JSTATE]) has not been stable for the previous 1 ms Position  */
#define USBCORE_UOTGSTAT_ID_Pos               _UINT32_(7)                                          /* (USBCORE_UOTGSTAT) ID Pin State Indicator bit Position */
#define USBCORE_UOTGSTAT_ID_Msk               (_UINT32_(0x1) << USBCORE_UOTGSTAT_ID_Pos)           /* (USBCORE_UOTGSTAT) ID Pin State Indicator bit Mask */
#define USBCORE_UOTGSTAT_ID(value)            (USBCORE_UOTGSTAT_ID_Msk & (_UINT32_(value) << USBCORE_UOTGSTAT_ID_Pos)) /* Assigment of value for ID in the USBCORE_UOTGSTAT register */
#define   USBCORE_UOTGSTAT_ID_NOT_PLUG_Val    _UINT32_(0x1)                                        /* (USBCORE_UOTGSTAT) No cable is attached or a Type-B cable has been plugged into the USB receptacle  */
#define   USBCORE_UOTGSTAT_ID_PLUG_Val        _UINT32_(0x0)                                        /* (USBCORE_UOTGSTAT) A Type-A cable has been plugged into the USB receptacle  */
#define USBCORE_UOTGSTAT_ID_NOT_PLUG          (USBCORE_UOTGSTAT_ID_NOT_PLUG_Val << USBCORE_UOTGSTAT_ID_Pos) /* (USBCORE_UOTGSTAT) No cable is attached or a Type-B cable has been plugged into the USB receptacle Position  */
#define USBCORE_UOTGSTAT_ID_PLUG              (USBCORE_UOTGSTAT_ID_PLUG_Val << USBCORE_UOTGSTAT_ID_Pos) /* (USBCORE_UOTGSTAT) A Type-A cable has been plugged into the USB receptacle Position  */
#define USBCORE_UOTGSTAT_Msk                  _UINT32_(0x000000AD)                                 /* (USBCORE_UOTGSTAT) Register Mask  */


/* -------- USBCORE_UOTGCON : (USBCORE Offset: 0x70) (R/W 32) USB OTG Control Register -------- */
#define USBCORE_UOTGCON_VBUSDIS_Pos           _UINT32_(0)                                          /* (USBCORE_UOTGCON) Vbus Discharge Enable bit Position */
#define USBCORE_UOTGCON_VBUSDIS_Msk           (_UINT32_(0x1) << USBCORE_UOTGCON_VBUSDIS_Pos)       /* (USBCORE_UOTGCON) Vbus Discharge Enable bit Mask */
#define USBCORE_UOTGCON_VBUSDIS(value)        (USBCORE_UOTGCON_VBUSDIS_Msk & (_UINT32_(value) << USBCORE_UOTGCON_VBUSDIS_Pos)) /* Assigment of value for VBUSDIS in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_VBUSDIS_DISCHG_Val  _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) Vbus line is discharged through a pull-down resistor  */
#define   USBCORE_UOTGCON_VBUSDIS_NOT_DISCHG_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) Vbus line is not discharged through a resistor  */
#define USBCORE_UOTGCON_VBUSDIS_DISCHG        (USBCORE_UOTGCON_VBUSDIS_DISCHG_Val << USBCORE_UOTGCON_VBUSDIS_Pos) /* (USBCORE_UOTGCON) Vbus line is discharged through a pull-down resistor Position  */
#define USBCORE_UOTGCON_VBUSDIS_NOT_DISCHG    (USBCORE_UOTGCON_VBUSDIS_NOT_DISCHG_Val << USBCORE_UOTGCON_VBUSDIS_Pos) /* (USBCORE_UOTGCON) Vbus line is not discharged through a resistor Position  */
#define USBCORE_UOTGCON_VBUSCHG_Pos           _UINT32_(1)                                          /* (USBCORE_UOTGCON) Vbus Charge Enable bit Position */
#define USBCORE_UOTGCON_VBUSCHG_Msk           (_UINT32_(0x1) << USBCORE_UOTGCON_VBUSCHG_Pos)       /* (USBCORE_UOTGCON) Vbus Charge Enable bit Mask */
#define USBCORE_UOTGCON_VBUSCHG(value)        (USBCORE_UOTGCON_VBUSCHG_Msk & (_UINT32_(value) << USBCORE_UOTGCON_VBUSCHG_Pos)) /* Assigment of value for VBUSCHG in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_VBUSCHG_CHG_Val     _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) Vbus line is charged through a pull-up resistor  */
#define   USBCORE_UOTGCON_VBUSCHG_NOT_CHG_Val _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) Vbus line is not charged through a resistor  */
#define USBCORE_UOTGCON_VBUSCHG_CHG           (USBCORE_UOTGCON_VBUSCHG_CHG_Val << USBCORE_UOTGCON_VBUSCHG_Pos) /* (USBCORE_UOTGCON) Vbus line is charged through a pull-up resistor Position  */
#define USBCORE_UOTGCON_VBUSCHG_NOT_CHG       (USBCORE_UOTGCON_VBUSCHG_NOT_CHG_Val << USBCORE_UOTGCON_VBUSCHG_Pos) /* (USBCORE_UOTGCON) Vbus line is not charged through a resistor Position  */
#define USBCORE_UOTGCON_OTGEN_Pos             _UINT32_(2)                                          /* (USBCORE_UOTGCON) OTG Functionality Enable bit Position */
#define USBCORE_UOTGCON_OTGEN_Msk             (_UINT32_(0x1) << USBCORE_UOTGCON_OTGEN_Pos)         /* (USBCORE_UOTGCON) OTG Functionality Enable bit Mask */
#define USBCORE_UOTGCON_OTGEN(value)          (USBCORE_UOTGCON_OTGEN_Msk & (_UINT32_(value) << USBCORE_UOTGCON_OTGEN_Pos)) /* Assigment of value for OTGEN in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_OTGEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) DPPULUP  */
#define   USBCORE_UOTGCON_OTGEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) DPPULUP  */
#define USBCORE_UOTGCON_OTGEN_ON              (USBCORE_UOTGCON_OTGEN_ON_Val << USBCORE_UOTGCON_OTGEN_Pos) /* (USBCORE_UOTGCON) DPPULUP Position  */
#define USBCORE_UOTGCON_OTGEN_OFF             (USBCORE_UOTGCON_OTGEN_OFF_Val << USBCORE_UOTGCON_OTGEN_Pos) /* (USBCORE_UOTGCON) DPPULUP Position  */
#define USBCORE_UOTGCON_VBUSON_Pos            _UINT32_(3)                                          /* (USBCORE_UOTGCON) Vbus Power-on bit Position */
#define USBCORE_UOTGCON_VBUSON_Msk            (_UINT32_(0x1) << USBCORE_UOTGCON_VBUSON_Pos)        /* (USBCORE_UOTGCON) Vbus Power-on bit Mask */
#define USBCORE_UOTGCON_VBUSON(value)         (USBCORE_UOTGCON_VBUSON_Msk & (_UINT32_(value) << USBCORE_UOTGCON_VBUSON_Pos)) /* Assigment of value for VBUSON in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_VBUSON_ON_Val       _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) Vbus line is powered  */
#define   USBCORE_UOTGCON_VBUSON_OFF_Val      _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) Vbus line is not powered  */
#define USBCORE_UOTGCON_VBUSON_ON             (USBCORE_UOTGCON_VBUSON_ON_Val << USBCORE_UOTGCON_VBUSON_Pos) /* (USBCORE_UOTGCON) Vbus line is powered Position  */
#define USBCORE_UOTGCON_VBUSON_OFF            (USBCORE_UOTGCON_VBUSON_OFF_Val << USBCORE_UOTGCON_VBUSON_Pos) /* (USBCORE_UOTGCON) Vbus line is not powered Position  */
#define USBCORE_UOTGCON_DMPULDWN_Pos          _UINT32_(4)                                          /* (USBCORE_UOTGCON) D- Pull-Down Enable bit Position */
#define USBCORE_UOTGCON_DMPULDWN_Msk          (_UINT32_(0x1) << USBCORE_UOTGCON_DMPULDWN_Pos)      /* (USBCORE_UOTGCON) D- Pull-Down Enable bit Mask */
#define USBCORE_UOTGCON_DMPULDWN(value)       (USBCORE_UOTGCON_DMPULDWN_Msk & (_UINT32_(value) << USBCORE_UOTGCON_DMPULDWN_Pos)) /* Assigment of value for DMPULDWN in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_DMPULDWN_ON_Val     _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) D- data line pull-down resistor is enabled  */
#define   USBCORE_UOTGCON_DMPULDWN_OFF_Val    _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) D- data line pull-down resistor is disabled  */
#define USBCORE_UOTGCON_DMPULDWN_ON           (USBCORE_UOTGCON_DMPULDWN_ON_Val << USBCORE_UOTGCON_DMPULDWN_Pos) /* (USBCORE_UOTGCON) D- data line pull-down resistor is enabled Position  */
#define USBCORE_UOTGCON_DMPULDWN_OFF          (USBCORE_UOTGCON_DMPULDWN_OFF_Val << USBCORE_UOTGCON_DMPULDWN_Pos) /* (USBCORE_UOTGCON) D- data line pull-down resistor is disabled Position  */
#define USBCORE_UOTGCON_DPPULDWN_Pos          _UINT32_(5)                                          /* (USBCORE_UOTGCON) D+ Pull-Down Enable bit Position */
#define USBCORE_UOTGCON_DPPULDWN_Msk          (_UINT32_(0x1) << USBCORE_UOTGCON_DPPULDWN_Pos)      /* (USBCORE_UOTGCON) D+ Pull-Down Enable bit Mask */
#define USBCORE_UOTGCON_DPPULDWN(value)       (USBCORE_UOTGCON_DPPULDWN_Msk & (_UINT32_(value) << USBCORE_UOTGCON_DPPULDWN_Pos)) /* Assigment of value for DPPULDWN in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_DPPULDWN_ON_Val     _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) D+ data line pull-down resistor is enabled  */
#define   USBCORE_UOTGCON_DPPULDWN_OFF_Val    _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) D+ data line pull-down resistor is disabled  */
#define USBCORE_UOTGCON_DPPULDWN_ON           (USBCORE_UOTGCON_DPPULDWN_ON_Val << USBCORE_UOTGCON_DPPULDWN_Pos) /* (USBCORE_UOTGCON) D+ data line pull-down resistor is enabled Position  */
#define USBCORE_UOTGCON_DPPULDWN_OFF          (USBCORE_UOTGCON_DPPULDWN_OFF_Val << USBCORE_UOTGCON_DPPULDWN_Pos) /* (USBCORE_UOTGCON) D+ data line pull-down resistor is disabled Position  */
#define USBCORE_UOTGCON_DMPULUP_Pos           _UINT32_(6)                                          /* (USBCORE_UOTGCON) D- Pull-Up Enable bit Position */
#define USBCORE_UOTGCON_DMPULUP_Msk           (_UINT32_(0x1) << USBCORE_UOTGCON_DMPULUP_Pos)       /* (USBCORE_UOTGCON) D- Pull-Up Enable bit Mask */
#define USBCORE_UOTGCON_DMPULUP(value)        (USBCORE_UOTGCON_DMPULUP_Msk & (_UINT32_(value) << USBCORE_UOTGCON_DMPULUP_Pos)) /* Assigment of value for DMPULUP in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_DMPULUP_ON_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) D- data line pull-up resistor is enabled  */
#define   USBCORE_UOTGCON_DMPULUP_OFF_Val     _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) D- data line pull-up resistor is disabled  */
#define USBCORE_UOTGCON_DMPULUP_ON            (USBCORE_UOTGCON_DMPULUP_ON_Val << USBCORE_UOTGCON_DMPULUP_Pos) /* (USBCORE_UOTGCON) D- data line pull-up resistor is enabled Position  */
#define USBCORE_UOTGCON_DMPULUP_OFF           (USBCORE_UOTGCON_DMPULUP_OFF_Val << USBCORE_UOTGCON_DMPULUP_Pos) /* (USBCORE_UOTGCON) D- data line pull-up resistor is disabled Position  */
#define USBCORE_UOTGCON_DPPULUP_Pos           _UINT32_(7)                                          /* (USBCORE_UOTGCON) D+ Pull-Up Enable bit Position */
#define USBCORE_UOTGCON_DPPULUP_Msk           (_UINT32_(0x1) << USBCORE_UOTGCON_DPPULUP_Pos)       /* (USBCORE_UOTGCON) D+ Pull-Up Enable bit Mask */
#define USBCORE_UOTGCON_DPPULUP(value)        (USBCORE_UOTGCON_DPPULUP_Msk & (_UINT32_(value) << USBCORE_UOTGCON_DPPULUP_Pos)) /* Assigment of value for DPPULUP in the USBCORE_UOTGCON register */
#define   USBCORE_UOTGCON_DPPULUP_ON_Val      _UINT32_(0x1)                                        /* (USBCORE_UOTGCON) D+ data line pull-up resistor is enabled  */
#define   USBCORE_UOTGCON_DPPULUP_OFF_Val     _UINT32_(0x0)                                        /* (USBCORE_UOTGCON) D+ data line pull-up resistor is disabled  */
#define USBCORE_UOTGCON_DPPULUP_ON            (USBCORE_UOTGCON_DPPULUP_ON_Val << USBCORE_UOTGCON_DPPULUP_Pos) /* (USBCORE_UOTGCON) D+ data line pull-up resistor is enabled Position  */
#define USBCORE_UOTGCON_DPPULUP_OFF           (USBCORE_UOTGCON_DPPULUP_OFF_Val << USBCORE_UOTGCON_DPPULUP_Pos) /* (USBCORE_UOTGCON) D+ data line pull-up resistor is disabled Position  */
#define USBCORE_UOTGCON_Msk                   _UINT32_(0x000000FF)                                 /* (USBCORE_UOTGCON) Register Mask  */


/* -------- USBCORE_UOTGCONCLR : (USBCORE Offset: 0x74) (R/W 32)  -------- */
#define USBCORE_UOTGCONCLR_RESETVALUE         _UINT32_(0x00)                                       /*  (USBCORE_UOTGCONCLR)   Reset Value */

#define USBCORE_UOTGCONCLR_Msk                _UINT32_(0x00000000)                                 /* (USBCORE_UOTGCONCLR) Register Mask  */


/* -------- USBCORE_UOTGCONSET : (USBCORE Offset: 0x78) (R/W 32)  -------- */
#define USBCORE_UOTGCONSET_RESETVALUE         _UINT32_(0x00)                                       /*  (USBCORE_UOTGCONSET)   Reset Value */

#define USBCORE_UOTGCONSET_Msk                _UINT32_(0x00000000)                                 /* (USBCORE_UOTGCONSET) Register Mask  */


/* -------- USBCORE_UOTGCONINV : (USBCORE Offset: 0x7C) (R/W 32)  -------- */
#define USBCORE_UOTGCONINV_RESETVALUE         _UINT32_(0x00)                                       /*  (USBCORE_UOTGCONINV)   Reset Value */

#define USBCORE_UOTGCONINV_Msk                _UINT32_(0x00000000)                                 /* (USBCORE_UOTGCONINV) Register Mask  */


/* -------- USBCORE_UPWRC : (USBCORE Offset: 0x80) (R/W 32) USB Power Control Register -------- */
#define USBCORE_UPWRC_USBPWR_Pos              _UINT32_(0)                                          /* (USBCORE_UPWRC) USB Operation Enable bit Position */
#define USBCORE_UPWRC_USBPWR_Msk              (_UINT32_(0x1) << USBCORE_UPWRC_USBPWR_Pos)          /* (USBCORE_UPWRC) USB Operation Enable bit Mask */
#define USBCORE_UPWRC_USBPWR(value)           (USBCORE_UPWRC_USBPWR_Msk & (_UINT32_(value) << USBCORE_UPWRC_USBPWR_Pos)) /* Assigment of value for USBPWR in the USBCORE_UPWRC register */
#define   USBCORE_UPWRC_USBPWR_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_UPWRC) USB module is turned on  */
#define   USBCORE_UPWRC_USBPWR_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_UPWRC) USB module is disabled (Outputs held inactive  */
#define USBCORE_UPWRC_USBPWR_ON               (USBCORE_UPWRC_USBPWR_ON_Val << USBCORE_UPWRC_USBPWR_Pos) /* (USBCORE_UPWRC) USB module is turned on Position  */
#define USBCORE_UPWRC_USBPWR_OFF              (USBCORE_UPWRC_USBPWR_OFF_Val << USBCORE_UPWRC_USBPWR_Pos) /* (USBCORE_UPWRC) USB module is disabled (Outputs held inactive Position  */
#define USBCORE_UPWRC_USUSPEND_Pos            _UINT32_(1)                                          /* (USBCORE_UPWRC) USB Suspend Mode bit Position */
#define USBCORE_UPWRC_USUSPEND_Msk            (_UINT32_(0x1) << USBCORE_UPWRC_USUSPEND_Pos)        /* (USBCORE_UPWRC) USB Suspend Mode bit Mask */
#define USBCORE_UPWRC_USUSPEND(value)         (USBCORE_UPWRC_USUSPEND_Msk & (_UINT32_(value) << USBCORE_UPWRC_USUSPEND_Pos)) /* Assigment of value for USUSPEND in the USBCORE_UPWRC register */
#define   USBCORE_UPWRC_USUSPEND_SUSPEND_Val  _UINT32_(0x1)                                        /* (USBCORE_UPWRC) USB module is placed in Suspend mode (The 48 MHz USB clock will be gated off. The transceiver is placed in a low-power state.)  */
#define   USBCORE_UPWRC_USUSPEND_NORMAL_Val   _UINT32_(0x0)                                        /* (USBCORE_UPWRC) USB module operates normally  */
#define USBCORE_UPWRC_USUSPEND_SUSPEND        (USBCORE_UPWRC_USUSPEND_SUSPEND_Val << USBCORE_UPWRC_USUSPEND_Pos) /* (USBCORE_UPWRC) USB module is placed in Suspend mode (The 48 MHz USB clock will be gated off. The transceiver is placed in a low-power state.) Position  */
#define USBCORE_UPWRC_USUSPEND_NORMAL         (USBCORE_UPWRC_USUSPEND_NORMAL_Val << USBCORE_UPWRC_USUSPEND_Pos) /* (USBCORE_UPWRC) USB module operates normally Position  */
#define USBCORE_UPWRC_USBBUSY_Pos             _UINT32_(3)                                          /* (USBCORE_UPWRC) USB Module Busy bit Position */
#define USBCORE_UPWRC_USBBUSY_Msk             (_UINT32_(0x1) << USBCORE_UPWRC_USBBUSY_Pos)         /* (USBCORE_UPWRC) USB Module Busy bit Mask */
#define USBCORE_UPWRC_USBBUSY(value)          (USBCORE_UPWRC_USBBUSY_Msk & (_UINT32_(value) << USBCORE_UPWRC_USBBUSY_Pos)) /* Assigment of value for USBBUSY in the USBCORE_UPWRC register */
#define   USBCORE_UPWRC_USBBUSY_ACTIVE_OR_DISALBE_Val _UINT32_(0x1)                                        /* (USBCORE_UPWRC) USB module is active or disabled  */
#define   USBCORE_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY_Val _UINT32_(0x0)                                        /* (USBCORE_UPWRC) USB module is not active and is ready to be enabled  */
#define USBCORE_UPWRC_USBBUSY_ACTIVE_OR_DISALBE (USBCORE_UPWRC_USBBUSY_ACTIVE_OR_DISALBE_Val << USBCORE_UPWRC_USBBUSY_Pos) /* (USBCORE_UPWRC) USB module is active or disabled Position  */
#define USBCORE_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY (USBCORE_UPWRC_USBBUSY_NOT_ACTIVE_AND_READY_Val << USBCORE_UPWRC_USBBUSY_Pos) /* (USBCORE_UPWRC) USB module is not active and is ready to be enabled Position  */
#define USBCORE_UPWRC_USLPGRD_Pos             _UINT32_(4)                                          /* (USBCORE_UPWRC) USB Sleep Entry Guard bit Position */
#define USBCORE_UPWRC_USLPGRD_Msk             (_UINT32_(0x1) << USBCORE_UPWRC_USLPGRD_Pos)         /* (USBCORE_UPWRC) USB Sleep Entry Guard bit Mask */
#define USBCORE_UPWRC_USLPGRD(value)          (USBCORE_UPWRC_USLPGRD_Msk & (_UINT32_(value) << USBCORE_UPWRC_USLPGRD_Pos)) /* Assigment of value for USLPGRD in the USBCORE_UPWRC register */
#define   USBCORE_UPWRC_USLPGRD_BLOCK_SLEEP_Val _UINT32_(0x1)                                        /* (USBCORE_UPWRC) Sleep entry is blocked if USB bus activity is detected or if a notification is pending  */
#define   USBCORE_UPWRC_USLPGRD_NO_BLOCK_Val  _UINT32_(0x0)                                        /* (USBCORE_UPWRC) USB module does not block Sleep entry  */
#define USBCORE_UPWRC_USLPGRD_BLOCK_SLEEP     (USBCORE_UPWRC_USLPGRD_BLOCK_SLEEP_Val << USBCORE_UPWRC_USLPGRD_Pos) /* (USBCORE_UPWRC) Sleep entry is blocked if USB bus activity is detected or if a notification is pending Position  */
#define USBCORE_UPWRC_USLPGRD_NO_BLOCK        (USBCORE_UPWRC_USLPGRD_NO_BLOCK_Val << USBCORE_UPWRC_USLPGRD_Pos) /* (USBCORE_UPWRC) USB module does not block Sleep entry Position  */
#define USBCORE_UPWRC_UACTPND_Pos             _UINT32_(7)                                          /* (USBCORE_UPWRC) USB Activity Pending bit Position */
#define USBCORE_UPWRC_UACTPND_Msk             (_UINT32_(0x1) << USBCORE_UPWRC_UACTPND_Pos)         /* (USBCORE_UPWRC) USB Activity Pending bit Mask */
#define USBCORE_UPWRC_UACTPND(value)          (USBCORE_UPWRC_UACTPND_Msk & (_UINT32_(value) << USBCORE_UPWRC_UACTPND_Pos)) /* Assigment of value for UACTPND in the USBCORE_UPWRC register */
#define   USBCORE_UPWRC_UACTPND_CHANGE_Val    _UINT32_(0x1)                                        /* (USBCORE_UPWRC) USB hardware has detected a change in link status  */
#define   USBCORE_UPWRC_UACTPND_NORMAL_Val    _UINT32_(0x0)                                        /* (USBCORE_UPWRC) USB Hardware in normal operation mode  */
#define USBCORE_UPWRC_UACTPND_CHANGE          (USBCORE_UPWRC_UACTPND_CHANGE_Val << USBCORE_UPWRC_UACTPND_Pos) /* (USBCORE_UPWRC) USB hardware has detected a change in link status Position  */
#define USBCORE_UPWRC_UACTPND_NORMAL          (USBCORE_UPWRC_UACTPND_NORMAL_Val << USBCORE_UPWRC_UACTPND_Pos) /* (USBCORE_UPWRC) USB Hardware in normal operation mode Position  */
#define USBCORE_UPWRC_Msk                     _UINT32_(0x0000009B)                                 /* (USBCORE_UPWRC) Register Mask  */


/* -------- USBCORE_UPWRCCLR : (USBCORE Offset: 0x84) (R/W 32)  -------- */
#define USBCORE_UPWRCCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UPWRCCLR)   Reset Value */

#define USBCORE_UPWRCCLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UPWRCCLR) Register Mask  */


/* -------- USBCORE_UPWRCSET : (USBCORE Offset: 0x88) (R/W 32)  -------- */
#define USBCORE_UPWRCSET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UPWRCSET)   Reset Value */

#define USBCORE_UPWRCSET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UPWRCSET) Register Mask  */


/* -------- USBCORE_UPWRCINV : (USBCORE Offset: 0x8C) (R/W 32)  -------- */
#define USBCORE_UPWRCINV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UPWRCINV)   Reset Value */

#define USBCORE_UPWRCINV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UPWRCINV) Register Mask  */


/* -------- USBCORE_UIR : (USBCORE Offset: 0x200) (R/W 32) USB Interrupt Register -------- */
#define USBCORE_UIR_URSTIF_DETACHIF_Pos       _UINT32_(0)                                          /* (USBCORE_UIR) (Device mode) USB Reset Interrupt bit Device mode / (Host mode)USB Detach Interrupt bit Host mode Position */
#define USBCORE_UIR_URSTIF_DETACHIF_Msk       (_UINT32_(0x1) << USBCORE_UIR_URSTIF_DETACHIF_Pos)   /* (USBCORE_UIR) (Device mode) USB Reset Interrupt bit Device mode / (Host mode)USB Detach Interrupt bit Host mode Mask */
#define USBCORE_UIR_URSTIF_DETACHIF(value)    (USBCORE_UIR_URSTIF_DETACHIF_Msk & (_UINT32_(value) << USBCORE_UIR_URSTIF_DETACHIF_Pos)) /* Assigment of value for URSTIF_DETACHIF in the USBCORE_UIR register */
#define   USBCORE_UIR_URSTIF_DETACHIF_DETECT_Val _UINT32_(0x1)                                        /* (USBCORE_UIR) (Device mode)Valid USB Reset has occurred / (Host mode)Peripheral detachment was detected by the USB module  */
#define   USBCORE_UIR_URSTIF_DETACHIF_NOT_DETECT_Val _UINT32_(0x0)                                        /* (USBCORE_UIR) (Device mode)No USB Reset has occurred / (Host mode)Peripheral detachment was not detected  */
#define USBCORE_UIR_URSTIF_DETACHIF_DETECT    (USBCORE_UIR_URSTIF_DETACHIF_DETECT_Val << USBCORE_UIR_URSTIF_DETACHIF_Pos) /* (USBCORE_UIR) (Device mode)Valid USB Reset has occurred / (Host mode)Peripheral detachment was detected by the USB module Position  */
#define USBCORE_UIR_URSTIF_DETACHIF_NOT_DETECT (USBCORE_UIR_URSTIF_DETACHIF_NOT_DETECT_Val << USBCORE_UIR_URSTIF_DETACHIF_Pos) /* (USBCORE_UIR) (Device mode)No USB Reset has occurred / (Host mode)Peripheral detachment was not detected Position  */
#define USBCORE_UIR_UERRIF_Pos                _UINT32_(1)                                          /* (USBCORE_UIR) USB Error Condition Interrupt bit Position */
#define USBCORE_UIR_UERRIF_Msk                (_UINT32_(0x1) << USBCORE_UIR_UERRIF_Pos)            /* (USBCORE_UIR) USB Error Condition Interrupt bit Mask */
#define USBCORE_UIR_UERRIF(value)             (USBCORE_UIR_UERRIF_Msk & (_UINT32_(value) << USBCORE_UIR_UERRIF_Pos)) /* Assigment of value for UERRIF in the USBCORE_UIR register */
#define   USBCORE_UIR_UERRIF_ERROR_Val        _UINT32_(0x1)                                        /* (USBCORE_UIR) Unmasked error condition has occurred  */
#define   USBCORE_UIR_UERRIF_NO_ERROR_Val     _UINT32_(0x0)                                        /* (USBCORE_UIR) Unmasked error condition has not occurred  */
#define USBCORE_UIR_UERRIF_ERROR              (USBCORE_UIR_UERRIF_ERROR_Val << USBCORE_UIR_UERRIF_Pos) /* (USBCORE_UIR) Unmasked error condition has occurred Position  */
#define USBCORE_UIR_UERRIF_NO_ERROR           (USBCORE_UIR_UERRIF_NO_ERROR_Val << USBCORE_UIR_UERRIF_Pos) /* (USBCORE_UIR) Unmasked error condition has not occurred Position  */
#define USBCORE_UIR_SOFIF_Pos                 _UINT32_(2)                                          /* (USBCORE_UIR) SOF Token Interrupt bit Position */
#define USBCORE_UIR_SOFIF_Msk                 (_UINT32_(0x1) << USBCORE_UIR_SOFIF_Pos)             /* (USBCORE_UIR) SOF Token Interrupt bit Mask */
#define USBCORE_UIR_SOFIF(value)              (USBCORE_UIR_SOFIF_Msk & (_UINT32_(value) << USBCORE_UIR_SOFIF_Pos)) /* Assigment of value for SOFIF in the USBCORE_UIR register */
#define   USBCORE_UIR_SOFIF_SOF_RCVE_Val      _UINT32_(0x1)                                        /* (USBCORE_UIR) SOF token received by the peripheral or the SOF threshold reached by the host  */
#define   USBCORE_UIR_SOFIF_NO_SOF_Val        _UINT32_(0x0)                                        /* (USBCORE_UIR) SOF token was not received nor threshold reached  */
#define USBCORE_UIR_SOFIF_SOF_RCVE            (USBCORE_UIR_SOFIF_SOF_RCVE_Val << USBCORE_UIR_SOFIF_Pos) /* (USBCORE_UIR) SOF token received by the peripheral or the SOF threshold reached by the host Position  */
#define USBCORE_UIR_SOFIF_NO_SOF              (USBCORE_UIR_SOFIF_NO_SOF_Val << USBCORE_UIR_SOFIF_Pos) /* (USBCORE_UIR) SOF token was not received nor threshold reached Position  */
#define USBCORE_UIR_TRNIF_Pos                 _UINT32_(3)                                          /* (USBCORE_UIR) Token Processing Complete Interrupt bit Position */
#define USBCORE_UIR_TRNIF_Msk                 (_UINT32_(0x1) << USBCORE_UIR_TRNIF_Pos)             /* (USBCORE_UIR) Token Processing Complete Interrupt bit Mask */
#define USBCORE_UIR_TRNIF(value)              (USBCORE_UIR_TRNIF_Msk & (_UINT32_(value) << USBCORE_UIR_TRNIF_Pos)) /* Assigment of value for TRNIF in the USBCORE_UIR register */
#define   USBCORE_UIR_TRNIF_READY_Val         _UINT32_(0x1)                                        /* (USBCORE_UIR) Processing of current token is complete; a read of the UxSTAT register will provide endpoint information  */
#define   USBCORE_UIR_TRNIF_NOT_READY_Val     _UINT32_(0x0)                                        /* (USBCORE_UIR) Processing of current token not complete  */
#define USBCORE_UIR_TRNIF_READY               (USBCORE_UIR_TRNIF_READY_Val << USBCORE_UIR_TRNIF_Pos) /* (USBCORE_UIR) Processing of current token is complete; a read of the UxSTAT register will provide endpoint information Position  */
#define USBCORE_UIR_TRNIF_NOT_READY           (USBCORE_UIR_TRNIF_NOT_READY_Val << USBCORE_UIR_TRNIF_Pos) /* (USBCORE_UIR) Processing of current token not complete Position  */
#define USBCORE_UIR_IDLEIF_Pos                _UINT32_(4)                                          /* (USBCORE_UIR) Idle Detect Interrupt bit Position */
#define USBCORE_UIR_IDLEIF_Msk                (_UINT32_(0x1) << USBCORE_UIR_IDLEIF_Pos)            /* (USBCORE_UIR) Idle Detect Interrupt bit Mask */
#define USBCORE_UIR_IDLEIF(value)             (USBCORE_UIR_IDLEIF_Msk & (_UINT32_(value) << USBCORE_UIR_IDLEIF_Pos)) /* Assigment of value for IDLEIF in the USBCORE_UIR register */
#define   USBCORE_UIR_IDLEIF_IDLE_Val         _UINT32_(0x1)                                        /* (USBCORE_UIR) Idle condition detected (constant Idle state of 3 ms or more)  */
#define   USBCORE_UIR_IDLEIF_NOT_IDLE_Val     _UINT32_(0x0)                                        /* (USBCORE_UIR) No Idle condition detected  */
#define USBCORE_UIR_IDLEIF_IDLE               (USBCORE_UIR_IDLEIF_IDLE_Val << USBCORE_UIR_IDLEIF_Pos) /* (USBCORE_UIR) Idle condition detected (constant Idle state of 3 ms or more) Position  */
#define USBCORE_UIR_IDLEIF_NOT_IDLE           (USBCORE_UIR_IDLEIF_NOT_IDLE_Val << USBCORE_UIR_IDLEIF_Pos) /* (USBCORE_UIR) No Idle condition detected Position  */
#define USBCORE_UIR_RESUMEIF_Pos              _UINT32_(5)                                          /* (USBCORE_UIR) Resume Interrupt bit Position */
#define USBCORE_UIR_RESUMEIF_Msk              (_UINT32_(0x1) << USBCORE_UIR_RESUMEIF_Pos)          /* (USBCORE_UIR) Resume Interrupt bit Mask */
#define USBCORE_UIR_RESUMEIF(value)           (USBCORE_UIR_RESUMEIF_Msk & (_UINT32_(value) << USBCORE_UIR_RESUMEIF_Pos)) /* Assigment of value for RESUMEIF in the USBCORE_UIR register */
#define   USBCORE_UIR_RESUMEIF_K_STATE_Val    _UINT32_(0x1)                                        /* (USBCORE_UIR) K-State is observed on the D+ or D- pin for 2.5 s  */
#define   USBCORE_UIR_RESUMEIF_NORMAL_Val     _UINT32_(0x0)                                        /* (USBCORE_UIR) K-State is not observed  */
#define USBCORE_UIR_RESUMEIF_K_STATE          (USBCORE_UIR_RESUMEIF_K_STATE_Val << USBCORE_UIR_RESUMEIF_Pos) /* (USBCORE_UIR) K-State is observed on the D+ or D- pin for 2.5 s Position  */
#define USBCORE_UIR_RESUMEIF_NORMAL           (USBCORE_UIR_RESUMEIF_NORMAL_Val << USBCORE_UIR_RESUMEIF_Pos) /* (USBCORE_UIR) K-State is not observed Position  */
#define USBCORE_UIR_ATTACHIF_Pos              _UINT32_(6)                                          /* (USBCORE_UIR) Peripheral Attach Interrupt bit Position */
#define USBCORE_UIR_ATTACHIF_Msk              (_UINT32_(0x1) << USBCORE_UIR_ATTACHIF_Pos)          /* (USBCORE_UIR) Peripheral Attach Interrupt bit Mask */
#define USBCORE_UIR_ATTACHIF(value)           (USBCORE_UIR_ATTACHIF_Msk & (_UINT32_(value) << USBCORE_UIR_ATTACHIF_Pos)) /* Assigment of value for ATTACHIF in the USBCORE_UIR register */
#define   USBCORE_UIR_ATTACHIF_DETECT_Val     _UINT32_(0x1)                                        /* (USBCORE_UIR) Peripheral attachment was detected by the USB module  */
#define   USBCORE_UIR_ATTACHIF_NOT_DETECT_Val _UINT32_(0x0)                                        /* (USBCORE_UIR) Peripheral attachment was not detected  */
#define USBCORE_UIR_ATTACHIF_DETECT           (USBCORE_UIR_ATTACHIF_DETECT_Val << USBCORE_UIR_ATTACHIF_Pos) /* (USBCORE_UIR) Peripheral attachment was detected by the USB module Position  */
#define USBCORE_UIR_ATTACHIF_NOT_DETECT       (USBCORE_UIR_ATTACHIF_NOT_DETECT_Val << USBCORE_UIR_ATTACHIF_Pos) /* (USBCORE_UIR) Peripheral attachment was not detected Position  */
#define USBCORE_UIR_STALLIF_Pos               _UINT32_(7)                                          /* (USBCORE_UIR) STALL Handshake Interrupt bit Position */
#define USBCORE_UIR_STALLIF_Msk               (_UINT32_(0x1) << USBCORE_UIR_STALLIF_Pos)           /* (USBCORE_UIR) STALL Handshake Interrupt bit Mask */
#define USBCORE_UIR_STALLIF(value)            (USBCORE_UIR_STALLIF_Msk & (_UINT32_(value) << USBCORE_UIR_STALLIF_Pos)) /* Assigment of value for STALLIF in the USBCORE_UIR register */
#define   USBCORE_UIR_STALLIF_HANDSHAKE_Val   _UINT32_(0x1)                                        /* (USBCORE_UIR) A STALL handshake was sent by Peripheral or received by Host during the handshake phase of the transaction  */
#define   USBCORE_UIR_STALLIF_NO_HANDSHAKE_Val _UINT32_(0x0)                                        /* (USBCORE_UIR) STALL handshake has not been sent  */
#define USBCORE_UIR_STALLIF_HANDSHAKE         (USBCORE_UIR_STALLIF_HANDSHAKE_Val << USBCORE_UIR_STALLIF_Pos) /* (USBCORE_UIR) A STALL handshake was sent by Peripheral or received by Host during the handshake phase of the transaction Position  */
#define USBCORE_UIR_STALLIF_NO_HANDSHAKE      (USBCORE_UIR_STALLIF_NO_HANDSHAKE_Val << USBCORE_UIR_STALLIF_Pos) /* (USBCORE_UIR) STALL handshake has not been sent Position  */
#define USBCORE_UIR_Msk                       _UINT32_(0x000000FF)                                 /* (USBCORE_UIR) Register Mask  */


/* -------- USBCORE_UIRCLR : (USBCORE Offset: 0x204) (R/W 32)  -------- */
#define USBCORE_UIRCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (USBCORE_UIRCLR)   Reset Value */

#define USBCORE_UIRCLR_Msk                    _UINT32_(0x00000000)                                 /* (USBCORE_UIRCLR) Register Mask  */


/* -------- USBCORE_UIE : (USBCORE Offset: 0x210) (R/W 32) USB Interrupt Enable Register -------- */
#define USBCORE_UIE_URSTIE_DETACHIE_Pos       _UINT32_(0)                                          /* (USBCORE_UIE) (Device mode) USB Reset Interrupt Enable bit Device mode / (Host mode)USB Detach Interrupt Enable bit Host Mode Position */
#define USBCORE_UIE_URSTIE_DETACHIE_Msk       (_UINT32_(0x1) << USBCORE_UIE_URSTIE_DETACHIE_Pos)   /* (USBCORE_UIE) (Device mode) USB Reset Interrupt Enable bit Device mode / (Host mode)USB Detach Interrupt Enable bit Host Mode Mask */
#define USBCORE_UIE_URSTIE_DETACHIE(value)    (USBCORE_UIE_URSTIE_DETACHIE_Msk & (_UINT32_(value) << USBCORE_UIE_URSTIE_DETACHIE_Pos)) /* Assigment of value for URSTIE_DETACHIE in the USBCORE_UIE register */
#define   USBCORE_UIE_URSTIE_DETACHIE_ON_Val  _UINT32_(0x1)                                        /* (USBCORE_UIE) (Device mode) URSTIF interrupt is enabled / (Host mode) DATTCHIF interrupt is enabled  */
#define   USBCORE_UIE_URSTIE_DETACHIE_OFF_Val _UINT32_(0x0)                                        /* (USBCORE_UIE) (Device mode) URSTIF interrupt is disabled / (Host mode) DATTCHIF interrupt is disabled  */
#define USBCORE_UIE_URSTIE_DETACHIE_ON        (USBCORE_UIE_URSTIE_DETACHIE_ON_Val << USBCORE_UIE_URSTIE_DETACHIE_Pos) /* (USBCORE_UIE) (Device mode) URSTIF interrupt is enabled / (Host mode) DATTCHIF interrupt is enabled Position  */
#define USBCORE_UIE_URSTIE_DETACHIE_OFF       (USBCORE_UIE_URSTIE_DETACHIE_OFF_Val << USBCORE_UIE_URSTIE_DETACHIE_Pos) /* (USBCORE_UIE) (Device mode) URSTIF interrupt is disabled / (Host mode) DATTCHIF interrupt is disabled Position  */
#define USBCORE_UIE_UERRIE_Pos                _UINT32_(1)                                          /* (USBCORE_UIE) USB Error Interrupt Enable bit Position */
#define USBCORE_UIE_UERRIE_Msk                (_UINT32_(0x1) << USBCORE_UIE_UERRIE_Pos)            /* (USBCORE_UIE) USB Error Interrupt Enable bit Mask */
#define USBCORE_UIE_UERRIE(value)             (USBCORE_UIE_UERRIE_Msk & (_UINT32_(value) << USBCORE_UIE_UERRIE_Pos)) /* Assigment of value for UERRIE in the USBCORE_UIE register */
#define   USBCORE_UIE_UERRIE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UIE) USB Error interrupt is enabled  */
#define   USBCORE_UIE_UERRIE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UIE) USB Error interrupt is disabled  */
#define USBCORE_UIE_UERRIE_ON                 (USBCORE_UIE_UERRIE_ON_Val << USBCORE_UIE_UERRIE_Pos) /* (USBCORE_UIE) USB Error interrupt is enabled Position  */
#define USBCORE_UIE_UERRIE_OFF                (USBCORE_UIE_UERRIE_OFF_Val << USBCORE_UIE_UERRIE_Pos) /* (USBCORE_UIE) USB Error interrupt is disabled Position  */
#define USBCORE_UIE_SOFIE_Pos                 _UINT32_(2)                                          /* (USBCORE_UIE) SOF Token Interrupt Enable bit Position */
#define USBCORE_UIE_SOFIE_Msk                 (_UINT32_(0x1) << USBCORE_UIE_SOFIE_Pos)             /* (USBCORE_UIE) SOF Token Interrupt Enable bit Mask */
#define USBCORE_UIE_SOFIE(value)              (USBCORE_UIE_SOFIE_Msk & (_UINT32_(value) << USBCORE_UIE_SOFIE_Pos)) /* Assigment of value for SOFIE in the USBCORE_UIE register */
#define   USBCORE_UIE_SOFIE_ON_Val            _UINT32_(0x1)                                        /* (USBCORE_UIE) SOFIF interrupt is enabled  */
#define   USBCORE_UIE_SOFIE_OFF_Val           _UINT32_(0x0)                                        /* (USBCORE_UIE) SOFIF interrupt is disabled  */
#define USBCORE_UIE_SOFIE_ON                  (USBCORE_UIE_SOFIE_ON_Val << USBCORE_UIE_SOFIE_Pos)  /* (USBCORE_UIE) SOFIF interrupt is enabled Position  */
#define USBCORE_UIE_SOFIE_OFF                 (USBCORE_UIE_SOFIE_OFF_Val << USBCORE_UIE_SOFIE_Pos) /* (USBCORE_UIE) SOFIF interrupt is disabled Position  */
#define USBCORE_UIE_TRNIE_Pos                 _UINT32_(3)                                          /* (USBCORE_UIE) Token Processing Complete Interrupt Enable bit Position */
#define USBCORE_UIE_TRNIE_Msk                 (_UINT32_(0x1) << USBCORE_UIE_TRNIE_Pos)             /* (USBCORE_UIE) Token Processing Complete Interrupt Enable bit Mask */
#define USBCORE_UIE_TRNIE(value)              (USBCORE_UIE_TRNIE_Msk & (_UINT32_(value) << USBCORE_UIE_TRNIE_Pos)) /* Assigment of value for TRNIE in the USBCORE_UIE register */
#define   USBCORE_UIE_TRNIE_ON_Val            _UINT32_(0x1)                                        /* (USBCORE_UIE) TRNIF interrupt is enabled  */
#define   USBCORE_UIE_TRNIE_OFF_Val           _UINT32_(0x0)                                        /* (USBCORE_UIE) TRNIF interrupt is disabled  */
#define USBCORE_UIE_TRNIE_ON                  (USBCORE_UIE_TRNIE_ON_Val << USBCORE_UIE_TRNIE_Pos)  /* (USBCORE_UIE) TRNIF interrupt is enabled Position  */
#define USBCORE_UIE_TRNIE_OFF                 (USBCORE_UIE_TRNIE_OFF_Val << USBCORE_UIE_TRNIE_Pos) /* (USBCORE_UIE) TRNIF interrupt is disabled Position  */
#define USBCORE_UIE_IDLEIE_Pos                _UINT32_(4)                                          /* (USBCORE_UIE) Idle Detect Interrupt Enable bit Position */
#define USBCORE_UIE_IDLEIE_Msk                (_UINT32_(0x1) << USBCORE_UIE_IDLEIE_Pos)            /* (USBCORE_UIE) Idle Detect Interrupt Enable bit Mask */
#define USBCORE_UIE_IDLEIE(value)             (USBCORE_UIE_IDLEIE_Msk & (_UINT32_(value) << USBCORE_UIE_IDLEIE_Pos)) /* Assigment of value for IDLEIE in the USBCORE_UIE register */
#define   USBCORE_UIE_IDLEIE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UIE) Idle interrupt is enabled  */
#define   USBCORE_UIE_IDLEIE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UIE) Idle interrupt is disabled  */
#define USBCORE_UIE_IDLEIE_ON                 (USBCORE_UIE_IDLEIE_ON_Val << USBCORE_UIE_IDLEIE_Pos) /* (USBCORE_UIE) Idle interrupt is enabled Position  */
#define USBCORE_UIE_IDLEIE_OFF                (USBCORE_UIE_IDLEIE_OFF_Val << USBCORE_UIE_IDLEIE_Pos) /* (USBCORE_UIE) Idle interrupt is disabled Position  */
#define USBCORE_UIE_RESUMEIE_Pos              _UINT32_(5)                                          /* (USBCORE_UIE) RESUME Interrupt Enable bit Position */
#define USBCORE_UIE_RESUMEIE_Msk              (_UINT32_(0x1) << USBCORE_UIE_RESUMEIE_Pos)          /* (USBCORE_UIE) RESUME Interrupt Enable bit Mask */
#define USBCORE_UIE_RESUMEIE(value)           (USBCORE_UIE_RESUMEIE_Msk & (_UINT32_(value) << USBCORE_UIE_RESUMEIE_Pos)) /* Assigment of value for RESUMEIE in the USBCORE_UIE register */
#define   USBCORE_UIE_RESUMEIE_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_UIE) RESUME interrupt is enabled  */
#define   USBCORE_UIE_RESUMEIE_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_UIE) RESUME interrupt is disabled  */
#define USBCORE_UIE_RESUMEIE_ON               (USBCORE_UIE_RESUMEIE_ON_Val << USBCORE_UIE_RESUMEIE_Pos) /* (USBCORE_UIE) RESUME interrupt is enabled Position  */
#define USBCORE_UIE_RESUMEIE_OFF              (USBCORE_UIE_RESUMEIE_OFF_Val << USBCORE_UIE_RESUMEIE_Pos) /* (USBCORE_UIE) RESUME interrupt is disabled Position  */
#define USBCORE_UIE_ATTACHIE_Pos              _UINT32_(6)                                          /* (USBCORE_UIE) ATTACH Interrupt Enable bit Position */
#define USBCORE_UIE_ATTACHIE_Msk              (_UINT32_(0x1) << USBCORE_UIE_ATTACHIE_Pos)          /* (USBCORE_UIE) ATTACH Interrupt Enable bit Mask */
#define USBCORE_UIE_ATTACHIE(value)           (USBCORE_UIE_ATTACHIE_Msk & (_UINT32_(value) << USBCORE_UIE_ATTACHIE_Pos)) /* Assigment of value for ATTACHIE in the USBCORE_UIE register */
#define   USBCORE_UIE_ATTACHIE_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_UIE) ATTACH interrupt is enabled  */
#define   USBCORE_UIE_ATTACHIE_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_UIE) ATTACH interrupt is disabled  */
#define USBCORE_UIE_ATTACHIE_ON               (USBCORE_UIE_ATTACHIE_ON_Val << USBCORE_UIE_ATTACHIE_Pos) /* (USBCORE_UIE) ATTACH interrupt is enabled Position  */
#define USBCORE_UIE_ATTACHIE_OFF              (USBCORE_UIE_ATTACHIE_OFF_Val << USBCORE_UIE_ATTACHIE_Pos) /* (USBCORE_UIE) ATTACH interrupt is disabled Position  */
#define USBCORE_UIE_STALLIE_Pos               _UINT32_(7)                                          /* (USBCORE_UIE) STALL Handshake Interrupt Enable bit Position */
#define USBCORE_UIE_STALLIE_Msk               (_UINT32_(0x1) << USBCORE_UIE_STALLIE_Pos)           /* (USBCORE_UIE) STALL Handshake Interrupt Enable bit Mask */
#define USBCORE_UIE_STALLIE(value)            (USBCORE_UIE_STALLIE_Msk & (_UINT32_(value) << USBCORE_UIE_STALLIE_Pos)) /* Assigment of value for STALLIE in the USBCORE_UIE register */
#define   USBCORE_UIE_STALLIE_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UIE) STALL interrupt is enabled  */
#define   USBCORE_UIE_STALLIE_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UIE) STALL interrupt is disabled  */
#define USBCORE_UIE_STALLIE_ON                (USBCORE_UIE_STALLIE_ON_Val << USBCORE_UIE_STALLIE_Pos) /* (USBCORE_UIE) STALL interrupt is enabled Position  */
#define USBCORE_UIE_STALLIE_OFF               (USBCORE_UIE_STALLIE_OFF_Val << USBCORE_UIE_STALLIE_Pos) /* (USBCORE_UIE) STALL interrupt is disabled Position  */
#define USBCORE_UIE_Msk                       _UINT32_(0x000000FF)                                 /* (USBCORE_UIE) Register Mask  */


/* -------- USBCORE_UIECLR : (USBCORE Offset: 0x214) (R/W 32)  -------- */
#define USBCORE_UIECLR_RESETVALUE             _UINT32_(0x00)                                       /*  (USBCORE_UIECLR)   Reset Value */

#define USBCORE_UIECLR_Msk                    _UINT32_(0x00000000)                                 /* (USBCORE_UIECLR) Register Mask  */


/* -------- USBCORE_UIESET : (USBCORE Offset: 0x218) (R/W 32)  -------- */
#define USBCORE_UIESET_RESETVALUE             _UINT32_(0x00)                                       /*  (USBCORE_UIESET)   Reset Value */

#define USBCORE_UIESET_Msk                    _UINT32_(0x00000000)                                 /* (USBCORE_UIESET) Register Mask  */


/* -------- USBCORE_UIEINV : (USBCORE Offset: 0x21C) (R/W 32)  -------- */
#define USBCORE_UIEINV_RESETVALUE             _UINT32_(0x00)                                       /*  (USBCORE_UIEINV)   Reset Value */

#define USBCORE_UIEINV_Msk                    _UINT32_(0x00000000)                                 /* (USBCORE_UIEINV) Register Mask  */


/* -------- USBCORE_UEIR : (USBCORE Offset: 0x220) (R/W 32) USB Error Interrupt Status Register -------- */
#define USBCORE_UEIR_PIDEF_Pos                _UINT32_(0)                                          /* (USBCORE_UEIR) PID Check Failure Flag bit Position */
#define USBCORE_UEIR_PIDEF_Msk                (_UINT32_(0x1) << USBCORE_UEIR_PIDEF_Pos)            /* (USBCORE_UEIR) PID Check Failure Flag bit Mask */
#define USBCORE_UEIR_PIDEF(value)             (USBCORE_UEIR_PIDEF_Msk & (_UINT32_(value) << USBCORE_UEIR_PIDEF_Pos)) /* Assigment of value for PIDEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_PIDEF_FAIL_Val         _UINT32_(0x1)                                        /* (USBCORE_UEIR) PID check failed  */
#define   USBCORE_UEIR_PIDEF_PASS_Val         _UINT32_(0x0)                                        /* (USBCORE_UEIR) PID check passed  */
#define USBCORE_UEIR_PIDEF_FAIL               (USBCORE_UEIR_PIDEF_FAIL_Val << USBCORE_UEIR_PIDEF_Pos) /* (USBCORE_UEIR) PID check failed Position  */
#define USBCORE_UEIR_PIDEF_PASS               (USBCORE_UEIR_PIDEF_PASS_Val << USBCORE_UEIR_PIDEF_Pos) /* (USBCORE_UEIR) PID check passed Position  */
#define USBCORE_UEIR_CRC5EF_EOFEF_Pos         _UINT32_(1)                                          /* (USBCORE_UEIR) (Device mode)CRC5 Host Error Flag bit / (Host mode)EOF Error Flag bit Position */
#define USBCORE_UEIR_CRC5EF_EOFEF_Msk         (_UINT32_(0x1) << USBCORE_UEIR_CRC5EF_EOFEF_Pos)     /* (USBCORE_UEIR) (Device mode)CRC5 Host Error Flag bit / (Host mode)EOF Error Flag bit Mask */
#define USBCORE_UEIR_CRC5EF_EOFEF(value)      (USBCORE_UEIR_CRC5EF_EOFEF_Msk & (_UINT32_(value) << USBCORE_UEIR_CRC5EF_EOFEF_Pos)) /* Assigment of value for CRC5EF_EOFEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_CRC5EF_EOFEF_ERROR_Val _UINT32_(0x1)                                        /* (USBCORE_UEIR) (Device mode)Token packet rejected due to CRC5 error / (Host mode)EOF error condition detected  */
#define   USBCORE_UEIR_CRC5EF_EOFEF_NO_ERROR_Val _UINT32_(0x0)                                        /* (USBCORE_UEIR) (Device mode)Token packet accepted / (Host mode)No EOF error condition  */
#define USBCORE_UEIR_CRC5EF_EOFEF_ERROR       (USBCORE_UEIR_CRC5EF_EOFEF_ERROR_Val << USBCORE_UEIR_CRC5EF_EOFEF_Pos) /* (USBCORE_UEIR) (Device mode)Token packet rejected due to CRC5 error / (Host mode)EOF error condition detected Position  */
#define USBCORE_UEIR_CRC5EF_EOFEF_NO_ERROR    (USBCORE_UEIR_CRC5EF_EOFEF_NO_ERROR_Val << USBCORE_UEIR_CRC5EF_EOFEF_Pos) /* (USBCORE_UEIR) (Device mode)Token packet accepted / (Host mode)No EOF error condition Position  */
#define USBCORE_UEIR_CRC16EF_Pos              _UINT32_(2)                                          /* (USBCORE_UEIR) CRC16 Failure Flag bit Position */
#define USBCORE_UEIR_CRC16EF_Msk              (_UINT32_(0x1) << USBCORE_UEIR_CRC16EF_Pos)          /* (USBCORE_UEIR) CRC16 Failure Flag bit Mask */
#define USBCORE_UEIR_CRC16EF(value)           (USBCORE_UEIR_CRC16EF_Msk & (_UINT32_(value) << USBCORE_UEIR_CRC16EF_Pos)) /* Assigment of value for CRC16EF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_CRC16EF_ERROR_Val      _UINT32_(0x1)                                        /* (USBCORE_UEIR) Data packet rejected due to CRC16 error  */
#define   USBCORE_UEIR_CRC16EF_NO_ERROR_Val   _UINT32_(0x0)                                        /* (USBCORE_UEIR) Data packet accepted  */
#define USBCORE_UEIR_CRC16EF_ERROR            (USBCORE_UEIR_CRC16EF_ERROR_Val << USBCORE_UEIR_CRC16EF_Pos) /* (USBCORE_UEIR) Data packet rejected due to CRC16 error Position  */
#define USBCORE_UEIR_CRC16EF_NO_ERROR         (USBCORE_UEIR_CRC16EF_NO_ERROR_Val << USBCORE_UEIR_CRC16EF_Pos) /* (USBCORE_UEIR) Data packet accepted Position  */
#define USBCORE_UEIR_DFN8EF_Pos               _UINT32_(3)                                          /* (USBCORE_UEIR) Data Field Size Error Flag bit Position */
#define USBCORE_UEIR_DFN8EF_Msk               (_UINT32_(0x1) << USBCORE_UEIR_DFN8EF_Pos)           /* (USBCORE_UEIR) Data Field Size Error Flag bit Mask */
#define USBCORE_UEIR_DFN8EF(value)            (USBCORE_UEIR_DFN8EF_Msk & (_UINT32_(value) << USBCORE_UEIR_DFN8EF_Pos)) /* Assigment of value for DFN8EF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_DFN8EF_NOT_INTEGRAL_Val _UINT32_(0x1)                                        /* (USBCORE_UEIR) Data field received is not an integral number of bytes  */
#define   USBCORE_UEIR_DFN8EF_INTEGRAL_Val    _UINT32_(0x0)                                        /* (USBCORE_UEIR) Data field received is an integral number of bytes  */
#define USBCORE_UEIR_DFN8EF_NOT_INTEGRAL      (USBCORE_UEIR_DFN8EF_NOT_INTEGRAL_Val << USBCORE_UEIR_DFN8EF_Pos) /* (USBCORE_UEIR) Data field received is not an integral number of bytes Position  */
#define USBCORE_UEIR_DFN8EF_INTEGRAL          (USBCORE_UEIR_DFN8EF_INTEGRAL_Val << USBCORE_UEIR_DFN8EF_Pos) /* (USBCORE_UEIR) Data field received is an integral number of bytes Position  */
#define USBCORE_UEIR_BTOEF_Pos                _UINT32_(4)                                          /* (USBCORE_UEIR) Bus Turnaround Time-Out Error Flag bit Position */
#define USBCORE_UEIR_BTOEF_Msk                (_UINT32_(0x1) << USBCORE_UEIR_BTOEF_Pos)            /* (USBCORE_UEIR) Bus Turnaround Time-Out Error Flag bit Mask */
#define USBCORE_UEIR_BTOEF(value)             (USBCORE_UEIR_BTOEF_Msk & (_UINT32_(value) << USBCORE_UEIR_BTOEF_Pos)) /* Assigment of value for BTOEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_BTOEF_TIMEOUT_Val      _UINT32_(0x1)                                        /* (USBCORE_UEIR) Bus turnaround time-out has occurred  */
#define   USBCORE_UEIR_BTOEF_NO_TIMEOUT_Val   _UINT32_(0x0)                                        /* (USBCORE_UEIR) No bus turnaround time-out  */
#define USBCORE_UEIR_BTOEF_TIMEOUT            (USBCORE_UEIR_BTOEF_TIMEOUT_Val << USBCORE_UEIR_BTOEF_Pos) /* (USBCORE_UEIR) Bus turnaround time-out has occurred Position  */
#define USBCORE_UEIR_BTOEF_NO_TIMEOUT         (USBCORE_UEIR_BTOEF_NO_TIMEOUT_Val << USBCORE_UEIR_BTOEF_Pos) /* (USBCORE_UEIR) No bus turnaround time-out Position  */
#define USBCORE_UEIR_DMAEF_Pos                _UINT32_(5)                                          /* (USBCORE_UEIR) DMA Error Flag bit Position */
#define USBCORE_UEIR_DMAEF_Msk                (_UINT32_(0x1) << USBCORE_UEIR_DMAEF_Pos)            /* (USBCORE_UEIR) DMA Error Flag bit Mask */
#define USBCORE_UEIR_DMAEF(value)             (USBCORE_UEIR_DMAEF_Msk & (_UINT32_(value) << USBCORE_UEIR_DMAEF_Pos)) /* Assigment of value for DMAEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_DMAEF_ERROR_Val        _UINT32_(0x1)                                        /* (USBCORE_UEIR) USB DMA error condition detected  */
#define   USBCORE_UEIR_DMAEF_NO_ERROR_Val     _UINT32_(0x0)                                        /* (USBCORE_UEIR) No DMA error  */
#define USBCORE_UEIR_DMAEF_ERROR              (USBCORE_UEIR_DMAEF_ERROR_Val << USBCORE_UEIR_DMAEF_Pos) /* (USBCORE_UEIR) USB DMA error condition detected Position  */
#define USBCORE_UEIR_DMAEF_NO_ERROR           (USBCORE_UEIR_DMAEF_NO_ERROR_Val << USBCORE_UEIR_DMAEF_Pos) /* (USBCORE_UEIR) No DMA error Position  */
#define USBCORE_UEIR_BMXEF_Pos                _UINT32_(6)                                          /* (USBCORE_UEIR) Bus Matrix Error Flag bit Position */
#define USBCORE_UEIR_BMXEF_Msk                (_UINT32_(0x1) << USBCORE_UEIR_BMXEF_Pos)            /* (USBCORE_UEIR) Bus Matrix Error Flag bit Mask */
#define USBCORE_UEIR_BMXEF(value)             (USBCORE_UEIR_BMXEF_Msk & (_UINT32_(value) << USBCORE_UEIR_BMXEF_Pos)) /* Assigment of value for BMXEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_BMXEF_ERROR_Val        _UINT32_(0x1)                                        /* (USBCORE_UEIR) BVCI access initiated on BMX returned response error  */
#define   USBCORE_UEIR_BMXEF_NO_ERROR_Val     _UINT32_(0x0)                                        /* (USBCORE_UEIR) No address error  */
#define USBCORE_UEIR_BMXEF_ERROR              (USBCORE_UEIR_BMXEF_ERROR_Val << USBCORE_UEIR_BMXEF_Pos) /* (USBCORE_UEIR) BVCI access initiated on BMX returned response error Position  */
#define USBCORE_UEIR_BMXEF_NO_ERROR           (USBCORE_UEIR_BMXEF_NO_ERROR_Val << USBCORE_UEIR_BMXEF_Pos) /* (USBCORE_UEIR) No address error Position  */
#define USBCORE_UEIR_BTSEF_Pos                _UINT32_(7)                                          /* (USBCORE_UEIR) Bit Stuff Error Flag bit Position */
#define USBCORE_UEIR_BTSEF_Msk                (_UINT32_(0x1) << USBCORE_UEIR_BTSEF_Pos)            /* (USBCORE_UEIR) Bit Stuff Error Flag bit Mask */
#define USBCORE_UEIR_BTSEF(value)             (USBCORE_UEIR_BTSEF_Msk & (_UINT32_(value) << USBCORE_UEIR_BTSEF_Pos)) /* Assigment of value for BTSEF in the USBCORE_UEIR register */
#define   USBCORE_UEIR_BTSEF_ERROR_Val        _UINT32_(0x1)                                        /* (USBCORE_UEIR) Packet rejected due to bit stuff error  */
#define   USBCORE_UEIR_BTSEF_NO_ERROR_Val     _UINT32_(0x0)                                        /* (USBCORE_UEIR) Packet accepted  */
#define USBCORE_UEIR_BTSEF_ERROR              (USBCORE_UEIR_BTSEF_ERROR_Val << USBCORE_UEIR_BTSEF_Pos) /* (USBCORE_UEIR) Packet rejected due to bit stuff error Position  */
#define USBCORE_UEIR_BTSEF_NO_ERROR           (USBCORE_UEIR_BTSEF_NO_ERROR_Val << USBCORE_UEIR_BTSEF_Pos) /* (USBCORE_UEIR) Packet accepted Position  */
#define USBCORE_UEIR_Msk                      _UINT32_(0x000000FF)                                 /* (USBCORE_UEIR) Register Mask  */


/* -------- USBCORE_UEIRCLR : (USBCORE Offset: 0x224) (R/W 32)  -------- */
#define USBCORE_UEIRCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEIRCLR)   Reset Value */

#define USBCORE_UEIRCLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEIRCLR) Register Mask  */


/* -------- USBCORE_UEIE : (USBCORE Offset: 0x230) (R/W 32) USB Error Interrupt Enable Register -------- */
#define USBCORE_UEIE_PIDEE_Pos                _UINT32_(0)                                          /* (USBCORE_UEIE) PID Check Failure Interrupt Enable bit Position */
#define USBCORE_UEIE_PIDEE_Msk                (_UINT32_(0x1) << USBCORE_UEIE_PIDEE_Pos)            /* (USBCORE_UEIE) PID Check Failure Interrupt Enable bit Mask */
#define USBCORE_UEIE_PIDEE(value)             (USBCORE_UEIE_PIDEE_Msk & (_UINT32_(value) << USBCORE_UEIE_PIDEE_Pos)) /* Assigment of value for PIDEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_PIDEE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UEIE) PIDEF interrupt is enabled  */
#define   USBCORE_UEIE_PIDEE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UEIE) PIDEF interrupt is disabled  */
#define USBCORE_UEIE_PIDEE_ON                 (USBCORE_UEIE_PIDEE_ON_Val << USBCORE_UEIE_PIDEE_Pos) /* (USBCORE_UEIE) PIDEF interrupt is enabled Position  */
#define USBCORE_UEIE_PIDEE_OFF                (USBCORE_UEIE_PIDEE_OFF_Val << USBCORE_UEIE_PIDEE_Pos) /* (USBCORE_UEIE) PIDEF interrupt is disabled Position  */
#define USBCORE_UEIE_CRC5EE_EOFEE_Pos         _UINT32_(1)                                          /* (USBCORE_UEIE) (Device mode) CRC5 Host Error Interrupt Enable bit / (Host mode) EOF Error Interrupt Enable bit Position */
#define USBCORE_UEIE_CRC5EE_EOFEE_Msk         (_UINT32_(0x1) << USBCORE_UEIE_CRC5EE_EOFEE_Pos)     /* (USBCORE_UEIE) (Device mode) CRC5 Host Error Interrupt Enable bit / (Host mode) EOF Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_CRC5EE_EOFEE(value)      (USBCORE_UEIE_CRC5EE_EOFEE_Msk & (_UINT32_(value) << USBCORE_UEIE_CRC5EE_EOFEE_Pos)) /* Assigment of value for CRC5EE_EOFEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_CRC5EE_EOFEE_ON_Val    _UINT32_(0x1)                                        /* (USBCORE_UEIE) (Device mode)CRC5EF interrupt is enabled / (Host mode)EOF interrupt is enabled  */
#define   USBCORE_UEIE_CRC5EE_EOFEE_OFF_Val   _UINT32_(0x0)                                        /* (USBCORE_UEIE) (Device mode)CRC5EF interrupt is disabled / (Host mode)EOF interrupt is disabled  */
#define USBCORE_UEIE_CRC5EE_EOFEE_ON          (USBCORE_UEIE_CRC5EE_EOFEE_ON_Val << USBCORE_UEIE_CRC5EE_EOFEE_Pos) /* (USBCORE_UEIE) (Device mode)CRC5EF interrupt is enabled / (Host mode)EOF interrupt is enabled Position  */
#define USBCORE_UEIE_CRC5EE_EOFEE_OFF         (USBCORE_UEIE_CRC5EE_EOFEE_OFF_Val << USBCORE_UEIE_CRC5EE_EOFEE_Pos) /* (USBCORE_UEIE) (Device mode)CRC5EF interrupt is disabled / (Host mode)EOF interrupt is disabled Position  */
#define USBCORE_UEIE_CRC16EE_Pos              _UINT32_(2)                                          /* (USBCORE_UEIE) CRC16 Failure Interrupt Enable bit Position */
#define USBCORE_UEIE_CRC16EE_Msk              (_UINT32_(0x1) << USBCORE_UEIE_CRC16EE_Pos)          /* (USBCORE_UEIE) CRC16 Failure Interrupt Enable bit Mask */
#define USBCORE_UEIE_CRC16EE(value)           (USBCORE_UEIE_CRC16EE_Msk & (_UINT32_(value) << USBCORE_UEIE_CRC16EE_Pos)) /* Assigment of value for CRC16EE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_CRC16EE_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_UEIE) CRC16EF interrupt is enabled  */
#define   USBCORE_UEIE_CRC16EE_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_UEIE) CRC16EF interrupt is disabled  */
#define USBCORE_UEIE_CRC16EE_ON               (USBCORE_UEIE_CRC16EE_ON_Val << USBCORE_UEIE_CRC16EE_Pos) /* (USBCORE_UEIE) CRC16EF interrupt is enabled Position  */
#define USBCORE_UEIE_CRC16EE_OFF              (USBCORE_UEIE_CRC16EE_OFF_Val << USBCORE_UEIE_CRC16EE_Pos) /* (USBCORE_UEIE) CRC16EF interrupt is disabled Position  */
#define USBCORE_UEIE_DFN8EE_Pos               _UINT32_(3)                                          /* (USBCORE_UEIE) Data Field Size Error Interrupt Enable bit Position */
#define USBCORE_UEIE_DFN8EE_Msk               (_UINT32_(0x1) << USBCORE_UEIE_DFN8EE_Pos)           /* (USBCORE_UEIE) Data Field Size Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_DFN8EE(value)            (USBCORE_UEIE_DFN8EE_Msk & (_UINT32_(value) << USBCORE_UEIE_DFN8EE_Pos)) /* Assigment of value for DFN8EE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_DFN8EE_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEIE) DFN8EF interrupt is enabled  */
#define   USBCORE_UEIE_DFN8EE_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEIE) DFN8EF interrupt is disabled  */
#define USBCORE_UEIE_DFN8EE_ON                (USBCORE_UEIE_DFN8EE_ON_Val << USBCORE_UEIE_DFN8EE_Pos) /* (USBCORE_UEIE) DFN8EF interrupt is enabled Position  */
#define USBCORE_UEIE_DFN8EE_OFF               (USBCORE_UEIE_DFN8EE_OFF_Val << USBCORE_UEIE_DFN8EE_Pos) /* (USBCORE_UEIE) DFN8EF interrupt is disabled Position  */
#define USBCORE_UEIE_BTOEE_Pos                _UINT32_(4)                                          /* (USBCORE_UEIE) Bus Turnaround Time-out Error Interrupt Enable bit Position */
#define USBCORE_UEIE_BTOEE_Msk                (_UINT32_(0x1) << USBCORE_UEIE_BTOEE_Pos)            /* (USBCORE_UEIE) Bus Turnaround Time-out Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_BTOEE(value)             (USBCORE_UEIE_BTOEE_Msk & (_UINT32_(value) << USBCORE_UEIE_BTOEE_Pos)) /* Assigment of value for BTOEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_BTOEE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UEIE) BTOEF interrupt is enabled  */
#define   USBCORE_UEIE_BTOEE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UEIE) BTOEF interrupt is disabled  */
#define USBCORE_UEIE_BTOEE_ON                 (USBCORE_UEIE_BTOEE_ON_Val << USBCORE_UEIE_BTOEE_Pos) /* (USBCORE_UEIE) BTOEF interrupt is enabled Position  */
#define USBCORE_UEIE_BTOEE_OFF                (USBCORE_UEIE_BTOEE_OFF_Val << USBCORE_UEIE_BTOEE_Pos) /* (USBCORE_UEIE) BTOEF interrupt is disabled Position  */
#define USBCORE_UEIE_DMAEE_Pos                _UINT32_(5)                                          /* (USBCORE_UEIE) DMA Error Interrupt Enable bit Position */
#define USBCORE_UEIE_DMAEE_Msk                (_UINT32_(0x1) << USBCORE_UEIE_DMAEE_Pos)            /* (USBCORE_UEIE) DMA Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_DMAEE(value)             (USBCORE_UEIE_DMAEE_Msk & (_UINT32_(value) << USBCORE_UEIE_DMAEE_Pos)) /* Assigment of value for DMAEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_DMAEE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UEIE) DMAEF interrupt is enabled  */
#define   USBCORE_UEIE_DMAEE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UEIE) DMAEF interrupt is disabled  */
#define USBCORE_UEIE_DMAEE_ON                 (USBCORE_UEIE_DMAEE_ON_Val << USBCORE_UEIE_DMAEE_Pos) /* (USBCORE_UEIE) DMAEF interrupt is enabled Position  */
#define USBCORE_UEIE_DMAEE_OFF                (USBCORE_UEIE_DMAEE_OFF_Val << USBCORE_UEIE_DMAEE_Pos) /* (USBCORE_UEIE) DMAEF interrupt is disabled Position  */
#define USBCORE_UEIE_BMXEE_Pos                _UINT32_(6)                                          /* (USBCORE_UEIE) Bus Matrix Error Interrupt Enable bit Position */
#define USBCORE_UEIE_BMXEE_Msk                (_UINT32_(0x1) << USBCORE_UEIE_BMXEE_Pos)            /* (USBCORE_UEIE) Bus Matrix Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_BMXEE(value)             (USBCORE_UEIE_BMXEE_Msk & (_UINT32_(value) << USBCORE_UEIE_BMXEE_Pos)) /* Assigment of value for BMXEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_BMXEE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UEIE) BMXEF interrupt is enabled  */
#define   USBCORE_UEIE_BMXEE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UEIE) BMXEF interrupt is disabled  */
#define USBCORE_UEIE_BMXEE_ON                 (USBCORE_UEIE_BMXEE_ON_Val << USBCORE_UEIE_BMXEE_Pos) /* (USBCORE_UEIE) BMXEF interrupt is enabled Position  */
#define USBCORE_UEIE_BMXEE_OFF                (USBCORE_UEIE_BMXEE_OFF_Val << USBCORE_UEIE_BMXEE_Pos) /* (USBCORE_UEIE) BMXEF interrupt is disabled Position  */
#define USBCORE_UEIE_BTSEE_Pos                _UINT32_(7)                                          /* (USBCORE_UEIE) Bit Stuff Error Interrupt Enable bit Position */
#define USBCORE_UEIE_BTSEE_Msk                (_UINT32_(0x1) << USBCORE_UEIE_BTSEE_Pos)            /* (USBCORE_UEIE) Bit Stuff Error Interrupt Enable bit Mask */
#define USBCORE_UEIE_BTSEE(value)             (USBCORE_UEIE_BTSEE_Msk & (_UINT32_(value) << USBCORE_UEIE_BTSEE_Pos)) /* Assigment of value for BTSEE in the USBCORE_UEIE register */
#define   USBCORE_UEIE_BTSEE_ON_Val           _UINT32_(0x1)                                        /* (USBCORE_UEIE) BTSEF interrupt is enabled  */
#define   USBCORE_UEIE_BTSEE_OFF_Val          _UINT32_(0x0)                                        /* (USBCORE_UEIE) BTSEF interrupt is disabled  */
#define USBCORE_UEIE_BTSEE_ON                 (USBCORE_UEIE_BTSEE_ON_Val << USBCORE_UEIE_BTSEE_Pos) /* (USBCORE_UEIE) BTSEF interrupt is enabled Position  */
#define USBCORE_UEIE_BTSEE_OFF                (USBCORE_UEIE_BTSEE_OFF_Val << USBCORE_UEIE_BTSEE_Pos) /* (USBCORE_UEIE) BTSEF interrupt is disabled Position  */
#define USBCORE_UEIE_Msk                      _UINT32_(0x000000FF)                                 /* (USBCORE_UEIE) Register Mask  */


/* -------- USBCORE_UEIECLR : (USBCORE Offset: 0x234) (R/W 32)  -------- */
#define USBCORE_UEIECLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEIECLR)   Reset Value */

#define USBCORE_UEIECLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEIECLR) Register Mask  */


/* -------- USBCORE_UEIESET : (USBCORE Offset: 0x238) (R/W 32)  -------- */
#define USBCORE_UEIESET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEIESET)   Reset Value */

#define USBCORE_UEIESET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEIESET) Register Mask  */


/* -------- USBCORE_UEIEINV : (USBCORE Offset: 0x23C) (R/W 32)  -------- */
#define USBCORE_UEIEINV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEIEINV)   Reset Value */

#define USBCORE_UEIEINV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEIEINV) Register Mask  */


/* -------- USBCORE_USTAT : (USBCORE Offset: 0x240) ( R/ 32) USB Status Register -------- */
#define USBCORE_USTAT_PPBI_Pos                _UINT32_(2)                                          /* (USBCORE_USTAT) Ping-Pong BD Pointer Indicator bit Position */
#define USBCORE_USTAT_PPBI_Msk                (_UINT32_(0x1) << USBCORE_USTAT_PPBI_Pos)            /* (USBCORE_USTAT) Ping-Pong BD Pointer Indicator bit Mask */
#define USBCORE_USTAT_PPBI(value)             (USBCORE_USTAT_PPBI_Msk & (_UINT32_(value) << USBCORE_USTAT_PPBI_Pos)) /* Assigment of value for PPBI in the USBCORE_USTAT register */
#define   USBCORE_USTAT_PPBI_ODD_Val          _UINT32_(0x1)                                        /* (USBCORE_USTAT) The last transaction was to the ODD BD bank  */
#define   USBCORE_USTAT_PPBI_EVEN_Val         _UINT32_(0x0)                                        /* (USBCORE_USTAT) The last transaction was to the EVEN BD bank  */
#define USBCORE_USTAT_PPBI_ODD                (USBCORE_USTAT_PPBI_ODD_Val << USBCORE_USTAT_PPBI_Pos) /* (USBCORE_USTAT) The last transaction was to the ODD BD bank Position  */
#define USBCORE_USTAT_PPBI_EVEN               (USBCORE_USTAT_PPBI_EVEN_Val << USBCORE_USTAT_PPBI_Pos) /* (USBCORE_USTAT) The last transaction was to the EVEN BD bank Position  */
#define USBCORE_USTAT_DIR_Pos                 _UINT32_(3)                                          /* (USBCORE_USTAT) Last BD Direction Indicator bit Position */
#define USBCORE_USTAT_DIR_Msk                 (_UINT32_(0x1) << USBCORE_USTAT_DIR_Pos)             /* (USBCORE_USTAT) Last BD Direction Indicator bit Mask */
#define USBCORE_USTAT_DIR(value)              (USBCORE_USTAT_DIR_Msk & (_UINT32_(value) << USBCORE_USTAT_DIR_Pos)) /* Assigment of value for DIR in the USBCORE_USTAT register */
#define   USBCORE_USTAT_DIR_TX_Val            _UINT32_(0x1)                                        /* (USBCORE_USTAT) Last transaction was a transmit transfer (TX)  */
#define   USBCORE_USTAT_DIR_RX_Val            _UINT32_(0x0)                                        /* (USBCORE_USTAT) Last transaction was a receive transfer (RX)  */
#define USBCORE_USTAT_DIR_TX                  (USBCORE_USTAT_DIR_TX_Val << USBCORE_USTAT_DIR_Pos)  /* (USBCORE_USTAT) Last transaction was a transmit transfer (TX) Position  */
#define USBCORE_USTAT_DIR_RX                  (USBCORE_USTAT_DIR_RX_Val << USBCORE_USTAT_DIR_Pos)  /* (USBCORE_USTAT) Last transaction was a receive transfer (RX) Position  */
#define USBCORE_USTAT_ENDPT_Pos               _UINT32_(4)                                          /* (USBCORE_USTAT) Encoded Number of Last Endpoint Activity bits Position */
#define USBCORE_USTAT_ENDPT_Msk               (_UINT32_(0xF) << USBCORE_USTAT_ENDPT_Pos)           /* (USBCORE_USTAT) Encoded Number of Last Endpoint Activity bits Mask */
#define USBCORE_USTAT_ENDPT(value)            (USBCORE_USTAT_ENDPT_Msk & (_UINT32_(value) << USBCORE_USTAT_ENDPT_Pos)) /* Assigment of value for ENDPT in the USBCORE_USTAT register */
#define   USBCORE_USTAT_ENDPT_EP_15_Val       _UINT32_(0xF)                                        /* (USBCORE_USTAT) Endpoint 15  */
#define   USBCORE_USTAT_ENDPT_EP_14_Val       _UINT32_(0xE)                                        /* (USBCORE_USTAT) Endpoint 14  */
#define   USBCORE_USTAT_ENDPT_EP_1_Val        _UINT32_(0x1)                                        /* (USBCORE_USTAT) Endpoint 1  */
#define   USBCORE_USTAT_ENDPT_EP_0_Val        _UINT32_(0x0)                                        /* (USBCORE_USTAT) Endpoint 0  */
#define USBCORE_USTAT_ENDPT_EP_15             (USBCORE_USTAT_ENDPT_EP_15_Val << USBCORE_USTAT_ENDPT_Pos) /* (USBCORE_USTAT) Endpoint 15 Position  */
#define USBCORE_USTAT_ENDPT_EP_14             (USBCORE_USTAT_ENDPT_EP_14_Val << USBCORE_USTAT_ENDPT_Pos) /* (USBCORE_USTAT) Endpoint 14 Position  */
#define USBCORE_USTAT_ENDPT_EP_1              (USBCORE_USTAT_ENDPT_EP_1_Val << USBCORE_USTAT_ENDPT_Pos) /* (USBCORE_USTAT) Endpoint 1 Position  */
#define USBCORE_USTAT_ENDPT_EP_0              (USBCORE_USTAT_ENDPT_EP_0_Val << USBCORE_USTAT_ENDPT_Pos) /* (USBCORE_USTAT) Endpoint 0 Position  */
#define USBCORE_USTAT_Msk                     _UINT32_(0x000000FC)                                 /* (USBCORE_USTAT) Register Mask  */


/* -------- USBCORE_USTATCLR : (USBCORE Offset: 0x244) (R/W 32)  -------- */
#define USBCORE_USTATCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_USTATCLR)   Reset Value */

#define USBCORE_USTATCLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_USTATCLR) Register Mask  */


/* -------- USBCORE_USTATSET : (USBCORE Offset: 0x248) (R/W 32)  -------- */
#define USBCORE_USTATSET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_USTATSET)   Reset Value */

#define USBCORE_USTATSET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_USTATSET) Register Mask  */


/* -------- USBCORE_USTATINV : (USBCORE Offset: 0x24C) (R/W 32)  -------- */
#define USBCORE_USTATINV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_USTATINV)   Reset Value */

#define USBCORE_USTATINV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_USTATINV) Register Mask  */


/* -------- USBCORE_UCON : (USBCORE Offset: 0x250) (R/W 32) USB Control Register -------- */
#define USBCORE_UCON_USBEN_SOFEN_Pos          _UINT32_(0)                                          /* (USBCORE_UCON) (Device mode)USB Module Enable bit / (Host mode) Position */
#define USBCORE_UCON_USBEN_SOFEN_Msk          (_UINT32_(0x1) << USBCORE_UCON_USBEN_SOFEN_Pos)      /* (USBCORE_UCON) (Device mode)USB Module Enable bit / (Host mode) Mask */
#define USBCORE_UCON_USBEN_SOFEN(value)       (USBCORE_UCON_USBEN_SOFEN_Msk & (_UINT32_(value) << USBCORE_UCON_USBEN_SOFEN_Pos)) /* Assigment of value for USBEN_SOFEN in the USBCORE_UCON register */
#define   USBCORE_UCON_USBEN_SOFEN_ON_Val     _UINT32_(0x1)                                        /* (USBCORE_UCON) (Device mode)USB module and supporting circuitry is enabled / (Host mode)SOF token sent every 1 ms  */
#define   USBCORE_UCON_USBEN_SOFEN_OFF_Val    _UINT32_(0x0)                                        /* (USBCORE_UCON) (Device mode)USB module and supporting circuitry is disabled / (Host mode)SOF token disabled  */
#define USBCORE_UCON_USBEN_SOFEN_ON           (USBCORE_UCON_USBEN_SOFEN_ON_Val << USBCORE_UCON_USBEN_SOFEN_Pos) /* (USBCORE_UCON) (Device mode)USB module and supporting circuitry is enabled / (Host mode)SOF token sent every 1 ms Position  */
#define USBCORE_UCON_USBEN_SOFEN_OFF          (USBCORE_UCON_USBEN_SOFEN_OFF_Val << USBCORE_UCON_USBEN_SOFEN_Pos) /* (USBCORE_UCON) (Device mode)USB module and supporting circuitry is disabled / (Host mode)SOF token disabled Position  */
#define USBCORE_UCON_PPBRST_Pos               _UINT32_(1)                                          /* (USBCORE_UCON) Ping-Pong Buffers Reset bit Position */
#define USBCORE_UCON_PPBRST_Msk               (_UINT32_(0x1) << USBCORE_UCON_PPBRST_Pos)           /* (USBCORE_UCON) Ping-Pong Buffers Reset bit Mask */
#define USBCORE_UCON_PPBRST(value)            (USBCORE_UCON_PPBRST_Msk & (_UINT32_(value) << USBCORE_UCON_PPBRST_Pos)) /* Assigment of value for PPBRST in the USBCORE_UCON register */
#define   USBCORE_UCON_PPBRST_RESET_Val       _UINT32_(0x1)                                        /* (USBCORE_UCON) Reset all Even/Odd buffer pointers to the EVEN BD banks  */
#define   USBCORE_UCON_PPBRST_NO_RESET_Val    _UINT32_(0x0)                                        /* (USBCORE_UCON) Even/Odd buffer pointers not being Reset  */
#define USBCORE_UCON_PPBRST_RESET             (USBCORE_UCON_PPBRST_RESET_Val << USBCORE_UCON_PPBRST_Pos) /* (USBCORE_UCON) Reset all Even/Odd buffer pointers to the EVEN BD banks Position  */
#define USBCORE_UCON_PPBRST_NO_RESET          (USBCORE_UCON_PPBRST_NO_RESET_Val << USBCORE_UCON_PPBRST_Pos) /* (USBCORE_UCON) Even/Odd buffer pointers not being Reset Position  */
#define USBCORE_UCON_RESUME_Pos               _UINT32_(2)                                          /* (USBCORE_UCON) RESUME Signaling Enable bit Position */
#define USBCORE_UCON_RESUME_Msk               (_UINT32_(0x1) << USBCORE_UCON_RESUME_Pos)           /* (USBCORE_UCON) RESUME Signaling Enable bit Mask */
#define USBCORE_UCON_RESUME(value)            (USBCORE_UCON_RESUME_Msk & (_UINT32_(value) << USBCORE_UCON_RESUME_Pos)) /* Assigment of value for RESUME in the USBCORE_UCON register */
#define   USBCORE_UCON_RESUME_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UCON) RESUME signaling is activated  */
#define   USBCORE_UCON_RESUME_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UCON) RESUME signaling is disabled  */
#define USBCORE_UCON_RESUME_ON                (USBCORE_UCON_RESUME_ON_Val << USBCORE_UCON_RESUME_Pos) /* (USBCORE_UCON) RESUME signaling is activated Position  */
#define USBCORE_UCON_RESUME_OFF               (USBCORE_UCON_RESUME_OFF_Val << USBCORE_UCON_RESUME_Pos) /* (USBCORE_UCON) RESUME signaling is disabled Position  */
#define USBCORE_UCON_HOSTEN_Pos               _UINT32_(3)                                          /* (USBCORE_UCON) Host Mode Enable bit Position */
#define USBCORE_UCON_HOSTEN_Msk               (_UINT32_(0x1) << USBCORE_UCON_HOSTEN_Pos)           /* (USBCORE_UCON) Host Mode Enable bit Mask */
#define USBCORE_UCON_HOSTEN(value)            (USBCORE_UCON_HOSTEN_Msk & (_UINT32_(value) << USBCORE_UCON_HOSTEN_Pos)) /* Assigment of value for HOSTEN in the USBCORE_UCON register */
#define   USBCORE_UCON_HOSTEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UCON) USB host capability is enabled  */
#define   USBCORE_UCON_HOSTEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UCON) USB host capability is disabled  */
#define USBCORE_UCON_HOSTEN_ON                (USBCORE_UCON_HOSTEN_ON_Val << USBCORE_UCON_HOSTEN_Pos) /* (USBCORE_UCON) USB host capability is enabled Position  */
#define USBCORE_UCON_HOSTEN_OFF               (USBCORE_UCON_HOSTEN_OFF_Val << USBCORE_UCON_HOSTEN_Pos) /* (USBCORE_UCON) USB host capability is disabled Position  */
#define USBCORE_UCON_USBRST_Pos               _UINT32_(4)                                          /* (USBCORE_UCON) Module Reset bit Position */
#define USBCORE_UCON_USBRST_Msk               (_UINT32_(0x1) << USBCORE_UCON_USBRST_Pos)           /* (USBCORE_UCON) Module Reset bit Mask */
#define USBCORE_UCON_USBRST(value)            (USBCORE_UCON_USBRST_Msk & (_UINT32_(value) << USBCORE_UCON_USBRST_Pos)) /* Assigment of value for USBRST in the USBCORE_UCON register */
#define   USBCORE_UCON_USBRST_RESET_GENERATED_Val _UINT32_(0x1)                                        /* (USBCORE_UCON) USB reset is generated  */
#define   USBCORE_UCON_USBRST_RESET_TERMINATED_Val _UINT32_(0x0)                                        /* (USBCORE_UCON) USB reset is terminated  */
#define USBCORE_UCON_USBRST_RESET_GENERATED   (USBCORE_UCON_USBRST_RESET_GENERATED_Val << USBCORE_UCON_USBRST_Pos) /* (USBCORE_UCON) USB reset is generated Position  */
#define USBCORE_UCON_USBRST_RESET_TERMINATED  (USBCORE_UCON_USBRST_RESET_TERMINATED_Val << USBCORE_UCON_USBRST_Pos) /* (USBCORE_UCON) USB reset is terminated Position  */
#define USBCORE_UCON_PKTDIS_TOKBUSY_Pos       _UINT32_(5)                                          /* (USBCORE_UCON) (Device mode) Packet Transfer Disable bit / (Host mode) Token Busy Indicator bit Position */
#define USBCORE_UCON_PKTDIS_TOKBUSY_Msk       (_UINT32_(0x1) << USBCORE_UCON_PKTDIS_TOKBUSY_Pos)   /* (USBCORE_UCON) (Device mode) Packet Transfer Disable bit / (Host mode) Token Busy Indicator bit Mask */
#define USBCORE_UCON_PKTDIS_TOKBUSY(value)    (USBCORE_UCON_PKTDIS_TOKBUSY_Msk & (_UINT32_(value) << USBCORE_UCON_PKTDIS_TOKBUSY_Pos)) /* Assigment of value for PKTDIS_TOKBUSY in the USBCORE_UCON register */
#define   USBCORE_UCON_PKTDIS_TOKBUSY_ON_Val  _UINT32_(0x1)                                        /* (USBCORE_UCON) (Device mode)Token and packet processing disabled (set upon SETUP token received) / (Host mode)Token being executed by the USB module  */
#define   USBCORE_UCON_PKTDIS_TOKBUSY_OFF_Val _UINT32_(0x0)                                        /* (USBCORE_UCON) (Device mode)Token and packet processing enabled / (Host mode)No token being executed  */
#define USBCORE_UCON_PKTDIS_TOKBUSY_ON        (USBCORE_UCON_PKTDIS_TOKBUSY_ON_Val << USBCORE_UCON_PKTDIS_TOKBUSY_Pos) /* (USBCORE_UCON) (Device mode)Token and packet processing disabled (set upon SETUP token received) / (Host mode)Token being executed by the USB module Position  */
#define USBCORE_UCON_PKTDIS_TOKBUSY_OFF       (USBCORE_UCON_PKTDIS_TOKBUSY_OFF_Val << USBCORE_UCON_PKTDIS_TOKBUSY_Pos) /* (USBCORE_UCON) (Device mode)Token and packet processing enabled / (Host mode)No token being executed Position  */
#define USBCORE_UCON_SE0_Pos                  _UINT32_(6)                                          /* (USBCORE_UCON) Live Single-Ended Zero flag bit Position */
#define USBCORE_UCON_SE0_Msk                  (_UINT32_(0x1) << USBCORE_UCON_SE0_Pos)              /* (USBCORE_UCON) Live Single-Ended Zero flag bit Mask */
#define USBCORE_UCON_SE0(value)               (USBCORE_UCON_SE0_Msk & (_UINT32_(value) << USBCORE_UCON_SE0_Pos)) /* Assigment of value for SE0 in the USBCORE_UCON register */
#define   USBCORE_UCON_SE0_DETECT_Val         _UINT32_(0x1)                                        /* (USBCORE_UCON) Single Ended Zero detected on the USB  */
#define   USBCORE_UCON_SE0_NOT_DETECT_Val     _UINT32_(0x0)                                        /* (USBCORE_UCON) No Single Ended Zero detected  */
#define USBCORE_UCON_SE0_DETECT               (USBCORE_UCON_SE0_DETECT_Val << USBCORE_UCON_SE0_Pos) /* (USBCORE_UCON) Single Ended Zero detected on the USB Position  */
#define USBCORE_UCON_SE0_NOT_DETECT           (USBCORE_UCON_SE0_NOT_DETECT_Val << USBCORE_UCON_SE0_Pos) /* (USBCORE_UCON) No Single Ended Zero detected Position  */
#define USBCORE_UCON_JSTATE_Pos               _UINT32_(7)                                          /* (USBCORE_UCON) Live Differential Receiver JSTATE flag bit Position */
#define USBCORE_UCON_JSTATE_Msk               (_UINT32_(0x1) << USBCORE_UCON_JSTATE_Pos)           /* (USBCORE_UCON) Live Differential Receiver JSTATE flag bit Mask */
#define USBCORE_UCON_JSTATE(value)            (USBCORE_UCON_JSTATE_Msk & (_UINT32_(value) << USBCORE_UCON_JSTATE_Pos)) /* Assigment of value for JSTATE in the USBCORE_UCON register */
#define   USBCORE_UCON_JSTATE_DETECT_Val      _UINT32_(0x1)                                        /* (USBCORE_UCON) JSTATE detected on the USB  */
#define   USBCORE_UCON_JSTATE_NOT_DETECT_Val  _UINT32_(0x0)                                        /* (USBCORE_UCON) No JSTATE detected  */
#define USBCORE_UCON_JSTATE_DETECT            (USBCORE_UCON_JSTATE_DETECT_Val << USBCORE_UCON_JSTATE_Pos) /* (USBCORE_UCON) JSTATE detected on the USB Position  */
#define USBCORE_UCON_JSTATE_NOT_DETECT        (USBCORE_UCON_JSTATE_NOT_DETECT_Val << USBCORE_UCON_JSTATE_Pos) /* (USBCORE_UCON) No JSTATE detected Position  */
#define USBCORE_UCON_Msk                      _UINT32_(0x000000FF)                                 /* (USBCORE_UCON) Register Mask  */

#define USBCORE_UCON_SE_Pos                   _UINT32_(6)                                          /* (USBCORE_UCON Position) Live Single-Ended Zero flag bit */
#define USBCORE_UCON_SE_Msk                   (_UINT32_(0x1) << USBCORE_UCON_SE_Pos)               /* (USBCORE_UCON Mask) SE */
#define USBCORE_UCON_SE(value)                (USBCORE_UCON_SE_Msk & (_UINT32_(value) << USBCORE_UCON_SE_Pos)) 

/* -------- USBCORE_UCONCLR : (USBCORE Offset: 0x254) (R/W 32)  -------- */
#define USBCORE_UCONCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UCONCLR)   Reset Value */

#define USBCORE_UCONCLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UCONCLR) Register Mask  */


/* -------- USBCORE_UCONSET : (USBCORE Offset: 0x258) (R/W 32)  -------- */
#define USBCORE_UCONSET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UCONSET)   Reset Value */

#define USBCORE_UCONSET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UCONSET) Register Mask  */


/* -------- USBCORE_UCONINV : (USBCORE Offset: 0x25C) (R/W 32)  -------- */
#define USBCORE_UCONINV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UCONINV)   Reset Value */

#define USBCORE_UCONINV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UCONINV) Register Mask  */


/* -------- USBCORE_UADDR : (USBCORE Offset: 0x260) (R/W 32) USB Address Register -------- */
#define USBCORE_UADDR_DEVADDR_Pos             _UINT32_(0)                                          /* (USBCORE_UADDR)  Position */
#define USBCORE_UADDR_DEVADDR_Msk             (_UINT32_(0x7F) << USBCORE_UADDR_DEVADDR_Pos)        /* (USBCORE_UADDR)  Mask */
#define USBCORE_UADDR_DEVADDR(value)          (USBCORE_UADDR_DEVADDR_Msk & (_UINT32_(value) << USBCORE_UADDR_DEVADDR_Pos)) /* Assigment of value for DEVADDR in the USBCORE_UADDR register */
#define USBCORE_UADDR_LSPDEN_Pos              _UINT32_(7)                                          /* (USBCORE_UADDR) Low Speed Enable Indicator bit Position */
#define USBCORE_UADDR_LSPDEN_Msk              (_UINT32_(0x1) << USBCORE_UADDR_LSPDEN_Pos)          /* (USBCORE_UADDR) Low Speed Enable Indicator bit Mask */
#define USBCORE_UADDR_LSPDEN(value)           (USBCORE_UADDR_LSPDEN_Msk & (_UINT32_(value) << USBCORE_UADDR_LSPDEN_Pos)) /* Assigment of value for LSPDEN in the USBCORE_UADDR register */
#define   USBCORE_UADDR_LSPDEN_LOW_SPEED_Val  _UINT32_(0x1)                                        /* (USBCORE_UADDR) Next token command to be executed at Low Speed  */
#define   USBCORE_UADDR_LSPDEN_FULL_SPEED_Val _UINT32_(0x0)                                        /* (USBCORE_UADDR) Next token command to be executed at Full Speed  */
#define USBCORE_UADDR_LSPDEN_LOW_SPEED        (USBCORE_UADDR_LSPDEN_LOW_SPEED_Val << USBCORE_UADDR_LSPDEN_Pos) /* (USBCORE_UADDR) Next token command to be executed at Low Speed Position  */
#define USBCORE_UADDR_LSPDEN_FULL_SPEED       (USBCORE_UADDR_LSPDEN_FULL_SPEED_Val << USBCORE_UADDR_LSPDEN_Pos) /* (USBCORE_UADDR) Next token command to be executed at Full Speed Position  */
#define USBCORE_UADDR_Msk                     _UINT32_(0x000000FF)                                 /* (USBCORE_UADDR) Register Mask  */


/* -------- USBCORE_UADDRCLR : (USBCORE Offset: 0x264) (R/W 32)  -------- */
#define USBCORE_UADDRCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UADDRCLR)   Reset Value */

#define USBCORE_UADDRCLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UADDRCLR) Register Mask  */


/* -------- USBCORE_UADDRSET : (USBCORE Offset: 0x268) (R/W 32)  -------- */
#define USBCORE_UADDRSET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UADDRSET)   Reset Value */

#define USBCORE_UADDRSET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UADDRSET) Register Mask  */


/* -------- USBCORE_UADDRINV : (USBCORE Offset: 0x26C) (R/W 32)  -------- */
#define USBCORE_UADDRINV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UADDRINV)   Reset Value */

#define USBCORE_UADDRINV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UADDRINV) Register Mask  */


/* -------- USBCORE_UBDTP1 : (USBCORE Offset: 0x270) (R/W 32) USB BDT Page 1 Register -------- */
#define USBCORE_UBDTP1_BDTPTRL_Pos            _UINT32_(1)                                          /* (USBCORE_UBDTP1)  Position */
#define USBCORE_UBDTP1_BDTPTRL_Msk            (_UINT32_(0x7F) << USBCORE_UBDTP1_BDTPTRL_Pos)       /* (USBCORE_UBDTP1)  Mask */
#define USBCORE_UBDTP1_BDTPTRL(value)         (USBCORE_UBDTP1_BDTPTRL_Msk & (_UINT32_(value) << USBCORE_UBDTP1_BDTPTRL_Pos)) /* Assigment of value for BDTPTRL in the USBCORE_UBDTP1 register */
#define USBCORE_UBDTP1_Msk                    _UINT32_(0x000000FE)                                 /* (USBCORE_UBDTP1) Register Mask  */


/* -------- USBCORE_UBDTP1CLR : (USBCORE Offset: 0x274) (R/W 32)  -------- */
#define USBCORE_UBDTP1CLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP1CLR)   Reset Value */

#define USBCORE_UBDTP1CLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP1CLR) Register Mask  */


/* -------- USBCORE_UBDTP1SET : (USBCORE Offset: 0x278) (R/W 32)  -------- */
#define USBCORE_UBDTP1SET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP1SET)   Reset Value */

#define USBCORE_UBDTP1SET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP1SET) Register Mask  */


/* -------- USBCORE_UBDTP1INV : (USBCORE Offset: 0x27C) (R/W 32)  -------- */
#define USBCORE_UBDTP1INV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP1INV)   Reset Value */

#define USBCORE_UBDTP1INV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP1INV) Register Mask  */


/* -------- USBCORE_UFRML : (USBCORE Offset: 0x280) ( R/ 32) USB Frame Number Low Register -------- */
#define USBCORE_UFRML_FRML_Pos                _UINT32_(0)                                          /* (USBCORE_UFRML)  Position */
#define USBCORE_UFRML_FRML_Msk                (_UINT32_(0xFF) << USBCORE_UFRML_FRML_Pos)           /* (USBCORE_UFRML)  Mask */
#define USBCORE_UFRML_FRML(value)             (USBCORE_UFRML_FRML_Msk & (_UINT32_(value) << USBCORE_UFRML_FRML_Pos)) /* Assigment of value for FRML in the USBCORE_UFRML register */
#define USBCORE_UFRML_Msk                     _UINT32_(0x000000FF)                                 /* (USBCORE_UFRML) Register Mask  */


/* -------- USBCORE_UFRMLCLR : (USBCORE Offset: 0x284) (R/W 32)  -------- */
#define USBCORE_UFRMLCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMLCLR)   Reset Value */

#define USBCORE_UFRMLCLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMLCLR) Register Mask  */


/* -------- USBCORE_UFRMLSET : (USBCORE Offset: 0x288) (R/W 32)  -------- */
#define USBCORE_UFRMLSET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMLSET)   Reset Value */

#define USBCORE_UFRMLSET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMLSET) Register Mask  */


/* -------- USBCORE_UFRMLINV : (USBCORE Offset: 0x28C) (R/W 32)  -------- */
#define USBCORE_UFRMLINV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMLINV)   Reset Value */

#define USBCORE_UFRMLINV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMLINV) Register Mask  */


/* -------- USBCORE_UFRMH : (USBCORE Offset: 0x290) ( R/ 32) USB Frame Number High Register -------- */
#define USBCORE_UFRMH_FRMH_Pos                _UINT32_(0)                                          /* (USBCORE_UFRMH)  Position */
#define USBCORE_UFRMH_FRMH_Msk                (_UINT32_(0x7) << USBCORE_UFRMH_FRMH_Pos)            /* (USBCORE_UFRMH)  Mask */
#define USBCORE_UFRMH_FRMH(value)             (USBCORE_UFRMH_FRMH_Msk & (_UINT32_(value) << USBCORE_UFRMH_FRMH_Pos)) /* Assigment of value for FRMH in the USBCORE_UFRMH register */
#define USBCORE_UFRMH_Msk                     _UINT32_(0x00000007)                                 /* (USBCORE_UFRMH) Register Mask  */


/* -------- USBCORE_UFRMHCLR : (USBCORE Offset: 0x294) (R/W 32)  -------- */
#define USBCORE_UFRMHCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMHCLR)   Reset Value */

#define USBCORE_UFRMHCLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMHCLR) Register Mask  */


/* -------- USBCORE_UFRMHSET : (USBCORE Offset: 0x298) (R/W 32)  -------- */
#define USBCORE_UFRMHSET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMHSET)   Reset Value */

#define USBCORE_UFRMHSET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMHSET) Register Mask  */


/* -------- USBCORE_UFRMHINV : (USBCORE Offset: 0x29C) (R/W 32)  -------- */
#define USBCORE_UFRMHINV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UFRMHINV)   Reset Value */

#define USBCORE_UFRMHINV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UFRMHINV) Register Mask  */


/* -------- USBCORE_UTOK : (USBCORE Offset: 0x2A0) (R/W 32) USB Token Register -------- */
#define USBCORE_UTOK_EP_Pos                   _UINT32_(0)                                          /* (USBCORE_UTOK)  Position */
#define USBCORE_UTOK_EP_Msk                   (_UINT32_(0xF) << USBCORE_UTOK_EP_Pos)               /* (USBCORE_UTOK)  Mask */
#define USBCORE_UTOK_EP(value)                (USBCORE_UTOK_EP_Msk & (_UINT32_(value) << USBCORE_UTOK_EP_Pos)) /* Assigment of value for EP in the USBCORE_UTOK register */
#define USBCORE_UTOK_PID_Pos                  _UINT32_(4)                                          /* (USBCORE_UTOK) Token Type Indicator bits Position */
#define USBCORE_UTOK_PID_Msk                  (_UINT32_(0xF) << USBCORE_UTOK_PID_Pos)              /* (USBCORE_UTOK) Token Type Indicator bits Mask */
#define USBCORE_UTOK_PID(value)               (USBCORE_UTOK_PID_Msk & (_UINT32_(value) << USBCORE_UTOK_PID_Pos)) /* Assigment of value for PID in the USBCORE_UTOK register */
#define   USBCORE_UTOK_PID_OUT_Val            _UINT32_(0x1)                                        /* (USBCORE_UTOK) OUT (TX) token type transaction  */
#define   USBCORE_UTOK_PID_IN_Val             _UINT32_(0x9)                                        /* (USBCORE_UTOK) IN (RX) token type transaction  */
#define   USBCORE_UTOK_PID_SETUP_Val          _UINT32_(0xD)                                        /* (USBCORE_UTOK) SETUP (TX) token type transaction  */
#define USBCORE_UTOK_PID_OUT                  (USBCORE_UTOK_PID_OUT_Val << USBCORE_UTOK_PID_Pos)   /* (USBCORE_UTOK) OUT (TX) token type transaction Position  */
#define USBCORE_UTOK_PID_IN                   (USBCORE_UTOK_PID_IN_Val << USBCORE_UTOK_PID_Pos)    /* (USBCORE_UTOK) IN (RX) token type transaction Position  */
#define USBCORE_UTOK_PID_SETUP                (USBCORE_UTOK_PID_SETUP_Val << USBCORE_UTOK_PID_Pos) /* (USBCORE_UTOK) SETUP (TX) token type transaction Position  */
#define USBCORE_UTOK_Msk                      _UINT32_(0x000000FF)                                 /* (USBCORE_UTOK) Register Mask  */


/* -------- USBCORE_UTOKCLR : (USBCORE Offset: 0x2A4) (R/W 32)  -------- */
#define USBCORE_UTOKCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UTOKCLR)   Reset Value */

#define USBCORE_UTOKCLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UTOKCLR) Register Mask  */


/* -------- USBCORE_UTOKSET : (USBCORE Offset: 0x2A8) (R/W 32)  -------- */
#define USBCORE_UTOKSET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UTOKSET)   Reset Value */

#define USBCORE_UTOKSET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UTOKSET) Register Mask  */


/* -------- USBCORE_UTOKINV : (USBCORE Offset: 0x2AC) (R/W 32)  -------- */
#define USBCORE_UTOKINV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UTOKINV)   Reset Value */

#define USBCORE_UTOKINV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UTOKINV) Register Mask  */


/* -------- USBCORE_USOF : (USBCORE Offset: 0x2B0) (R/W 32) USB SOF Threshold Register -------- */
#define USBCORE_USOF_CNT_Pos                  _UINT32_(0)                                          /* (USBCORE_USOF) SOF Threshold Value bits Position */
#define USBCORE_USOF_CNT_Msk                  (_UINT32_(0xFF) << USBCORE_USOF_CNT_Pos)             /* (USBCORE_USOF) SOF Threshold Value bits Mask */
#define USBCORE_USOF_CNT(value)               (USBCORE_USOF_CNT_Msk & (_UINT32_(value) << USBCORE_USOF_CNT_Pos)) /* Assigment of value for CNT in the USBCORE_USOF register */
#define   USBCORE_USOF_CNT_BYTE64_Val         _UINT32_(0x4A)                                       /* (USBCORE_USOF) 64-byte packet  */
#define   USBCORE_USOF_CNT_BYTE32_Val         _UINT32_(0x2A)                                       /* (USBCORE_USOF) 32-byte packet  */
#define   USBCORE_USOF_CNT_BYTE16_Val         _UINT32_(0x1A)                                       /* (USBCORE_USOF) 16-byte packet  */
#define   USBCORE_USOF_CNT_BYTE8_Val          _UINT32_(0x12)                                       /* (USBCORE_USOF) 8-byte packet  */
#define USBCORE_USOF_CNT_BYTE64               (USBCORE_USOF_CNT_BYTE64_Val << USBCORE_USOF_CNT_Pos) /* (USBCORE_USOF) 64-byte packet Position  */
#define USBCORE_USOF_CNT_BYTE32               (USBCORE_USOF_CNT_BYTE32_Val << USBCORE_USOF_CNT_Pos) /* (USBCORE_USOF) 32-byte packet Position  */
#define USBCORE_USOF_CNT_BYTE16               (USBCORE_USOF_CNT_BYTE16_Val << USBCORE_USOF_CNT_Pos) /* (USBCORE_USOF) 16-byte packet Position  */
#define USBCORE_USOF_CNT_BYTE8                (USBCORE_USOF_CNT_BYTE8_Val << USBCORE_USOF_CNT_Pos) /* (USBCORE_USOF) 8-byte packet Position  */
#define USBCORE_USOF_Msk                      _UINT32_(0x000000FF)                                 /* (USBCORE_USOF) Register Mask  */


/* -------- USBCORE_USOFCLR : (USBCORE Offset: 0x2B4) (R/W 32)  -------- */
#define USBCORE_USOFCLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_USOFCLR)   Reset Value */

#define USBCORE_USOFCLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_USOFCLR) Register Mask  */


/* -------- USBCORE_USOFSET : (USBCORE Offset: 0x2B8) (R/W 32)  -------- */
#define USBCORE_USOFSET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_USOFSET)   Reset Value */

#define USBCORE_USOFSET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_USOFSET) Register Mask  */


/* -------- USBCORE_USOFINV : (USBCORE Offset: 0x2BC) (R/W 32)  -------- */
#define USBCORE_USOFINV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_USOFINV)   Reset Value */

#define USBCORE_USOFINV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_USOFINV) Register Mask  */


/* -------- USBCORE_UBDTP2 : (USBCORE Offset: 0x2C0) (R/W 32) USB BDT PAGE 2 Register -------- */
#define USBCORE_UBDTP2_BDTPTRH_Pos            _UINT32_(0)                                          /* (USBCORE_UBDTP2)  Position */
#define USBCORE_UBDTP2_BDTPTRH_Msk            (_UINT32_(0xFF) << USBCORE_UBDTP2_BDTPTRH_Pos)       /* (USBCORE_UBDTP2)  Mask */
#define USBCORE_UBDTP2_BDTPTRH(value)         (USBCORE_UBDTP2_BDTPTRH_Msk & (_UINT32_(value) << USBCORE_UBDTP2_BDTPTRH_Pos)) /* Assigment of value for BDTPTRH in the USBCORE_UBDTP2 register */
#define USBCORE_UBDTP2_Msk                    _UINT32_(0x000000FF)                                 /* (USBCORE_UBDTP2) Register Mask  */


/* -------- USBCORE_UBDTP2CLR : (USBCORE Offset: 0x2C4) (R/W 32)  -------- */
#define USBCORE_UBDTP2CLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP2CLR)   Reset Value */

#define USBCORE_UBDTP2CLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP2CLR) Register Mask  */


/* -------- USBCORE_UBDTP2SET : (USBCORE Offset: 0x2C8) (R/W 32)  -------- */
#define USBCORE_UBDTP2SET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP2SET)   Reset Value */

#define USBCORE_UBDTP2SET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP2SET) Register Mask  */


/* -------- USBCORE_UBDTP2INV : (USBCORE Offset: 0x2CC) (R/W 32)  -------- */
#define USBCORE_UBDTP2INV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP2INV)   Reset Value */

#define USBCORE_UBDTP2INV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP2INV) Register Mask  */


/* -------- USBCORE_UBDTP3 : (USBCORE Offset: 0x2D0) (R/W 32) USB BDT PAGE 3 Register -------- */
#define USBCORE_UBDTP3_BDTPTRU_Pos            _UINT32_(0)                                          /* (USBCORE_UBDTP3)  Position */
#define USBCORE_UBDTP3_BDTPTRU_Msk            (_UINT32_(0xFF) << USBCORE_UBDTP3_BDTPTRU_Pos)       /* (USBCORE_UBDTP3)  Mask */
#define USBCORE_UBDTP3_BDTPTRU(value)         (USBCORE_UBDTP3_BDTPTRU_Msk & (_UINT32_(value) << USBCORE_UBDTP3_BDTPTRU_Pos)) /* Assigment of value for BDTPTRU in the USBCORE_UBDTP3 register */
#define USBCORE_UBDTP3_Msk                    _UINT32_(0x000000FF)                                 /* (USBCORE_UBDTP3) Register Mask  */


/* -------- USBCORE_UBDTP3CLR : (USBCORE Offset: 0x2D4) (R/W 32)  -------- */
#define USBCORE_UBDTP3CLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP3CLR)   Reset Value */

#define USBCORE_UBDTP3CLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP3CLR) Register Mask  */


/* -------- USBCORE_UBDTP3SET : (USBCORE Offset: 0x2D8) (R/W 32)  -------- */
#define USBCORE_UBDTP3SET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP3SET)   Reset Value */

#define USBCORE_UBDTP3SET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP3SET) Register Mask  */


/* -------- USBCORE_UBDTP3INV : (USBCORE Offset: 0x2DC) (R/W 32)  -------- */
#define USBCORE_UBDTP3INV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UBDTP3INV)   Reset Value */

#define USBCORE_UBDTP3INV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UBDTP3INV) Register Mask  */


/* -------- USBCORE_UCNFG1 : (USBCORE Offset: 0x2E0) (R/W 32) USB Configuration 1 Register -------- */
#define USBCORE_UCNFG1_AUTO_SUSP_Pos          _UINT32_(0)                                          /* (USBCORE_UCNFG1) Automatic Suspend Enable bit Position */
#define USBCORE_UCNFG1_AUTO_SUSP_Msk          (_UINT32_(0x1) << USBCORE_UCNFG1_AUTO_SUSP_Pos)      /* (USBCORE_UCNFG1) Automatic Suspend Enable bit Mask */
#define USBCORE_UCNFG1_AUTO_SUSP(value)       (USBCORE_UCNFG1_AUTO_SUSP_Msk & (_UINT32_(value) << USBCORE_UCNFG1_AUTO_SUSP_Pos)) /* Assigment of value for AUTO_SUSP in the USBCORE_UCNFG1 register */
#define   USBCORE_UCNFG1_AUTO_SUSP_AUTO_SUSPEND_Val _UINT32_(0x1)                                        /* (USBCORE_UCNFG1) USB module automatically suspends upon entry to Sleep mode. See the USUSPEND bit (UxPWRC) in  */
#define   USBCORE_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND_Val _UINT32_(0x0)                                        /* (USBCORE_UCNFG1) USB module does not automatically suspend upon entry to Sleep mode. Software must use the USUSPEND bit (UxPWRC) to suspend the module  */
#define USBCORE_UCNFG1_AUTO_SUSP_AUTO_SUSPEND (USBCORE_UCNFG1_AUTO_SUSP_AUTO_SUSPEND_Val << USBCORE_UCNFG1_AUTO_SUSP_Pos) /* (USBCORE_UCNFG1) USB module automatically suspends upon entry to Sleep mode. See the USUSPEND bit (UxPWRC) in Position  */
#define USBCORE_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND (USBCORE_UCNFG1_AUTO_SUSP_NO_AUTO_SUSPEND_Val << USBCORE_UCNFG1_AUTO_SUSP_Pos) /* (USBCORE_UCNFG1) USB module does not automatically suspend upon entry to Sleep mode. Software must use the USUSPEND bit (UxPWRC) to suspend the module Position  */
#define USBCORE_UCNFG1_LSDEV_Pos              _UINT32_(3)                                          /* (USBCORE_UCNFG1) Low-Speed Device Enable bit Position */
#define USBCORE_UCNFG1_LSDEV_Msk              (_UINT32_(0x1) << USBCORE_UCNFG1_LSDEV_Pos)          /* (USBCORE_UCNFG1) Low-Speed Device Enable bit Mask */
#define USBCORE_UCNFG1_LSDEV(value)           (USBCORE_UCNFG1_LSDEV_Msk & (_UINT32_(value) << USBCORE_UCNFG1_LSDEV_Pos)) /* Assigment of value for LSDEV in the USBCORE_UCNFG1 register */
#define   USBCORE_UCNFG1_LSDEV_LOW_SPEED_Val  _UINT32_(0x1)                                        /* (USBCORE_UCNFG1) USB module to operate in Low-Speed Device mode  */
#define   USBCORE_UCNFG1_LSDEV_OTG_Val        _UINT32_(0x0)                                        /* (USBCORE_UCNFG1) USB module to operate in OTG  */
#define USBCORE_UCNFG1_LSDEV_LOW_SPEED        (USBCORE_UCNFG1_LSDEV_LOW_SPEED_Val << USBCORE_UCNFG1_LSDEV_Pos) /* (USBCORE_UCNFG1) USB module to operate in Low-Speed Device mode Position  */
#define USBCORE_UCNFG1_LSDEV_OTG              (USBCORE_UCNFG1_LSDEV_OTG_Val << USBCORE_UCNFG1_LSDEV_Pos) /* (USBCORE_UCNFG1) USB module to operate in OTG Position  */
#define USBCORE_UCNFG1_PSIDL_Pos              _UINT32_(4)                                          /* (USBCORE_UCNFG1) Stop in Idle Mode bit Position */
#define USBCORE_UCNFG1_PSIDL_Msk              (_UINT32_(0x1) << USBCORE_UCNFG1_PSIDL_Pos)          /* (USBCORE_UCNFG1) Stop in Idle Mode bit Mask */
#define USBCORE_UCNFG1_PSIDL(value)           (USBCORE_UCNFG1_PSIDL_Msk & (_UINT32_(value) << USBCORE_UCNFG1_PSIDL_Pos)) /* Assigment of value for PSIDL in the USBCORE_UCNFG1 register */
#define   USBCORE_UCNFG1_PSIDL_DISCONTINUE_Val _UINT32_(0x1)                                        /* (USBCORE_UCNFG1) Discontinue module operation when device enters Idle mode  */
#define   USBCORE_UCNFG1_PSIDL_CONTINUE_Val   _UINT32_(0x0)                                        /* (USBCORE_UCNFG1) Continue module operation in Idle mode  */
#define USBCORE_UCNFG1_PSIDL_DISCONTINUE      (USBCORE_UCNFG1_PSIDL_DISCONTINUE_Val << USBCORE_UCNFG1_PSIDL_Pos) /* (USBCORE_UCNFG1) Discontinue module operation when device enters Idle mode Position  */
#define USBCORE_UCNFG1_PSIDL_CONTINUE         (USBCORE_UCNFG1_PSIDL_CONTINUE_Val << USBCORE_UCNFG1_PSIDL_Pos) /* (USBCORE_UCNFG1) Continue module operation in Idle mode Position  */
#define USBCORE_UCNFG1_UOEMON_Pos             _UINT32_(6)                                          /* (USBCORE_UCNFG1) USB Position */
#define USBCORE_UCNFG1_UOEMON_Msk             (_UINT32_(0x1) << USBCORE_UCNFG1_UOEMON_Pos)         /* (USBCORE_UCNFG1) USB Mask */
#define USBCORE_UCNFG1_UOEMON(value)          (USBCORE_UCNFG1_UOEMON_Msk & (_UINT32_(value) << USBCORE_UCNFG1_UOEMON_Pos)) /* Assigment of value for UOEMON in the USBCORE_UCNFG1 register */
#define   USBCORE_UCNFG1_UOEMON_ACTIVE_Val    _UINT32_(0x1)                                        /* (USBCORE_UCNFG1) OE signal is active; it indicates intervals during which the D+/D- lines are driving  */
#define   USBCORE_UCNFG1_UOEMON_INACTIVE_Val  _UINT32_(0x0)                                        /* (USBCORE_UCNFG1) OE signal is inactive  */
#define USBCORE_UCNFG1_UOEMON_ACTIVE          (USBCORE_UCNFG1_UOEMON_ACTIVE_Val << USBCORE_UCNFG1_UOEMON_Pos) /* (USBCORE_UCNFG1) OE signal is active; it indicates intervals during which the D+/D- lines are driving Position  */
#define USBCORE_UCNFG1_UOEMON_INACTIVE        (USBCORE_UCNFG1_UOEMON_INACTIVE_Val << USBCORE_UCNFG1_UOEMON_Pos) /* (USBCORE_UCNFG1) OE signal is inactive Position  */
#define USBCORE_UCNFG1_UTEYE_Pos              _UINT32_(7)                                          /* (USBCORE_UCNFG1) USB Eye-Pattern Test Enable bit Position */
#define USBCORE_UCNFG1_UTEYE_Msk              (_UINT32_(0x1) << USBCORE_UCNFG1_UTEYE_Pos)          /* (USBCORE_UCNFG1) USB Eye-Pattern Test Enable bit Mask */
#define USBCORE_UCNFG1_UTEYE(value)           (USBCORE_UCNFG1_UTEYE_Msk & (_UINT32_(value) << USBCORE_UCNFG1_UTEYE_Pos)) /* Assigment of value for UTEYE in the USBCORE_UCNFG1 register */
#define   USBCORE_UCNFG1_UTEYE_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_UCNFG1) Eye-Pattern Test is enabled  */
#define   USBCORE_UCNFG1_UTEYE_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_UCNFG1) Eye-Pattern Test is disabled  */
#define USBCORE_UCNFG1_UTEYE_ON               (USBCORE_UCNFG1_UTEYE_ON_Val << USBCORE_UCNFG1_UTEYE_Pos) /* (USBCORE_UCNFG1) Eye-Pattern Test is enabled Position  */
#define USBCORE_UCNFG1_UTEYE_OFF              (USBCORE_UCNFG1_UTEYE_OFF_Val << USBCORE_UCNFG1_UTEYE_Pos) /* (USBCORE_UCNFG1) Eye-Pattern Test is disabled Position  */
#define USBCORE_UCNFG1_Msk                    _UINT32_(0x000000D9)                                 /* (USBCORE_UCNFG1) Register Mask  */


/* -------- USBCORE_UCNFG1CLR : (USBCORE Offset: 0x2E4) (R/W 32)  -------- */
#define USBCORE_UCNFG1CLR_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UCNFG1CLR)   Reset Value */

#define USBCORE_UCNFG1CLR_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UCNFG1CLR) Register Mask  */


/* -------- USBCORE_UCNFG1SET : (USBCORE Offset: 0x2E8) (R/W 32)  -------- */
#define USBCORE_UCNFG1SET_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UCNFG1SET)   Reset Value */

#define USBCORE_UCNFG1SET_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UCNFG1SET) Register Mask  */


/* -------- USBCORE_UCNFG1INV : (USBCORE Offset: 0x2EC) (R/W 32)  -------- */
#define USBCORE_UCNFG1INV_RESETVALUE          _UINT32_(0x00)                                       /*  (USBCORE_UCNFG1INV)   Reset Value */

#define USBCORE_UCNFG1INV_Msk                 _UINT32_(0x00000000)                                 /* (USBCORE_UCNFG1INV) Register Mask  */


/* -------- USBCORE_UEP0 : (USBCORE Offset: 0x300) (R/W 32) USB Endpoint Control Register 0 -------- */
#define USBCORE_UEP0_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP0) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP0_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP0_EPHSHK_Pos)           /* (USBCORE_UEP0) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP0_EPHSHK(value)            (USBCORE_UEP0_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP0_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP0) Endpoint Handshake is enabled  */
#define   USBCORE_UEP0_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP0) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP0_EPHSHK_ON                (USBCORE_UEP0_EPHSHK_ON_Val << USBCORE_UEP0_EPHSHK_Pos) /* (USBCORE_UEP0) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP0_EPHSHK_OFF               (USBCORE_UEP0_EPHSHK_OFF_Val << USBCORE_UEP0_EPHSHK_Pos) /* (USBCORE_UEP0) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP0_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP0) Endpoint Stall Status bit Position */
#define USBCORE_UEP0_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP0_EPSTALL_Pos)          /* (USBCORE_UEP0) Endpoint Stall Status bit Mask */
#define USBCORE_UEP0_EPSTALL(value)           (USBCORE_UEP0_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP0_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP0) Endpoint 0 was stalled  */
#define   USBCORE_UEP0_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP0) Endpoint 0 was not stalled  */
#define USBCORE_UEP0_EPSTALL_STALL            (USBCORE_UEP0_EPSTALL_STALL_Val << USBCORE_UEP0_EPSTALL_Pos) /* (USBCORE_UEP0) Endpoint 0 was stalled Position  */
#define USBCORE_UEP0_EPSTALL_NOT_STALL        (USBCORE_UEP0_EPSTALL_NOT_STALL_Val << USBCORE_UEP0_EPSTALL_Pos) /* (USBCORE_UEP0) Endpoint 0 was not stalled Position  */
#define USBCORE_UEP0_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP0) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP0_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP0_EPTXEN_Pos)           /* (USBCORE_UEP0) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP0_EPTXEN(value)            (USBCORE_UEP0_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP0_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP0) Endpoint 0 transmit is enabled  */
#define   USBCORE_UEP0_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP0) Endpoint 0 transmit is disabled  */
#define USBCORE_UEP0_EPTXEN_ON                (USBCORE_UEP0_EPTXEN_ON_Val << USBCORE_UEP0_EPTXEN_Pos) /* (USBCORE_UEP0) Endpoint 0 transmit is enabled Position  */
#define USBCORE_UEP0_EPTXEN_OFF               (USBCORE_UEP0_EPTXEN_OFF_Val << USBCORE_UEP0_EPTXEN_Pos) /* (USBCORE_UEP0) Endpoint 0 transmit is disabled Position  */
#define USBCORE_UEP0_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP0) Endpoint Receive Enable bit Position */
#define USBCORE_UEP0_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP0_EPRXEN_Pos)           /* (USBCORE_UEP0) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP0_EPRXEN(value)            (USBCORE_UEP0_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP0_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP0) Endpoint 0 receive is enabled  */
#define   USBCORE_UEP0_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP0) Endpoint 0 receive is disabled  */
#define USBCORE_UEP0_EPRXEN_ON                (USBCORE_UEP0_EPRXEN_ON_Val << USBCORE_UEP0_EPRXEN_Pos) /* (USBCORE_UEP0) Endpoint 0 receive is enabled Position  */
#define USBCORE_UEP0_EPRXEN_OFF               (USBCORE_UEP0_EPRXEN_OFF_Val << USBCORE_UEP0_EPRXEN_Pos) /* (USBCORE_UEP0) Endpoint 0 receive is disabled Position  */
#define USBCORE_UEP0_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP0) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP0_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP0_EPCONDIS_Pos)         /* (USBCORE_UEP0) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP0_EPCONDIS(value)          (USBCORE_UEP0_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP0_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_EPCONDIS_DISABLE_0_Val _UINT32_(0x1)                                        /* (USBCORE_UEP0) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 0 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP0_EPCONDIS_ENABLE_0_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP0) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 0 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP0_EPCONDIS_DISABLE_0       (USBCORE_UEP0_EPCONDIS_DISABLE_0_Val << USBCORE_UEP0_EPCONDIS_Pos) /* (USBCORE_UEP0) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 0 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP0_EPCONDIS_ENABLE_0        (USBCORE_UEP0_EPCONDIS_ENABLE_0_Val << USBCORE_UEP0_EPCONDIS_Pos) /* (USBCORE_UEP0) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 0 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP0_RETRYDIS_Pos             _UINT32_(6)                                          /* (USBCORE_UEP0) Retry Disable bit Position */
#define USBCORE_UEP0_RETRYDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP0_RETRYDIS_Pos)         /* (USBCORE_UEP0) Retry Disable bit Mask */
#define USBCORE_UEP0_RETRYDIS(value)          (USBCORE_UEP0_RETRYDIS_Msk & (_UINT32_(value) << USBCORE_UEP0_RETRYDIS_Pos)) /* Assigment of value for RETRYDIS in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_RETRYDIS_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_UEP0) Retry NAKed transactions is disabled  */
#define   USBCORE_UEP0_RETRYDIS_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_UEP0) Retry NAKed transactions is enabled; retry done in hardware  */
#define USBCORE_UEP0_RETRYDIS_ON              (USBCORE_UEP0_RETRYDIS_ON_Val << USBCORE_UEP0_RETRYDIS_Pos) /* (USBCORE_UEP0) Retry NAKed transactions is disabled Position  */
#define USBCORE_UEP0_RETRYDIS_OFF             (USBCORE_UEP0_RETRYDIS_OFF_Val << USBCORE_UEP0_RETRYDIS_Pos) /* (USBCORE_UEP0) Retry NAKed transactions is enabled; retry done in hardware Position  */
#define USBCORE_UEP0_LSPD_Pos                 _UINT32_(7)                                          /* (USBCORE_UEP0) Low-Speed Direct Connection Enable bit Position */
#define USBCORE_UEP0_LSPD_Msk                 (_UINT32_(0x1) << USBCORE_UEP0_LSPD_Pos)             /* (USBCORE_UEP0) Low-Speed Direct Connection Enable bit Mask */
#define USBCORE_UEP0_LSPD(value)              (USBCORE_UEP0_LSPD_Msk & (_UINT32_(value) << USBCORE_UEP0_LSPD_Pos)) /* Assigment of value for LSPD in the USBCORE_UEP0 register */
#define   USBCORE_UEP0_LSPD_ON_Val            _UINT32_(0x1)                                        /* (USBCORE_UEP0) Direct connection to a low-speed device is enabled  */
#define   USBCORE_UEP0_LSPD_OFF_Val           _UINT32_(0x0)                                        /* (USBCORE_UEP0) Direct connection to a low-speed device is disabled; hub required with PRE_PID  */
#define USBCORE_UEP0_LSPD_ON                  (USBCORE_UEP0_LSPD_ON_Val << USBCORE_UEP0_LSPD_Pos)  /* (USBCORE_UEP0) Direct connection to a low-speed device is enabled Position  */
#define USBCORE_UEP0_LSPD_OFF                 (USBCORE_UEP0_LSPD_OFF_Val << USBCORE_UEP0_LSPD_Pos) /* (USBCORE_UEP0) Direct connection to a low-speed device is disabled; hub required with PRE_PID Position  */
#define USBCORE_UEP0_Msk                      _UINT32_(0x000000DF)                                 /* (USBCORE_UEP0) Register Mask  */


/* -------- USBCORE_UEP0CLR : (USBCORE Offset: 0x304) (R/W 32)  -------- */
#define USBCORE_UEP0CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP0CLR)   Reset Value */

#define USBCORE_UEP0CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP0CLR) Register Mask  */


/* -------- USBCORE_UEP0SET : (USBCORE Offset: 0x308) (R/W 32)  -------- */
#define USBCORE_UEP0SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP0SET)   Reset Value */

#define USBCORE_UEP0SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP0SET) Register Mask  */


/* -------- USBCORE_UEP0INV : (USBCORE Offset: 0x30C) (R/W 32)  -------- */
#define USBCORE_UEP0INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP0INV)   Reset Value */

#define USBCORE_UEP0INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP0INV) Register Mask  */


/* -------- USBCORE_UEP1 : (USBCORE Offset: 0x310) (R/W 32) USB Endpoint Control Register 1 -------- */
#define USBCORE_UEP1_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP1) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP1_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP1_EPHSHK_Pos)           /* (USBCORE_UEP1) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP1_EPHSHK(value)            (USBCORE_UEP1_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP1_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP1 register */
#define   USBCORE_UEP1_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP1) Endpoint Handshake is enabled  */
#define   USBCORE_UEP1_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP1) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP1_EPHSHK_ON                (USBCORE_UEP1_EPHSHK_ON_Val << USBCORE_UEP1_EPHSHK_Pos) /* (USBCORE_UEP1) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP1_EPHSHK_OFF               (USBCORE_UEP1_EPHSHK_OFF_Val << USBCORE_UEP1_EPHSHK_Pos) /* (USBCORE_UEP1) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP1_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP1) Endpoint Stall Status bit Position */
#define USBCORE_UEP1_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP1_EPSTALL_Pos)          /* (USBCORE_UEP1) Endpoint Stall Status bit Mask */
#define USBCORE_UEP1_EPSTALL(value)           (USBCORE_UEP1_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP1_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP1 register */
#define   USBCORE_UEP1_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP1) Endpoint 1 was stalled  */
#define   USBCORE_UEP1_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP1) Endpoint 1 was not stalled  */
#define USBCORE_UEP1_EPSTALL_STALL            (USBCORE_UEP1_EPSTALL_STALL_Val << USBCORE_UEP1_EPSTALL_Pos) /* (USBCORE_UEP1) Endpoint 1 was stalled Position  */
#define USBCORE_UEP1_EPSTALL_NOT_STALL        (USBCORE_UEP1_EPSTALL_NOT_STALL_Val << USBCORE_UEP1_EPSTALL_Pos) /* (USBCORE_UEP1) Endpoint 1 was not stalled Position  */
#define USBCORE_UEP1_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP1) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP1_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP1_EPTXEN_Pos)           /* (USBCORE_UEP1) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP1_EPTXEN(value)            (USBCORE_UEP1_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP1_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP1 register */
#define   USBCORE_UEP1_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP1) Endpoint 1 transmit is enabled  */
#define   USBCORE_UEP1_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP1) Endpoint 1 transmit is disabled  */
#define USBCORE_UEP1_EPTXEN_ON                (USBCORE_UEP1_EPTXEN_ON_Val << USBCORE_UEP1_EPTXEN_Pos) /* (USBCORE_UEP1) Endpoint 1 transmit is enabled Position  */
#define USBCORE_UEP1_EPTXEN_OFF               (USBCORE_UEP1_EPTXEN_OFF_Val << USBCORE_UEP1_EPTXEN_Pos) /* (USBCORE_UEP1) Endpoint 1 transmit is disabled Position  */
#define USBCORE_UEP1_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP1) Endpoint Receive Enable bit Position */
#define USBCORE_UEP1_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP1_EPRXEN_Pos)           /* (USBCORE_UEP1) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP1_EPRXEN(value)            (USBCORE_UEP1_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP1_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP1 register */
#define   USBCORE_UEP1_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP1) Endpoint 1 receive is enabled  */
#define   USBCORE_UEP1_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP1) Endpoint 1 receive is disabled  */
#define USBCORE_UEP1_EPRXEN_ON                (USBCORE_UEP1_EPRXEN_ON_Val << USBCORE_UEP1_EPRXEN_Pos) /* (USBCORE_UEP1) Endpoint 1 receive is enabled Position  */
#define USBCORE_UEP1_EPRXEN_OFF               (USBCORE_UEP1_EPRXEN_OFF_Val << USBCORE_UEP1_EPRXEN_Pos) /* (USBCORE_UEP1) Endpoint 1 receive is disabled Position  */
#define USBCORE_UEP1_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP1) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP1_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP1_EPCONDIS_Pos)         /* (USBCORE_UEP1) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP1_EPCONDIS(value)          (USBCORE_UEP1_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP1_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP1 register */
#define   USBCORE_UEP1_EPCONDIS_DISABLE_1_Val _UINT32_(0x1)                                        /* (USBCORE_UEP1) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 1 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP1_EPCONDIS_ENABLE_1_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP1) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 1 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP1_EPCONDIS_DISABLE_1       (USBCORE_UEP1_EPCONDIS_DISABLE_1_Val << USBCORE_UEP1_EPCONDIS_Pos) /* (USBCORE_UEP1) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 1 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP1_EPCONDIS_ENABLE_1        (USBCORE_UEP1_EPCONDIS_ENABLE_1_Val << USBCORE_UEP1_EPCONDIS_Pos) /* (USBCORE_UEP1) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 1 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP1_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP1) Register Mask  */


/* -------- USBCORE_UEP1CLR : (USBCORE Offset: 0x314) (R/W 32)  -------- */
#define USBCORE_UEP1CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP1CLR)   Reset Value */

#define USBCORE_UEP1CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP1CLR) Register Mask  */


/* -------- USBCORE_UEP1SET : (USBCORE Offset: 0x318) (R/W 32)  -------- */
#define USBCORE_UEP1SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP1SET)   Reset Value */

#define USBCORE_UEP1SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP1SET) Register Mask  */


/* -------- USBCORE_UEP1INV : (USBCORE Offset: 0x31C) (R/W 32)  -------- */
#define USBCORE_UEP1INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP1INV)   Reset Value */

#define USBCORE_UEP1INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP1INV) Register Mask  */


/* -------- USBCORE_UEP2 : (USBCORE Offset: 0x320) (R/W 32) USB Endpoint Control Register 2 -------- */
#define USBCORE_UEP2_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP2) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP2_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP2_EPHSHK_Pos)           /* (USBCORE_UEP2) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP2_EPHSHK(value)            (USBCORE_UEP2_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP2_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP2 register */
#define   USBCORE_UEP2_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP2) Endpoint Handshake is enabled  */
#define   USBCORE_UEP2_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP2) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP2_EPHSHK_ON                (USBCORE_UEP2_EPHSHK_ON_Val << USBCORE_UEP2_EPHSHK_Pos) /* (USBCORE_UEP2) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP2_EPHSHK_OFF               (USBCORE_UEP2_EPHSHK_OFF_Val << USBCORE_UEP2_EPHSHK_Pos) /* (USBCORE_UEP2) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP2_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP2) Endpoint Stall Status bit Position */
#define USBCORE_UEP2_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP2_EPSTALL_Pos)          /* (USBCORE_UEP2) Endpoint Stall Status bit Mask */
#define USBCORE_UEP2_EPSTALL(value)           (USBCORE_UEP2_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP2_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP2 register */
#define   USBCORE_UEP2_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP2) Endpoint 2 was stalled  */
#define   USBCORE_UEP2_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP2) Endpoint 2 was not stalled  */
#define USBCORE_UEP2_EPSTALL_STALL            (USBCORE_UEP2_EPSTALL_STALL_Val << USBCORE_UEP2_EPSTALL_Pos) /* (USBCORE_UEP2) Endpoint 2 was stalled Position  */
#define USBCORE_UEP2_EPSTALL_NOT_STALL        (USBCORE_UEP2_EPSTALL_NOT_STALL_Val << USBCORE_UEP2_EPSTALL_Pos) /* (USBCORE_UEP2) Endpoint 2 was not stalled Position  */
#define USBCORE_UEP2_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP2) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP2_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP2_EPTXEN_Pos)           /* (USBCORE_UEP2) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP2_EPTXEN(value)            (USBCORE_UEP2_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP2_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP2 register */
#define   USBCORE_UEP2_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP2) Endpoint 2 transmit is enabled  */
#define   USBCORE_UEP2_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP2) Endpoint 2 transmit is disabled  */
#define USBCORE_UEP2_EPTXEN_ON                (USBCORE_UEP2_EPTXEN_ON_Val << USBCORE_UEP2_EPTXEN_Pos) /* (USBCORE_UEP2) Endpoint 2 transmit is enabled Position  */
#define USBCORE_UEP2_EPTXEN_OFF               (USBCORE_UEP2_EPTXEN_OFF_Val << USBCORE_UEP2_EPTXEN_Pos) /* (USBCORE_UEP2) Endpoint 2 transmit is disabled Position  */
#define USBCORE_UEP2_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP2) Endpoint Receive Enable bit Position */
#define USBCORE_UEP2_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP2_EPRXEN_Pos)           /* (USBCORE_UEP2) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP2_EPRXEN(value)            (USBCORE_UEP2_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP2_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP2 register */
#define   USBCORE_UEP2_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP2) Endpoint 2 receive is enabled  */
#define   USBCORE_UEP2_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP2) Endpoint 2 receive is disabled  */
#define USBCORE_UEP2_EPRXEN_ON                (USBCORE_UEP2_EPRXEN_ON_Val << USBCORE_UEP2_EPRXEN_Pos) /* (USBCORE_UEP2) Endpoint 2 receive is enabled Position  */
#define USBCORE_UEP2_EPRXEN_OFF               (USBCORE_UEP2_EPRXEN_OFF_Val << USBCORE_UEP2_EPRXEN_Pos) /* (USBCORE_UEP2) Endpoint 2 receive is disabled Position  */
#define USBCORE_UEP2_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP2) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP2_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP2_EPCONDIS_Pos)         /* (USBCORE_UEP2) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP2_EPCONDIS(value)          (USBCORE_UEP2_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP2_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP2 register */
#define   USBCORE_UEP2_EPCONDIS_DISABLE_2_Val _UINT32_(0x1)                                        /* (USBCORE_UEP2) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 2 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP2_EPCONDIS_ENABLE_2_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP2) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 2 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP2_EPCONDIS_DISABLE_2       (USBCORE_UEP2_EPCONDIS_DISABLE_2_Val << USBCORE_UEP2_EPCONDIS_Pos) /* (USBCORE_UEP2) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 2 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP2_EPCONDIS_ENABLE_2        (USBCORE_UEP2_EPCONDIS_ENABLE_2_Val << USBCORE_UEP2_EPCONDIS_Pos) /* (USBCORE_UEP2) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 2 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP2_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP2) Register Mask  */


/* -------- USBCORE_UEP2CLR : (USBCORE Offset: 0x324) (R/W 32)  -------- */
#define USBCORE_UEP2CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP2CLR)   Reset Value */

#define USBCORE_UEP2CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP2CLR) Register Mask  */


/* -------- USBCORE_UEP2SET : (USBCORE Offset: 0x328) (R/W 32)  -------- */
#define USBCORE_UEP2SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP2SET)   Reset Value */

#define USBCORE_UEP2SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP2SET) Register Mask  */


/* -------- USBCORE_UEP2INV : (USBCORE Offset: 0x32C) (R/W 32)  -------- */
#define USBCORE_UEP2INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP2INV)   Reset Value */

#define USBCORE_UEP2INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP2INV) Register Mask  */


/* -------- USBCORE_UEP3 : (USBCORE Offset: 0x330) (R/W 32) USB Endpoint Control Register 3 -------- */
#define USBCORE_UEP3_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP3) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP3_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP3_EPHSHK_Pos)           /* (USBCORE_UEP3) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP3_EPHSHK(value)            (USBCORE_UEP3_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP3_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP3 register */
#define   USBCORE_UEP3_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP3) Endpoint Handshake is enabled  */
#define   USBCORE_UEP3_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP3) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP3_EPHSHK_ON                (USBCORE_UEP3_EPHSHK_ON_Val << USBCORE_UEP3_EPHSHK_Pos) /* (USBCORE_UEP3) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP3_EPHSHK_OFF               (USBCORE_UEP3_EPHSHK_OFF_Val << USBCORE_UEP3_EPHSHK_Pos) /* (USBCORE_UEP3) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP3_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP3) Endpoint Stall Status bit Position */
#define USBCORE_UEP3_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP3_EPSTALL_Pos)          /* (USBCORE_UEP3) Endpoint Stall Status bit Mask */
#define USBCORE_UEP3_EPSTALL(value)           (USBCORE_UEP3_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP3_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP3 register */
#define   USBCORE_UEP3_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP3) Endpoint 3 was stalled  */
#define   USBCORE_UEP3_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP3) Endpoint 3 was not stalled  */
#define USBCORE_UEP3_EPSTALL_STALL            (USBCORE_UEP3_EPSTALL_STALL_Val << USBCORE_UEP3_EPSTALL_Pos) /* (USBCORE_UEP3) Endpoint 3 was stalled Position  */
#define USBCORE_UEP3_EPSTALL_NOT_STALL        (USBCORE_UEP3_EPSTALL_NOT_STALL_Val << USBCORE_UEP3_EPSTALL_Pos) /* (USBCORE_UEP3) Endpoint 3 was not stalled Position  */
#define USBCORE_UEP3_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP3) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP3_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP3_EPTXEN_Pos)           /* (USBCORE_UEP3) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP3_EPTXEN(value)            (USBCORE_UEP3_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP3_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP3 register */
#define   USBCORE_UEP3_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP3) Endpoint n transmit is enabled  */
#define   USBCORE_UEP3_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP3) Endpoint n transmit is disabled  */
#define USBCORE_UEP3_EPTXEN_ON                (USBCORE_UEP3_EPTXEN_ON_Val << USBCORE_UEP3_EPTXEN_Pos) /* (USBCORE_UEP3) Endpoint n transmit is enabled Position  */
#define USBCORE_UEP3_EPTXEN_OFF               (USBCORE_UEP3_EPTXEN_OFF_Val << USBCORE_UEP3_EPTXEN_Pos) /* (USBCORE_UEP3) Endpoint n transmit is disabled Position  */
#define USBCORE_UEP3_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP3) Endpoint Receive Enable bit Position */
#define USBCORE_UEP3_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP3_EPRXEN_Pos)           /* (USBCORE_UEP3) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP3_EPRXEN(value)            (USBCORE_UEP3_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP3_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP3 register */
#define   USBCORE_UEP3_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP3) Endpoint 3 receive is enabled  */
#define   USBCORE_UEP3_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP3) Endpoint 3 receive is disabled  */
#define USBCORE_UEP3_EPRXEN_ON                (USBCORE_UEP3_EPRXEN_ON_Val << USBCORE_UEP3_EPRXEN_Pos) /* (USBCORE_UEP3) Endpoint 3 receive is enabled Position  */
#define USBCORE_UEP3_EPRXEN_OFF               (USBCORE_UEP3_EPRXEN_OFF_Val << USBCORE_UEP3_EPRXEN_Pos) /* (USBCORE_UEP3) Endpoint 3 receive is disabled Position  */
#define USBCORE_UEP3_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP3) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP3_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP3_EPCONDIS_Pos)         /* (USBCORE_UEP3) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP3_EPCONDIS(value)          (USBCORE_UEP3_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP3_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP3 register */
#define   USBCORE_UEP3_EPCONDIS_DISABLE_3_Val _UINT32_(0x1)                                        /* (USBCORE_UEP3) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 3 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP3_EPCONDIS_ENABLE_3_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP3) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 3 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP3_EPCONDIS_DISABLE_3       (USBCORE_UEP3_EPCONDIS_DISABLE_3_Val << USBCORE_UEP3_EPCONDIS_Pos) /* (USBCORE_UEP3) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 3 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP3_EPCONDIS_ENABLE_3        (USBCORE_UEP3_EPCONDIS_ENABLE_3_Val << USBCORE_UEP3_EPCONDIS_Pos) /* (USBCORE_UEP3) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 3 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP3_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP3) Register Mask  */


/* -------- USBCORE_UEP3CLR : (USBCORE Offset: 0x334) (R/W 32)  -------- */
#define USBCORE_UEP3CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP3CLR)   Reset Value */

#define USBCORE_UEP3CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP3CLR) Register Mask  */


/* -------- USBCORE_UEP3SET : (USBCORE Offset: 0x338) (R/W 32)  -------- */
#define USBCORE_UEP3SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP3SET)   Reset Value */

#define USBCORE_UEP3SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP3SET) Register Mask  */


/* -------- USBCORE_UEP3INV : (USBCORE Offset: 0x33C) (R/W 32)  -------- */
#define USBCORE_UEP3INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP3INV)   Reset Value */

#define USBCORE_UEP3INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP3INV) Register Mask  */


/* -------- USBCORE_UEP4 : (USBCORE Offset: 0x340) (R/W 32) USB Endpoint Control Register 4 -------- */
#define USBCORE_UEP4_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP4) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP4_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP4_EPHSHK_Pos)           /* (USBCORE_UEP4) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP4_EPHSHK(value)            (USBCORE_UEP4_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP4_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP4 register */
#define   USBCORE_UEP4_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP4) Endpoint Handshake is enabled  */
#define   USBCORE_UEP4_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP4) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP4_EPHSHK_ON                (USBCORE_UEP4_EPHSHK_ON_Val << USBCORE_UEP4_EPHSHK_Pos) /* (USBCORE_UEP4) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP4_EPHSHK_OFF               (USBCORE_UEP4_EPHSHK_OFF_Val << USBCORE_UEP4_EPHSHK_Pos) /* (USBCORE_UEP4) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP4_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP4) Endpoint Stall Status bit Position */
#define USBCORE_UEP4_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP4_EPSTALL_Pos)          /* (USBCORE_UEP4) Endpoint Stall Status bit Mask */
#define USBCORE_UEP4_EPSTALL(value)           (USBCORE_UEP4_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP4_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP4 register */
#define   USBCORE_UEP4_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP4) Endpoint 4 was stalled  */
#define   USBCORE_UEP4_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP4) Endpoint 4 was not stalled  */
#define USBCORE_UEP4_EPSTALL_STALL            (USBCORE_UEP4_EPSTALL_STALL_Val << USBCORE_UEP4_EPSTALL_Pos) /* (USBCORE_UEP4) Endpoint 4 was stalled Position  */
#define USBCORE_UEP4_EPSTALL_NOT_STALL        (USBCORE_UEP4_EPSTALL_NOT_STALL_Val << USBCORE_UEP4_EPSTALL_Pos) /* (USBCORE_UEP4) Endpoint 4 was not stalled Position  */
#define USBCORE_UEP4_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP4) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP4_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP4_EPTXEN_Pos)           /* (USBCORE_UEP4) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP4_EPTXEN(value)            (USBCORE_UEP4_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP4_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP4 register */
#define   USBCORE_UEP4_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP4) Endpoint 4 transmit is enabled  */
#define   USBCORE_UEP4_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP4) Endpoint 4 transmit is disabled  */
#define USBCORE_UEP4_EPTXEN_ON                (USBCORE_UEP4_EPTXEN_ON_Val << USBCORE_UEP4_EPTXEN_Pos) /* (USBCORE_UEP4) Endpoint 4 transmit is enabled Position  */
#define USBCORE_UEP4_EPTXEN_OFF               (USBCORE_UEP4_EPTXEN_OFF_Val << USBCORE_UEP4_EPTXEN_Pos) /* (USBCORE_UEP4) Endpoint 4 transmit is disabled Position  */
#define USBCORE_UEP4_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP4) Endpoint Receive Enable bit Position */
#define USBCORE_UEP4_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP4_EPRXEN_Pos)           /* (USBCORE_UEP4) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP4_EPRXEN(value)            (USBCORE_UEP4_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP4_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP4 register */
#define   USBCORE_UEP4_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP4) Endpoint 4 receive is enabled  */
#define   USBCORE_UEP4_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP4) Endpoint 4 receive is disabled  */
#define USBCORE_UEP4_EPRXEN_ON                (USBCORE_UEP4_EPRXEN_ON_Val << USBCORE_UEP4_EPRXEN_Pos) /* (USBCORE_UEP4) Endpoint 4 receive is enabled Position  */
#define USBCORE_UEP4_EPRXEN_OFF               (USBCORE_UEP4_EPRXEN_OFF_Val << USBCORE_UEP4_EPRXEN_Pos) /* (USBCORE_UEP4) Endpoint 4 receive is disabled Position  */
#define USBCORE_UEP4_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP4) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP4_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP4_EPCONDIS_Pos)         /* (USBCORE_UEP4) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP4_EPCONDIS(value)          (USBCORE_UEP4_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP4_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP4 register */
#define   USBCORE_UEP4_EPCONDIS_DISABLE_4_Val _UINT32_(0x1)                                        /* (USBCORE_UEP4) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 4 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP4_EPCONDIS_ENABLE_4_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP4) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 4 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP4_EPCONDIS_DISABLE_4       (USBCORE_UEP4_EPCONDIS_DISABLE_4_Val << USBCORE_UEP4_EPCONDIS_Pos) /* (USBCORE_UEP4) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 4 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP4_EPCONDIS_ENABLE_4        (USBCORE_UEP4_EPCONDIS_ENABLE_4_Val << USBCORE_UEP4_EPCONDIS_Pos) /* (USBCORE_UEP4) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 4 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP4_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP4) Register Mask  */


/* -------- USBCORE_UEP4CLR : (USBCORE Offset: 0x344) (R/W 32)  -------- */
#define USBCORE_UEP4CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP4CLR)   Reset Value */

#define USBCORE_UEP4CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP4CLR) Register Mask  */


/* -------- USBCORE_UEP4SET : (USBCORE Offset: 0x348) (R/W 32)  -------- */
#define USBCORE_UEP4SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP4SET)   Reset Value */

#define USBCORE_UEP4SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP4SET) Register Mask  */


/* -------- USBCORE_UEP4INV : (USBCORE Offset: 0x34C) (R/W 32)  -------- */
#define USBCORE_UEP4INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP4INV)   Reset Value */

#define USBCORE_UEP4INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP4INV) Register Mask  */


/* -------- USBCORE_UEP5 : (USBCORE Offset: 0x350) (R/W 32) USB Endpoint Control Register 5 -------- */
#define USBCORE_UEP5_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP5) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP5_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP5_EPHSHK_Pos)           /* (USBCORE_UEP5) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP5_EPHSHK(value)            (USBCORE_UEP5_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP5_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP5 register */
#define   USBCORE_UEP5_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP5) Endpoint Handshake is enabled  */
#define   USBCORE_UEP5_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP5) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP5_EPHSHK_ON                (USBCORE_UEP5_EPHSHK_ON_Val << USBCORE_UEP5_EPHSHK_Pos) /* (USBCORE_UEP5) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP5_EPHSHK_OFF               (USBCORE_UEP5_EPHSHK_OFF_Val << USBCORE_UEP5_EPHSHK_Pos) /* (USBCORE_UEP5) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP5_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP5) Endpoint Stall Status bit Position */
#define USBCORE_UEP5_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP5_EPSTALL_Pos)          /* (USBCORE_UEP5) Endpoint Stall Status bit Mask */
#define USBCORE_UEP5_EPSTALL(value)           (USBCORE_UEP5_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP5_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP5 register */
#define   USBCORE_UEP5_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP5) Endpoint 5 was stalled  */
#define   USBCORE_UEP5_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP5) Endpoint 5 was not stalled  */
#define USBCORE_UEP5_EPSTALL_STALL            (USBCORE_UEP5_EPSTALL_STALL_Val << USBCORE_UEP5_EPSTALL_Pos) /* (USBCORE_UEP5) Endpoint 5 was stalled Position  */
#define USBCORE_UEP5_EPSTALL_NOT_STALL        (USBCORE_UEP5_EPSTALL_NOT_STALL_Val << USBCORE_UEP5_EPSTALL_Pos) /* (USBCORE_UEP5) Endpoint 5 was not stalled Position  */
#define USBCORE_UEP5_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP5) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP5_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP5_EPTXEN_Pos)           /* (USBCORE_UEP5) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP5_EPTXEN(value)            (USBCORE_UEP5_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP5_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP5 register */
#define   USBCORE_UEP5_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP5) Endpoint 5 transmit is enabled  */
#define   USBCORE_UEP5_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP5) Endpoint 5 transmit is disabled  */
#define USBCORE_UEP5_EPTXEN_ON                (USBCORE_UEP5_EPTXEN_ON_Val << USBCORE_UEP5_EPTXEN_Pos) /* (USBCORE_UEP5) Endpoint 5 transmit is enabled Position  */
#define USBCORE_UEP5_EPTXEN_OFF               (USBCORE_UEP5_EPTXEN_OFF_Val << USBCORE_UEP5_EPTXEN_Pos) /* (USBCORE_UEP5) Endpoint 5 transmit is disabled Position  */
#define USBCORE_UEP5_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP5) Endpoint Receive Enable bit Position */
#define USBCORE_UEP5_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP5_EPRXEN_Pos)           /* (USBCORE_UEP5) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP5_EPRXEN(value)            (USBCORE_UEP5_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP5_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP5 register */
#define   USBCORE_UEP5_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP5) Endpoint 5 receive is enabled  */
#define   USBCORE_UEP5_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP5) Endpoint 5 receive is disabled  */
#define USBCORE_UEP5_EPRXEN_ON                (USBCORE_UEP5_EPRXEN_ON_Val << USBCORE_UEP5_EPRXEN_Pos) /* (USBCORE_UEP5) Endpoint 5 receive is enabled Position  */
#define USBCORE_UEP5_EPRXEN_OFF               (USBCORE_UEP5_EPRXEN_OFF_Val << USBCORE_UEP5_EPRXEN_Pos) /* (USBCORE_UEP5) Endpoint 5 receive is disabled Position  */
#define USBCORE_UEP5_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP5) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP5_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP5_EPCONDIS_Pos)         /* (USBCORE_UEP5) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP5_EPCONDIS(value)          (USBCORE_UEP5_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP5_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP5 register */
#define   USBCORE_UEP5_EPCONDIS_DISABLE_5_Val _UINT32_(0x1)                                        /* (USBCORE_UEP5) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 5 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP5_EPCONDIS_ENABLE_5_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP5) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 5 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP5_EPCONDIS_DISABLE_5       (USBCORE_UEP5_EPCONDIS_DISABLE_5_Val << USBCORE_UEP5_EPCONDIS_Pos) /* (USBCORE_UEP5) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 5 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP5_EPCONDIS_ENABLE_5        (USBCORE_UEP5_EPCONDIS_ENABLE_5_Val << USBCORE_UEP5_EPCONDIS_Pos) /* (USBCORE_UEP5) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 5 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP5_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP5) Register Mask  */


/* -------- USBCORE_UEP5CLR : (USBCORE Offset: 0x354) (R/W 32)  -------- */
#define USBCORE_UEP5CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP5CLR)   Reset Value */

#define USBCORE_UEP5CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP5CLR) Register Mask  */


/* -------- USBCORE_UEP5SET : (USBCORE Offset: 0x358) (R/W 32)  -------- */
#define USBCORE_UEP5SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP5SET)   Reset Value */

#define USBCORE_UEP5SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP5SET) Register Mask  */


/* -------- USBCORE_UEP5INV : (USBCORE Offset: 0x35C) (R/W 32)  -------- */
#define USBCORE_UEP5INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP5INV)   Reset Value */

#define USBCORE_UEP5INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP5INV) Register Mask  */


/* -------- USBCORE_UEP6 : (USBCORE Offset: 0x360) (R/W 32) USB Endpoint Control Register 6 -------- */
#define USBCORE_UEP6_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP6) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP6_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP6_EPHSHK_Pos)           /* (USBCORE_UEP6) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP6_EPHSHK(value)            (USBCORE_UEP6_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP6_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP6 register */
#define   USBCORE_UEP6_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP6) Endpoint Handshake is enabled  */
#define   USBCORE_UEP6_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP6) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP6_EPHSHK_ON                (USBCORE_UEP6_EPHSHK_ON_Val << USBCORE_UEP6_EPHSHK_Pos) /* (USBCORE_UEP6) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP6_EPHSHK_OFF               (USBCORE_UEP6_EPHSHK_OFF_Val << USBCORE_UEP6_EPHSHK_Pos) /* (USBCORE_UEP6) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP6_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP6) Endpoint Stall Status bit Position */
#define USBCORE_UEP6_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP6_EPSTALL_Pos)          /* (USBCORE_UEP6) Endpoint Stall Status bit Mask */
#define USBCORE_UEP6_EPSTALL(value)           (USBCORE_UEP6_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP6_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP6 register */
#define   USBCORE_UEP6_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP6) Endpoint 6 was stalled  */
#define   USBCORE_UEP6_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP6) Endpoint 6 was not stalled  */
#define USBCORE_UEP6_EPSTALL_STALL            (USBCORE_UEP6_EPSTALL_STALL_Val << USBCORE_UEP6_EPSTALL_Pos) /* (USBCORE_UEP6) Endpoint 6 was stalled Position  */
#define USBCORE_UEP6_EPSTALL_NOT_STALL        (USBCORE_UEP6_EPSTALL_NOT_STALL_Val << USBCORE_UEP6_EPSTALL_Pos) /* (USBCORE_UEP6) Endpoint 6 was not stalled Position  */
#define USBCORE_UEP6_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP6) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP6_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP6_EPTXEN_Pos)           /* (USBCORE_UEP6) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP6_EPTXEN(value)            (USBCORE_UEP6_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP6_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP6 register */
#define   USBCORE_UEP6_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP6) Endpoint n transmit is enabled  */
#define   USBCORE_UEP6_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP6) Endpoint n transmit is disabled  */
#define USBCORE_UEP6_EPTXEN_ON                (USBCORE_UEP6_EPTXEN_ON_Val << USBCORE_UEP6_EPTXEN_Pos) /* (USBCORE_UEP6) Endpoint n transmit is enabled Position  */
#define USBCORE_UEP6_EPTXEN_OFF               (USBCORE_UEP6_EPTXEN_OFF_Val << USBCORE_UEP6_EPTXEN_Pos) /* (USBCORE_UEP6) Endpoint n transmit is disabled Position  */
#define USBCORE_UEP6_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP6) Endpoint Receive Enable bit Position */
#define USBCORE_UEP6_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP6_EPRXEN_Pos)           /* (USBCORE_UEP6) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP6_EPRXEN(value)            (USBCORE_UEP6_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP6_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP6 register */
#define   USBCORE_UEP6_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP6) Endpoint 6 receive is enabled  */
#define   USBCORE_UEP6_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP6) Endpoint 6 receive is disabled  */
#define USBCORE_UEP6_EPRXEN_ON                (USBCORE_UEP6_EPRXEN_ON_Val << USBCORE_UEP6_EPRXEN_Pos) /* (USBCORE_UEP6) Endpoint 6 receive is enabled Position  */
#define USBCORE_UEP6_EPRXEN_OFF               (USBCORE_UEP6_EPRXEN_OFF_Val << USBCORE_UEP6_EPRXEN_Pos) /* (USBCORE_UEP6) Endpoint 6 receive is disabled Position  */
#define USBCORE_UEP6_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP6) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP6_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP6_EPCONDIS_Pos)         /* (USBCORE_UEP6) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP6_EPCONDIS(value)          (USBCORE_UEP6_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP6_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP6 register */
#define   USBCORE_UEP6_EPCONDIS_DISABLE_6_Val _UINT32_(0x1)                                        /* (USBCORE_UEP6) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 6 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP6_EPCONDIS_ENABLE_6_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP6) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 6 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP6_EPCONDIS_DISABLE_6       (USBCORE_UEP6_EPCONDIS_DISABLE_6_Val << USBCORE_UEP6_EPCONDIS_Pos) /* (USBCORE_UEP6) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 6 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP6_EPCONDIS_ENABLE_6        (USBCORE_UEP6_EPCONDIS_ENABLE_6_Val << USBCORE_UEP6_EPCONDIS_Pos) /* (USBCORE_UEP6) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 6 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP6_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP6) Register Mask  */


/* -------- USBCORE_UEP6CLR : (USBCORE Offset: 0x364) (R/W 32)  -------- */
#define USBCORE_UEP6CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP6CLR)   Reset Value */

#define USBCORE_UEP6CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP6CLR) Register Mask  */


/* -------- USBCORE_UEP6SET : (USBCORE Offset: 0x368) (R/W 32)  -------- */
#define USBCORE_UEP6SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP6SET)   Reset Value */

#define USBCORE_UEP6SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP6SET) Register Mask  */


/* -------- USBCORE_UEP6INV : (USBCORE Offset: 0x36C) (R/W 32)  -------- */
#define USBCORE_UEP6INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP6INV)   Reset Value */

#define USBCORE_UEP6INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP6INV) Register Mask  */


/* -------- USBCORE_UEP7 : (USBCORE Offset: 0x370) (R/W 32) USB Endpoint Control Register 7 -------- */
#define USBCORE_UEP7_EPHSHK_Pos               _UINT32_(0)                                          /* (USBCORE_UEP7) Endpoint Handshake Enable bit Position */
#define USBCORE_UEP7_EPHSHK_Msk               (_UINT32_(0x1) << USBCORE_UEP7_EPHSHK_Pos)           /* (USBCORE_UEP7) Endpoint Handshake Enable bit Mask */
#define USBCORE_UEP7_EPHSHK(value)            (USBCORE_UEP7_EPHSHK_Msk & (_UINT32_(value) << USBCORE_UEP7_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_UEP7 register */
#define   USBCORE_UEP7_EPHSHK_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP7) Endpoint Handshake is enabled  */
#define   USBCORE_UEP7_EPHSHK_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP7) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_UEP7_EPHSHK_ON                (USBCORE_UEP7_EPHSHK_ON_Val << USBCORE_UEP7_EPHSHK_Pos) /* (USBCORE_UEP7) Endpoint Handshake is enabled Position  */
#define USBCORE_UEP7_EPHSHK_OFF               (USBCORE_UEP7_EPHSHK_OFF_Val << USBCORE_UEP7_EPHSHK_Pos) /* (USBCORE_UEP7) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_UEP7_EPSTALL_Pos              _UINT32_(1)                                          /* (USBCORE_UEP7) Endpoint Stall Status bit Position */
#define USBCORE_UEP7_EPSTALL_Msk              (_UINT32_(0x1) << USBCORE_UEP7_EPSTALL_Pos)          /* (USBCORE_UEP7) Endpoint Stall Status bit Mask */
#define USBCORE_UEP7_EPSTALL(value)           (USBCORE_UEP7_EPSTALL_Msk & (_UINT32_(value) << USBCORE_UEP7_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_UEP7 register */
#define   USBCORE_UEP7_EPSTALL_STALL_Val      _UINT32_(0x1)                                        /* (USBCORE_UEP7) Endpoint 7 was stalled  */
#define   USBCORE_UEP7_EPSTALL_NOT_STALL_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP7) Endpoint 7 was not stalled  */
#define USBCORE_UEP7_EPSTALL_STALL            (USBCORE_UEP7_EPSTALL_STALL_Val << USBCORE_UEP7_EPSTALL_Pos) /* (USBCORE_UEP7) Endpoint 7 was stalled Position  */
#define USBCORE_UEP7_EPSTALL_NOT_STALL        (USBCORE_UEP7_EPSTALL_NOT_STALL_Val << USBCORE_UEP7_EPSTALL_Pos) /* (USBCORE_UEP7) Endpoint 7 was not stalled Position  */
#define USBCORE_UEP7_EPTXEN_Pos               _UINT32_(2)                                          /* (USBCORE_UEP7) Endpoint Transmit Enable bit Position */
#define USBCORE_UEP7_EPTXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP7_EPTXEN_Pos)           /* (USBCORE_UEP7) Endpoint Transmit Enable bit Mask */
#define USBCORE_UEP7_EPTXEN(value)            (USBCORE_UEP7_EPTXEN_Msk & (_UINT32_(value) << USBCORE_UEP7_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_UEP7 register */
#define   USBCORE_UEP7_EPTXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP7) Endpoint 7 transmit is enabled  */
#define   USBCORE_UEP7_EPTXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP7) Endpoint 7 transmit is disabled  */
#define USBCORE_UEP7_EPTXEN_ON                (USBCORE_UEP7_EPTXEN_ON_Val << USBCORE_UEP7_EPTXEN_Pos) /* (USBCORE_UEP7) Endpoint 7 transmit is enabled Position  */
#define USBCORE_UEP7_EPTXEN_OFF               (USBCORE_UEP7_EPTXEN_OFF_Val << USBCORE_UEP7_EPTXEN_Pos) /* (USBCORE_UEP7) Endpoint 7 transmit is disabled Position  */
#define USBCORE_UEP7_EPRXEN_Pos               _UINT32_(3)                                          /* (USBCORE_UEP7) Endpoint Receive Enable bit Position */
#define USBCORE_UEP7_EPRXEN_Msk               (_UINT32_(0x1) << USBCORE_UEP7_EPRXEN_Pos)           /* (USBCORE_UEP7) Endpoint Receive Enable bit Mask */
#define USBCORE_UEP7_EPRXEN(value)            (USBCORE_UEP7_EPRXEN_Msk & (_UINT32_(value) << USBCORE_UEP7_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_UEP7 register */
#define   USBCORE_UEP7_EPRXEN_ON_Val          _UINT32_(0x1)                                        /* (USBCORE_UEP7) Endpoint 7 receive is enabled  */
#define   USBCORE_UEP7_EPRXEN_OFF_Val         _UINT32_(0x0)                                        /* (USBCORE_UEP7) Endpoint 7 receive is disabled  */
#define USBCORE_UEP7_EPRXEN_ON                (USBCORE_UEP7_EPRXEN_ON_Val << USBCORE_UEP7_EPRXEN_Pos) /* (USBCORE_UEP7) Endpoint 7 receive is enabled Position  */
#define USBCORE_UEP7_EPRXEN_OFF               (USBCORE_UEP7_EPRXEN_OFF_Val << USBCORE_UEP7_EPRXEN_Pos) /* (USBCORE_UEP7) Endpoint 7 receive is disabled Position  */
#define USBCORE_UEP7_EPCONDIS_Pos             _UINT32_(4)                                          /* (USBCORE_UEP7) Bidirectional Endpoint Control bit Position */
#define USBCORE_UEP7_EPCONDIS_Msk             (_UINT32_(0x1) << USBCORE_UEP7_EPCONDIS_Pos)         /* (USBCORE_UEP7) Bidirectional Endpoint Control bit Mask */
#define USBCORE_UEP7_EPCONDIS(value)          (USBCORE_UEP7_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_UEP7_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_UEP7 register */
#define   USBCORE_UEP7_EPCONDIS_DISABLE_7_Val _UINT32_(0x1)                                        /* (USBCORE_UEP7) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 7 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_UEP7_EPCONDIS_ENABLE_7_Val  _UINT32_(0x0)                                        /* (USBCORE_UEP7) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 7 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_UEP7_EPCONDIS_DISABLE_7       (USBCORE_UEP7_EPCONDIS_DISABLE_7_Val << USBCORE_UEP7_EPCONDIS_Pos) /* (USBCORE_UEP7) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 7 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_UEP7_EPCONDIS_ENABLE_7        (USBCORE_UEP7_EPCONDIS_ENABLE_7_Val << USBCORE_UEP7_EPCONDIS_Pos) /* (USBCORE_UEP7) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 7 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_UEP7_Msk                      _UINT32_(0x0000001F)                                 /* (USBCORE_UEP7) Register Mask  */


/* -------- USBCORE_UEP7CLR : (USBCORE Offset: 0x374) (R/W 32)  -------- */
#define USBCORE_UEP7CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP7CLR)   Reset Value */

#define USBCORE_UEP7CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP7CLR) Register Mask  */


/* -------- USBCORE_UEP7SET : (USBCORE Offset: 0x378) (R/W 32)  -------- */
#define USBCORE_UEP7SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP7SET)   Reset Value */

#define USBCORE_UEP7SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP7SET) Register Mask  */


/* -------- USBCORE_UEP7INV : (USBCORE Offset: 0x37C) (R/W 32)  -------- */
#define USBCORE_UEP7INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP7INV)   Reset Value */

#define USBCORE_UEP7INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP7INV) Register Mask  */


/* -------- USBCORE_U1EP8 : (USBCORE Offset: 0x380) (R/W 32) USB Endpoint Control Register 8 -------- */
#define USBCORE_U1EP8_EPHSHK_Pos              _UINT32_(0)                                          /* (USBCORE_U1EP8) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP8_EPHSHK_Msk              (_UINT32_(0x1) << USBCORE_U1EP8_EPHSHK_Pos)          /* (USBCORE_U1EP8) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP8_EPHSHK(value)           (USBCORE_U1EP8_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP8_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP8 register */
#define   USBCORE_U1EP8_EPHSHK_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP8) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP8_EPHSHK_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP8) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP8_EPHSHK_ON               (USBCORE_U1EP8_EPHSHK_ON_Val << USBCORE_U1EP8_EPHSHK_Pos) /* (USBCORE_U1EP8) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP8_EPHSHK_OFF              (USBCORE_U1EP8_EPHSHK_OFF_Val << USBCORE_U1EP8_EPHSHK_Pos) /* (USBCORE_U1EP8) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP8_EPSTALL_Pos             _UINT32_(1)                                          /* (USBCORE_U1EP8) Endpoint Stall Status bit Position */
#define USBCORE_U1EP8_EPSTALL_Msk             (_UINT32_(0x1) << USBCORE_U1EP8_EPSTALL_Pos)         /* (USBCORE_U1EP8) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP8_EPSTALL(value)          (USBCORE_U1EP8_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP8_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP8 register */
#define   USBCORE_U1EP8_EPSTALL_STALL_Val     _UINT32_(0x1)                                        /* (USBCORE_U1EP8) Endpoint 8 was stalled  */
#define   USBCORE_U1EP8_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP8) Endpoint 8 was not stalled  */
#define USBCORE_U1EP8_EPSTALL_STALL           (USBCORE_U1EP8_EPSTALL_STALL_Val << USBCORE_U1EP8_EPSTALL_Pos) /* (USBCORE_U1EP8) Endpoint 8 was stalled Position  */
#define USBCORE_U1EP8_EPSTALL_NOT_STALL       (USBCORE_U1EP8_EPSTALL_NOT_STALL_Val << USBCORE_U1EP8_EPSTALL_Pos) /* (USBCORE_U1EP8) Endpoint 8 was not stalled Position  */
#define USBCORE_U1EP8_EPTXEN_Pos              _UINT32_(2)                                          /* (USBCORE_U1EP8) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP8_EPTXEN_Msk              (_UINT32_(0x1) << USBCORE_U1EP8_EPTXEN_Pos)          /* (USBCORE_U1EP8) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP8_EPTXEN(value)           (USBCORE_U1EP8_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP8_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP8 register */
#define   USBCORE_U1EP8_EPTXEN_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP8) Endpoint 8 transmit is enabled  */
#define   USBCORE_U1EP8_EPTXEN_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP8) Endpoint 8 transmit is disabled  */
#define USBCORE_U1EP8_EPTXEN_ON               (USBCORE_U1EP8_EPTXEN_ON_Val << USBCORE_U1EP8_EPTXEN_Pos) /* (USBCORE_U1EP8) Endpoint 8 transmit is enabled Position  */
#define USBCORE_U1EP8_EPTXEN_OFF              (USBCORE_U1EP8_EPTXEN_OFF_Val << USBCORE_U1EP8_EPTXEN_Pos) /* (USBCORE_U1EP8) Endpoint 8 transmit is disabled Position  */
#define USBCORE_U1EP8_EPRXEN_Pos              _UINT32_(3)                                          /* (USBCORE_U1EP8) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP8_EPRXEN_Msk              (_UINT32_(0x1) << USBCORE_U1EP8_EPRXEN_Pos)          /* (USBCORE_U1EP8) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP8_EPRXEN(value)           (USBCORE_U1EP8_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP8_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP8 register */
#define   USBCORE_U1EP8_EPRXEN_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP8) Endpoint 8 receive is enabled  */
#define   USBCORE_U1EP8_EPRXEN_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP8) Endpoint 8 receive is disabled  */
#define USBCORE_U1EP8_EPRXEN_ON               (USBCORE_U1EP8_EPRXEN_ON_Val << USBCORE_U1EP8_EPRXEN_Pos) /* (USBCORE_U1EP8) Endpoint 8 receive is enabled Position  */
#define USBCORE_U1EP8_EPRXEN_OFF              (USBCORE_U1EP8_EPRXEN_OFF_Val << USBCORE_U1EP8_EPRXEN_Pos) /* (USBCORE_U1EP8) Endpoint 8 receive is disabled Position  */
#define USBCORE_U1EP8_EPCONDIS_Pos            _UINT32_(4)                                          /* (USBCORE_U1EP8) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP8_EPCONDIS_Msk            (_UINT32_(0x1) << USBCORE_U1EP8_EPCONDIS_Pos)        /* (USBCORE_U1EP8) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP8_EPCONDIS(value)         (USBCORE_U1EP8_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP8_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP8 register */
#define   USBCORE_U1EP8_EPCONDIS_DISABLE_8_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP8) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 8 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP8_EPCONDIS_ENABLE_8_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP8) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 8 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP8_EPCONDIS_DISABLE_8      (USBCORE_U1EP8_EPCONDIS_DISABLE_8_Val << USBCORE_U1EP8_EPCONDIS_Pos) /* (USBCORE_U1EP8) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 8 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP8_EPCONDIS_ENABLE_8       (USBCORE_U1EP8_EPCONDIS_ENABLE_8_Val << USBCORE_U1EP8_EPCONDIS_Pos) /* (USBCORE_U1EP8) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 8 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP8_Msk                     _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP8) Register Mask  */


/* -------- USBCORE_UEP8CLR : (USBCORE Offset: 0x384) (R/W 32)  -------- */
#define USBCORE_UEP8CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP8CLR)   Reset Value */

#define USBCORE_UEP8CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP8CLR) Register Mask  */


/* -------- USBCORE_UEP8SET : (USBCORE Offset: 0x388) (R/W 32)  -------- */
#define USBCORE_UEP8SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP8SET)   Reset Value */

#define USBCORE_UEP8SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP8SET) Register Mask  */


/* -------- USBCORE_UEP8INV : (USBCORE Offset: 0x38C) (R/W 32)  -------- */
#define USBCORE_UEP8INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP8INV)   Reset Value */

#define USBCORE_UEP8INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP8INV) Register Mask  */


/* -------- USBCORE_U1EP9 : (USBCORE Offset: 0x390) (R/W 32) USB Endpoint Control Register 9 -------- */
#define USBCORE_U1EP9_EPHSHK_Pos              _UINT32_(0)                                          /* (USBCORE_U1EP9) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP9_EPHSHK_Msk              (_UINT32_(0x1) << USBCORE_U1EP9_EPHSHK_Pos)          /* (USBCORE_U1EP9) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP9_EPHSHK(value)           (USBCORE_U1EP9_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP9_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP9 register */
#define   USBCORE_U1EP9_EPHSHK_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP9) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP9_EPHSHK_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP9) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP9_EPHSHK_ON               (USBCORE_U1EP9_EPHSHK_ON_Val << USBCORE_U1EP9_EPHSHK_Pos) /* (USBCORE_U1EP9) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP9_EPHSHK_OFF              (USBCORE_U1EP9_EPHSHK_OFF_Val << USBCORE_U1EP9_EPHSHK_Pos) /* (USBCORE_U1EP9) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP9_EPSTALL_Pos             _UINT32_(1)                                          /* (USBCORE_U1EP9) Endpoint Stall Status bit Position */
#define USBCORE_U1EP9_EPSTALL_Msk             (_UINT32_(0x1) << USBCORE_U1EP9_EPSTALL_Pos)         /* (USBCORE_U1EP9) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP9_EPSTALL(value)          (USBCORE_U1EP9_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP9_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP9 register */
#define   USBCORE_U1EP9_EPSTALL_STALL_Val     _UINT32_(0x1)                                        /* (USBCORE_U1EP9) Endpoint 9 was stalled  */
#define   USBCORE_U1EP9_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP9) Endpoint 9 was not stalled  */
#define USBCORE_U1EP9_EPSTALL_STALL           (USBCORE_U1EP9_EPSTALL_STALL_Val << USBCORE_U1EP9_EPSTALL_Pos) /* (USBCORE_U1EP9) Endpoint 9 was stalled Position  */
#define USBCORE_U1EP9_EPSTALL_NOT_STALL       (USBCORE_U1EP9_EPSTALL_NOT_STALL_Val << USBCORE_U1EP9_EPSTALL_Pos) /* (USBCORE_U1EP9) Endpoint 9 was not stalled Position  */
#define USBCORE_U1EP9_EPTXEN_Pos              _UINT32_(2)                                          /* (USBCORE_U1EP9) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP9_EPTXEN_Msk              (_UINT32_(0x1) << USBCORE_U1EP9_EPTXEN_Pos)          /* (USBCORE_U1EP9) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP9_EPTXEN(value)           (USBCORE_U1EP9_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP9_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP9 register */
#define   USBCORE_U1EP9_EPTXEN_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP9) Endpoint 9 transmit is enabled  */
#define   USBCORE_U1EP9_EPTXEN_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP9) Endpoint 9 transmit is disabled  */
#define USBCORE_U1EP9_EPTXEN_ON               (USBCORE_U1EP9_EPTXEN_ON_Val << USBCORE_U1EP9_EPTXEN_Pos) /* (USBCORE_U1EP9) Endpoint 9 transmit is enabled Position  */
#define USBCORE_U1EP9_EPTXEN_OFF              (USBCORE_U1EP9_EPTXEN_OFF_Val << USBCORE_U1EP9_EPTXEN_Pos) /* (USBCORE_U1EP9) Endpoint 9 transmit is disabled Position  */
#define USBCORE_U1EP9_EPRXEN_Pos              _UINT32_(3)                                          /* (USBCORE_U1EP9) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP9_EPRXEN_Msk              (_UINT32_(0x1) << USBCORE_U1EP9_EPRXEN_Pos)          /* (USBCORE_U1EP9) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP9_EPRXEN(value)           (USBCORE_U1EP9_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP9_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP9 register */
#define   USBCORE_U1EP9_EPRXEN_ON_Val         _UINT32_(0x1)                                        /* (USBCORE_U1EP9) Endpoint 9 receive is enabled  */
#define   USBCORE_U1EP9_EPRXEN_OFF_Val        _UINT32_(0x0)                                        /* (USBCORE_U1EP9) Endpoint 9 receive is disabled  */
#define USBCORE_U1EP9_EPRXEN_ON               (USBCORE_U1EP9_EPRXEN_ON_Val << USBCORE_U1EP9_EPRXEN_Pos) /* (USBCORE_U1EP9) Endpoint 9 receive is enabled Position  */
#define USBCORE_U1EP9_EPRXEN_OFF              (USBCORE_U1EP9_EPRXEN_OFF_Val << USBCORE_U1EP9_EPRXEN_Pos) /* (USBCORE_U1EP9) Endpoint 9 receive is disabled Position  */
#define USBCORE_U1EP9_EPCONDIS_Pos            _UINT32_(4)                                          /* (USBCORE_U1EP9) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP9_EPCONDIS_Msk            (_UINT32_(0x1) << USBCORE_U1EP9_EPCONDIS_Pos)        /* (USBCORE_U1EP9) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP9_EPCONDIS(value)         (USBCORE_U1EP9_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP9_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP9 register */
#define   USBCORE_U1EP9_EPCONDIS_DISABLE_9_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP9) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 9 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP9_EPCONDIS_ENABLE_9_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP9) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 9 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP9_EPCONDIS_DISABLE_9      (USBCORE_U1EP9_EPCONDIS_DISABLE_9_Val << USBCORE_U1EP9_EPCONDIS_Pos) /* (USBCORE_U1EP9) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 9 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP9_EPCONDIS_ENABLE_9       (USBCORE_U1EP9_EPCONDIS_ENABLE_9_Val << USBCORE_U1EP9_EPCONDIS_Pos) /* (USBCORE_U1EP9) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 9 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP9_Msk                     _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP9) Register Mask  */


/* -------- USBCORE_UEP9CLR : (USBCORE Offset: 0x394) (R/W 32)  -------- */
#define USBCORE_UEP9CLR_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP9CLR)   Reset Value */

#define USBCORE_UEP9CLR_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP9CLR) Register Mask  */


/* -------- USBCORE_UEP9SET : (USBCORE Offset: 0x398) (R/W 32)  -------- */
#define USBCORE_UEP9SET_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP9SET)   Reset Value */

#define USBCORE_UEP9SET_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP9SET) Register Mask  */


/* -------- USBCORE_UEP9INV : (USBCORE Offset: 0x39C) (R/W 32)  -------- */
#define USBCORE_UEP9INV_RESETVALUE            _UINT32_(0x00)                                       /*  (USBCORE_UEP9INV)   Reset Value */

#define USBCORE_UEP9INV_Msk                   _UINT32_(0x00000000)                                 /* (USBCORE_UEP9INV) Register Mask  */


/* -------- USBCORE_U1EP10 : (USBCORE Offset: 0x3A0) (R/W 32) USB Endpoint Control Register 10 -------- */
#define USBCORE_U1EP10_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP10) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP10_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP10_EPHSHK_Pos)         /* (USBCORE_U1EP10) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP10_EPHSHK(value)          (USBCORE_U1EP10_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP10_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP10 register */
#define   USBCORE_U1EP10_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP10) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP10_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP10) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP10_EPHSHK_ON              (USBCORE_U1EP10_EPHSHK_ON_Val << USBCORE_U1EP10_EPHSHK_Pos) /* (USBCORE_U1EP10) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP10_EPHSHK_OFF             (USBCORE_U1EP10_EPHSHK_OFF_Val << USBCORE_U1EP10_EPHSHK_Pos) /* (USBCORE_U1EP10) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP10_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP10) Endpoint Stall Status bit Position */
#define USBCORE_U1EP10_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP10_EPSTALL_Pos)        /* (USBCORE_U1EP10) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP10_EPSTALL(value)         (USBCORE_U1EP10_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP10_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP10 register */
#define   USBCORE_U1EP10_EPSTALL_ON_Val       _UINT32_(0x1)                                        /* (USBCORE_U1EP10) Endpoint 10 was stalled  */
#define   USBCORE_U1EP10_EPSTALL_OFF_Val      _UINT32_(0x0)                                        /* (USBCORE_U1EP10) Endpoint 10 was not stalled  */
#define USBCORE_U1EP10_EPSTALL_ON             (USBCORE_U1EP10_EPSTALL_ON_Val << USBCORE_U1EP10_EPSTALL_Pos) /* (USBCORE_U1EP10) Endpoint 10 was stalled Position  */
#define USBCORE_U1EP10_EPSTALL_OFF            (USBCORE_U1EP10_EPSTALL_OFF_Val << USBCORE_U1EP10_EPSTALL_Pos) /* (USBCORE_U1EP10) Endpoint 10 was not stalled Position  */
#define USBCORE_U1EP10_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP10) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP10_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP10_EPTXEN_Pos)         /* (USBCORE_U1EP10) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP10_EPTXEN(value)          (USBCORE_U1EP10_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP10_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP10 register */
#define   USBCORE_U1EP10_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP10) Endpoint 10 transmit is enabled  */
#define   USBCORE_U1EP10_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP10) Endpoint 10 transmit is disabled  */
#define USBCORE_U1EP10_EPTXEN_ON              (USBCORE_U1EP10_EPTXEN_ON_Val << USBCORE_U1EP10_EPTXEN_Pos) /* (USBCORE_U1EP10) Endpoint 10 transmit is enabled Position  */
#define USBCORE_U1EP10_EPTXEN_OFF             (USBCORE_U1EP10_EPTXEN_OFF_Val << USBCORE_U1EP10_EPTXEN_Pos) /* (USBCORE_U1EP10) Endpoint 10 transmit is disabled Position  */
#define USBCORE_U1EP10_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP10) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP10_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP10_EPRXEN_Pos)         /* (USBCORE_U1EP10) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP10_EPRXEN(value)          (USBCORE_U1EP10_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP10_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP10 register */
#define   USBCORE_U1EP10_EPRXEN_ENABLE_10_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP10) Endpoint 10 receive is enabled  */
#define   USBCORE_U1EP10_EPRXEN_DISABLE_10_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP10) Endpoint 10 receive is disabled  */
#define USBCORE_U1EP10_EPRXEN_ENABLE_10       (USBCORE_U1EP10_EPRXEN_ENABLE_10_Val << USBCORE_U1EP10_EPRXEN_Pos) /* (USBCORE_U1EP10) Endpoint 10 receive is enabled Position  */
#define USBCORE_U1EP10_EPRXEN_DISABLE_10      (USBCORE_U1EP10_EPRXEN_DISABLE_10_Val << USBCORE_U1EP10_EPRXEN_Pos) /* (USBCORE_U1EP10) Endpoint 10 receive is disabled Position  */
#define USBCORE_U1EP10_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP10) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP10_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP10_EPCONDIS_Pos)       /* (USBCORE_U1EP10) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP10_EPCONDIS(value)        (USBCORE_U1EP10_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP10_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP10 register */
#define   USBCORE_U1EP10_EPCONDIS_DISABLE_10_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP10) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 10 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP10_EPCONDIS_ENABLE_10_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP10) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 10 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP10_EPCONDIS_DISABLE_10    (USBCORE_U1EP10_EPCONDIS_DISABLE_10_Val << USBCORE_U1EP10_EPCONDIS_Pos) /* (USBCORE_U1EP10) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 10 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP10_EPCONDIS_ENABLE_10     (USBCORE_U1EP10_EPCONDIS_ENABLE_10_Val << USBCORE_U1EP10_EPCONDIS_Pos) /* (USBCORE_U1EP10) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 10 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP10_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP10) Register Mask  */


/* -------- USBCORE_UEP10CLR : (USBCORE Offset: 0x3A4) (R/W 32)  -------- */
#define USBCORE_UEP10CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP10CLR)   Reset Value */

#define USBCORE_UEP10CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP10CLR) Register Mask  */


/* -------- USBCORE_UEP10SET : (USBCORE Offset: 0x3A8) (R/W 32)  -------- */
#define USBCORE_UEP10SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP10SET)   Reset Value */

#define USBCORE_UEP10SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP10SET) Register Mask  */


/* -------- USBCORE_UEP10INV : (USBCORE Offset: 0x3AC) (R/W 32)  -------- */
#define USBCORE_UEP10INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP10INV)   Reset Value */

#define USBCORE_UEP10INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP10INV) Register Mask  */


/* -------- USBCORE_U1EP11 : (USBCORE Offset: 0x3B0) (R/W 32) USB Endpoint Control Register 11 -------- */
#define USBCORE_U1EP11_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP11) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP11_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP11_EPHSHK_Pos)         /* (USBCORE_U1EP11) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP11_EPHSHK(value)          (USBCORE_U1EP11_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP11_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP11 register */
#define   USBCORE_U1EP11_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP11) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP11_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP11) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP11_EPHSHK_ON              (USBCORE_U1EP11_EPHSHK_ON_Val << USBCORE_U1EP11_EPHSHK_Pos) /* (USBCORE_U1EP11) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP11_EPHSHK_OFF             (USBCORE_U1EP11_EPHSHK_OFF_Val << USBCORE_U1EP11_EPHSHK_Pos) /* (USBCORE_U1EP11) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP11_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP11) Endpoint Stall Status bit Position */
#define USBCORE_U1EP11_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP11_EPSTALL_Pos)        /* (USBCORE_U1EP11) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP11_EPSTALL(value)         (USBCORE_U1EP11_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP11_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP11 register */
#define   USBCORE_U1EP11_EPSTALL_STALL_Val    _UINT32_(0x1)                                        /* (USBCORE_U1EP11) Endpoint 11 was stalled  */
#define   USBCORE_U1EP11_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP11) Endpoint 11 was not stalled  */
#define USBCORE_U1EP11_EPSTALL_STALL          (USBCORE_U1EP11_EPSTALL_STALL_Val << USBCORE_U1EP11_EPSTALL_Pos) /* (USBCORE_U1EP11) Endpoint 11 was stalled Position  */
#define USBCORE_U1EP11_EPSTALL_NOT_STALL      (USBCORE_U1EP11_EPSTALL_NOT_STALL_Val << USBCORE_U1EP11_EPSTALL_Pos) /* (USBCORE_U1EP11) Endpoint 11 was not stalled Position  */
#define USBCORE_U1EP11_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP11) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP11_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP11_EPTXEN_Pos)         /* (USBCORE_U1EP11) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP11_EPTXEN(value)          (USBCORE_U1EP11_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP11_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP11 register */
#define   USBCORE_U1EP11_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP11) Endpoint 11 transmit is enabled  */
#define   USBCORE_U1EP11_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP11) Endpoint 11 transmit is disabled  */
#define USBCORE_U1EP11_EPTXEN_ON              (USBCORE_U1EP11_EPTXEN_ON_Val << USBCORE_U1EP11_EPTXEN_Pos) /* (USBCORE_U1EP11) Endpoint 11 transmit is enabled Position  */
#define USBCORE_U1EP11_EPTXEN_OFF             (USBCORE_U1EP11_EPTXEN_OFF_Val << USBCORE_U1EP11_EPTXEN_Pos) /* (USBCORE_U1EP11) Endpoint 11 transmit is disabled Position  */
#define USBCORE_U1EP11_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP11) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP11_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP11_EPRXEN_Pos)         /* (USBCORE_U1EP11) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP11_EPRXEN(value)          (USBCORE_U1EP11_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP11_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP11 register */
#define   USBCORE_U1EP11_EPRXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP11) Endpoint 11 receive is enabled  */
#define   USBCORE_U1EP11_EPRXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP11) Endpoint 11 receive is disabled  */
#define USBCORE_U1EP11_EPRXEN_ON              (USBCORE_U1EP11_EPRXEN_ON_Val << USBCORE_U1EP11_EPRXEN_Pos) /* (USBCORE_U1EP11) Endpoint 11 receive is enabled Position  */
#define USBCORE_U1EP11_EPRXEN_OFF             (USBCORE_U1EP11_EPRXEN_OFF_Val << USBCORE_U1EP11_EPRXEN_Pos) /* (USBCORE_U1EP11) Endpoint 11 receive is disabled Position  */
#define USBCORE_U1EP11_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP11) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP11_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP11_EPCONDIS_Pos)       /* (USBCORE_U1EP11) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP11_EPCONDIS(value)        (USBCORE_U1EP11_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP11_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP11 register */
#define   USBCORE_U1EP11_EPCONDIS_DISABLE_11_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP11) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 11 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP11_EPCONDIS_ENABLE_11_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP11) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 11 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP11_EPCONDIS_DISABLE_11    (USBCORE_U1EP11_EPCONDIS_DISABLE_11_Val << USBCORE_U1EP11_EPCONDIS_Pos) /* (USBCORE_U1EP11) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 11 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP11_EPCONDIS_ENABLE_11     (USBCORE_U1EP11_EPCONDIS_ENABLE_11_Val << USBCORE_U1EP11_EPCONDIS_Pos) /* (USBCORE_U1EP11) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 11 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP11_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP11) Register Mask  */


/* -------- USBCORE_UEP11CLR : (USBCORE Offset: 0x3B4) (R/W 32)  -------- */
#define USBCORE_UEP11CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP11CLR)   Reset Value */

#define USBCORE_UEP11CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP11CLR) Register Mask  */


/* -------- USBCORE_UEP11SET : (USBCORE Offset: 0x3B8) (R/W 32)  -------- */
#define USBCORE_UEP11SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP11SET)   Reset Value */

#define USBCORE_UEP11SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP11SET) Register Mask  */


/* -------- USBCORE_UEP11INV : (USBCORE Offset: 0x3BC) (R/W 32)  -------- */
#define USBCORE_UEP11INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP11INV)   Reset Value */

#define USBCORE_UEP11INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP11INV) Register Mask  */


/* -------- USBCORE_U1EP12 : (USBCORE Offset: 0x3C0) (R/W 32) USB Endpoint Control Register 12 -------- */
#define USBCORE_U1EP12_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP12) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP12_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP12_EPHSHK_Pos)         /* (USBCORE_U1EP12) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP12_EPHSHK(value)          (USBCORE_U1EP12_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP12_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP12 register */
#define   USBCORE_U1EP12_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP12) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP12_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP12) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP12_EPHSHK_ON              (USBCORE_U1EP12_EPHSHK_ON_Val << USBCORE_U1EP12_EPHSHK_Pos) /* (USBCORE_U1EP12) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP12_EPHSHK_OFF             (USBCORE_U1EP12_EPHSHK_OFF_Val << USBCORE_U1EP12_EPHSHK_Pos) /* (USBCORE_U1EP12) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP12_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP12) Endpoint Stall Status bit Position */
#define USBCORE_U1EP12_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP12_EPSTALL_Pos)        /* (USBCORE_U1EP12) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP12_EPSTALL(value)         (USBCORE_U1EP12_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP12_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP12 register */
#define   USBCORE_U1EP12_EPSTALL_STALL_Val    _UINT32_(0x1)                                        /* (USBCORE_U1EP12) Endpoint 12 was stalled  */
#define   USBCORE_U1EP12_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP12) Endpoint 12 was not stalled  */
#define USBCORE_U1EP12_EPSTALL_STALL          (USBCORE_U1EP12_EPSTALL_STALL_Val << USBCORE_U1EP12_EPSTALL_Pos) /* (USBCORE_U1EP12) Endpoint 12 was stalled Position  */
#define USBCORE_U1EP12_EPSTALL_NOT_STALL      (USBCORE_U1EP12_EPSTALL_NOT_STALL_Val << USBCORE_U1EP12_EPSTALL_Pos) /* (USBCORE_U1EP12) Endpoint 12 was not stalled Position  */
#define USBCORE_U1EP12_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP12) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP12_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP12_EPTXEN_Pos)         /* (USBCORE_U1EP12) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP12_EPTXEN(value)          (USBCORE_U1EP12_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP12_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP12 register */
#define   USBCORE_U1EP12_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP12) Endpoint 12 transmit is enabled  */
#define   USBCORE_U1EP12_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP12) Endpoint 12 transmit is disabled  */
#define USBCORE_U1EP12_EPTXEN_ON              (USBCORE_U1EP12_EPTXEN_ON_Val << USBCORE_U1EP12_EPTXEN_Pos) /* (USBCORE_U1EP12) Endpoint 12 transmit is enabled Position  */
#define USBCORE_U1EP12_EPTXEN_OFF             (USBCORE_U1EP12_EPTXEN_OFF_Val << USBCORE_U1EP12_EPTXEN_Pos) /* (USBCORE_U1EP12) Endpoint 12 transmit is disabled Position  */
#define USBCORE_U1EP12_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP12) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP12_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP12_EPRXEN_Pos)         /* (USBCORE_U1EP12) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP12_EPRXEN(value)          (USBCORE_U1EP12_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP12_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP12 register */
#define   USBCORE_U1EP12_EPRXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP12) Endpoint 12 receive is enabled  */
#define   USBCORE_U1EP12_EPRXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP12) Endpoint 12 receive is disabled  */
#define USBCORE_U1EP12_EPRXEN_ON              (USBCORE_U1EP12_EPRXEN_ON_Val << USBCORE_U1EP12_EPRXEN_Pos) /* (USBCORE_U1EP12) Endpoint 12 receive is enabled Position  */
#define USBCORE_U1EP12_EPRXEN_OFF             (USBCORE_U1EP12_EPRXEN_OFF_Val << USBCORE_U1EP12_EPRXEN_Pos) /* (USBCORE_U1EP12) Endpoint 12 receive is disabled Position  */
#define USBCORE_U1EP12_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP12) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP12_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP12_EPCONDIS_Pos)       /* (USBCORE_U1EP12) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP12_EPCONDIS(value)        (USBCORE_U1EP12_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP12_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP12 register */
#define   USBCORE_U1EP12_EPCONDIS_DISALBE_12_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP12) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 12 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP12_EPCONDIS_ENABLE_12_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP12) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 12 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP12_EPCONDIS_DISALBE_12    (USBCORE_U1EP12_EPCONDIS_DISALBE_12_Val << USBCORE_U1EP12_EPCONDIS_Pos) /* (USBCORE_U1EP12) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 12 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP12_EPCONDIS_ENABLE_12     (USBCORE_U1EP12_EPCONDIS_ENABLE_12_Val << USBCORE_U1EP12_EPCONDIS_Pos) /* (USBCORE_U1EP12) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 12 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP12_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP12) Register Mask  */


/* -------- USBCORE_UEP12CLR : (USBCORE Offset: 0x3C4) (R/W 32)  -------- */
#define USBCORE_UEP12CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP12CLR)   Reset Value */

#define USBCORE_UEP12CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP12CLR) Register Mask  */


/* -------- USBCORE_UEP12SET : (USBCORE Offset: 0x3C8) (R/W 32)  -------- */
#define USBCORE_UEP12SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP12SET)   Reset Value */

#define USBCORE_UEP12SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP12SET) Register Mask  */


/* -------- USBCORE_UEP12INV : (USBCORE Offset: 0x3CC) (R/W 32)  -------- */
#define USBCORE_UEP12INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP12INV)   Reset Value */

#define USBCORE_UEP12INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP12INV) Register Mask  */


/* -------- USBCORE_U1EP13 : (USBCORE Offset: 0x3D0) (R/W 32) USB Endpoint Control Register 13 -------- */
#define USBCORE_U1EP13_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP13) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP13_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP13_EPHSHK_Pos)         /* (USBCORE_U1EP13) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP13_EPHSHK(value)          (USBCORE_U1EP13_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP13_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP13 register */
#define   USBCORE_U1EP13_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP13) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP13_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP13) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP13_EPHSHK_ON              (USBCORE_U1EP13_EPHSHK_ON_Val << USBCORE_U1EP13_EPHSHK_Pos) /* (USBCORE_U1EP13) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP13_EPHSHK_OFF             (USBCORE_U1EP13_EPHSHK_OFF_Val << USBCORE_U1EP13_EPHSHK_Pos) /* (USBCORE_U1EP13) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP13_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP13) Endpoint Stall Status bit Position */
#define USBCORE_U1EP13_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP13_EPSTALL_Pos)        /* (USBCORE_U1EP13) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP13_EPSTALL(value)         (USBCORE_U1EP13_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP13_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP13 register */
#define   USBCORE_U1EP13_EPSTALL_STALL_Val    _UINT32_(0x1)                                        /* (USBCORE_U1EP13) Endpoint 13 was stalled  */
#define   USBCORE_U1EP13_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP13) Endpoint 13 was not stalled  */
#define USBCORE_U1EP13_EPSTALL_STALL          (USBCORE_U1EP13_EPSTALL_STALL_Val << USBCORE_U1EP13_EPSTALL_Pos) /* (USBCORE_U1EP13) Endpoint 13 was stalled Position  */
#define USBCORE_U1EP13_EPSTALL_NOT_STALL      (USBCORE_U1EP13_EPSTALL_NOT_STALL_Val << USBCORE_U1EP13_EPSTALL_Pos) /* (USBCORE_U1EP13) Endpoint 13 was not stalled Position  */
#define USBCORE_U1EP13_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP13) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP13_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP13_EPTXEN_Pos)         /* (USBCORE_U1EP13) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP13_EPTXEN(value)          (USBCORE_U1EP13_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP13_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP13 register */
#define   USBCORE_U1EP13_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP13) Endpoint 13 transmit is enabled  */
#define   USBCORE_U1EP13_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP13) Endpoint 13 transmit is disabled  */
#define USBCORE_U1EP13_EPTXEN_ON              (USBCORE_U1EP13_EPTXEN_ON_Val << USBCORE_U1EP13_EPTXEN_Pos) /* (USBCORE_U1EP13) Endpoint 13 transmit is enabled Position  */
#define USBCORE_U1EP13_EPTXEN_OFF             (USBCORE_U1EP13_EPTXEN_OFF_Val << USBCORE_U1EP13_EPTXEN_Pos) /* (USBCORE_U1EP13) Endpoint 13 transmit is disabled Position  */
#define USBCORE_U1EP13_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP13) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP13_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP13_EPRXEN_Pos)         /* (USBCORE_U1EP13) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP13_EPRXEN(value)          (USBCORE_U1EP13_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP13_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP13 register */
#define   USBCORE_U1EP13_EPRXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP13) Endpoint 13 receive is enabled  */
#define   USBCORE_U1EP13_EPRXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP13) Endpoint 13 receive is disabled  */
#define USBCORE_U1EP13_EPRXEN_ON              (USBCORE_U1EP13_EPRXEN_ON_Val << USBCORE_U1EP13_EPRXEN_Pos) /* (USBCORE_U1EP13) Endpoint 13 receive is enabled Position  */
#define USBCORE_U1EP13_EPRXEN_OFF             (USBCORE_U1EP13_EPRXEN_OFF_Val << USBCORE_U1EP13_EPRXEN_Pos) /* (USBCORE_U1EP13) Endpoint 13 receive is disabled Position  */
#define USBCORE_U1EP13_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP13) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP13_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP13_EPCONDIS_Pos)       /* (USBCORE_U1EP13) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP13_EPCONDIS(value)        (USBCORE_U1EP13_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP13_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP13 register */
#define   USBCORE_U1EP13_EPCONDIS_DISALBE_13_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP13) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 13 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP13_EPCONDIS_ENABLE_13_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP13) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 13 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP13_EPCONDIS_DISALBE_13    (USBCORE_U1EP13_EPCONDIS_DISALBE_13_Val << USBCORE_U1EP13_EPCONDIS_Pos) /* (USBCORE_U1EP13) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 13 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP13_EPCONDIS_ENABLE_13     (USBCORE_U1EP13_EPCONDIS_ENABLE_13_Val << USBCORE_U1EP13_EPCONDIS_Pos) /* (USBCORE_U1EP13) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 13 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP13_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP13) Register Mask  */


/* -------- USBCORE_UEP13CLR : (USBCORE Offset: 0x3D4) (R/W 32)  -------- */
#define USBCORE_UEP13CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP13CLR)   Reset Value */

#define USBCORE_UEP13CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP13CLR) Register Mask  */


/* -------- USBCORE_UEP13SET : (USBCORE Offset: 0x3D8) (R/W 32)  -------- */
#define USBCORE_UEP13SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP13SET)   Reset Value */

#define USBCORE_UEP13SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP13SET) Register Mask  */


/* -------- USBCORE_UEP13INV : (USBCORE Offset: 0x3DC) (R/W 32)  -------- */
#define USBCORE_UEP13INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP13INV)   Reset Value */

#define USBCORE_UEP13INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP13INV) Register Mask  */


/* -------- USBCORE_U1EP14 : (USBCORE Offset: 0x3E0) (R/W 32) USB Endpoint Control Register 14 -------- */
#define USBCORE_U1EP14_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP14) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP14_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP14_EPHSHK_Pos)         /* (USBCORE_U1EP14) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP14_EPHSHK(value)          (USBCORE_U1EP14_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP14_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP14 register */
#define   USBCORE_U1EP14_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP14) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP14_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP14) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP14_EPHSHK_ON              (USBCORE_U1EP14_EPHSHK_ON_Val << USBCORE_U1EP14_EPHSHK_Pos) /* (USBCORE_U1EP14) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP14_EPHSHK_OFF             (USBCORE_U1EP14_EPHSHK_OFF_Val << USBCORE_U1EP14_EPHSHK_Pos) /* (USBCORE_U1EP14) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP14_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP14) Endpoint Stall Status bit Position */
#define USBCORE_U1EP14_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP14_EPSTALL_Pos)        /* (USBCORE_U1EP14) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP14_EPSTALL(value)         (USBCORE_U1EP14_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP14_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP14 register */
#define   USBCORE_U1EP14_EPSTALL_STALL_Val    _UINT32_(0x1)                                        /* (USBCORE_U1EP14) Endpoint 14 was stalled  */
#define   USBCORE_U1EP14_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP14) Endpoint 14 was not stalled  */
#define USBCORE_U1EP14_EPSTALL_STALL          (USBCORE_U1EP14_EPSTALL_STALL_Val << USBCORE_U1EP14_EPSTALL_Pos) /* (USBCORE_U1EP14) Endpoint 14 was stalled Position  */
#define USBCORE_U1EP14_EPSTALL_NOT_STALL      (USBCORE_U1EP14_EPSTALL_NOT_STALL_Val << USBCORE_U1EP14_EPSTALL_Pos) /* (USBCORE_U1EP14) Endpoint 14 was not stalled Position  */
#define USBCORE_U1EP14_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP14) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP14_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP14_EPTXEN_Pos)         /* (USBCORE_U1EP14) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP14_EPTXEN(value)          (USBCORE_U1EP14_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP14_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP14 register */
#define   USBCORE_U1EP14_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP14) Endpoint 14 transmit is enabled  */
#define   USBCORE_U1EP14_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP14) Endpoint 14 transmit is disabled  */
#define USBCORE_U1EP14_EPTXEN_ON              (USBCORE_U1EP14_EPTXEN_ON_Val << USBCORE_U1EP14_EPTXEN_Pos) /* (USBCORE_U1EP14) Endpoint 14 transmit is enabled Position  */
#define USBCORE_U1EP14_EPTXEN_OFF             (USBCORE_U1EP14_EPTXEN_OFF_Val << USBCORE_U1EP14_EPTXEN_Pos) /* (USBCORE_U1EP14) Endpoint 14 transmit is disabled Position  */
#define USBCORE_U1EP14_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP14) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP14_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP14_EPRXEN_Pos)         /* (USBCORE_U1EP14) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP14_EPRXEN(value)          (USBCORE_U1EP14_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP14_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP14 register */
#define   USBCORE_U1EP14_EPRXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP14) Endpoint 14 receive is enabled  */
#define   USBCORE_U1EP14_EPRXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP14) Endpoint 14 receive is disabled  */
#define USBCORE_U1EP14_EPRXEN_ON              (USBCORE_U1EP14_EPRXEN_ON_Val << USBCORE_U1EP14_EPRXEN_Pos) /* (USBCORE_U1EP14) Endpoint 14 receive is enabled Position  */
#define USBCORE_U1EP14_EPRXEN_OFF             (USBCORE_U1EP14_EPRXEN_OFF_Val << USBCORE_U1EP14_EPRXEN_Pos) /* (USBCORE_U1EP14) Endpoint 14 receive is disabled Position  */
#define USBCORE_U1EP14_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP14) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP14_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP14_EPCONDIS_Pos)       /* (USBCORE_U1EP14) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP14_EPCONDIS(value)        (USBCORE_U1EP14_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP14_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP14 register */
#define   USBCORE_U1EP14_EPCONDIS_DISABLE_14_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP14) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 14 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP14_EPCONDIS_ENABLE_14_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP14) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 14 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP14_EPCONDIS_DISABLE_14    (USBCORE_U1EP14_EPCONDIS_DISABLE_14_Val << USBCORE_U1EP14_EPCONDIS_Pos) /* (USBCORE_U1EP14) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 14 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP14_EPCONDIS_ENABLE_14     (USBCORE_U1EP14_EPCONDIS_ENABLE_14_Val << USBCORE_U1EP14_EPCONDIS_Pos) /* (USBCORE_U1EP14) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 14 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP14_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP14) Register Mask  */


/* -------- USBCORE_UEP14CLR : (USBCORE Offset: 0x3E4) (R/W 32)  -------- */
#define USBCORE_UEP14CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP14CLR)   Reset Value */

#define USBCORE_UEP14CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP14CLR) Register Mask  */


/* -------- USBCORE_UEP14SET : (USBCORE Offset: 0x3E8) (R/W 32)  -------- */
#define USBCORE_UEP14SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP14SET)   Reset Value */

#define USBCORE_UEP14SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP14SET) Register Mask  */


/* -------- USBCORE_UEP14INV : (USBCORE Offset: 0x3EC) (R/W 32)  -------- */
#define USBCORE_UEP14INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP14INV)   Reset Value */

#define USBCORE_UEP14INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP14INV) Register Mask  */


/* -------- USBCORE_U1EP15 : (USBCORE Offset: 0x3F0) (R/W 32) USB Endpoint Control Register 15 -------- */
#define USBCORE_U1EP15_EPHSHK_Pos             _UINT32_(0)                                          /* (USBCORE_U1EP15) Endpoint Handshake Enable bit Position */
#define USBCORE_U1EP15_EPHSHK_Msk             (_UINT32_(0x1) << USBCORE_U1EP15_EPHSHK_Pos)         /* (USBCORE_U1EP15) Endpoint Handshake Enable bit Mask */
#define USBCORE_U1EP15_EPHSHK(value)          (USBCORE_U1EP15_EPHSHK_Msk & (_UINT32_(value) << USBCORE_U1EP15_EPHSHK_Pos)) /* Assigment of value for EPHSHK in the USBCORE_U1EP15 register */
#define   USBCORE_U1EP15_EPHSHK_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP15) Endpoint Handshake is enabled  */
#define   USBCORE_U1EP15_EPHSHK_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP15) Endpoint Handshake is disabled (typically used for isochronous endpoints)  */
#define USBCORE_U1EP15_EPHSHK_ON              (USBCORE_U1EP15_EPHSHK_ON_Val << USBCORE_U1EP15_EPHSHK_Pos) /* (USBCORE_U1EP15) Endpoint Handshake is enabled Position  */
#define USBCORE_U1EP15_EPHSHK_OFF             (USBCORE_U1EP15_EPHSHK_OFF_Val << USBCORE_U1EP15_EPHSHK_Pos) /* (USBCORE_U1EP15) Endpoint Handshake is disabled (typically used for isochronous endpoints) Position  */
#define USBCORE_U1EP15_EPSTALL_Pos            _UINT32_(1)                                          /* (USBCORE_U1EP15) Endpoint Stall Status bit Position */
#define USBCORE_U1EP15_EPSTALL_Msk            (_UINT32_(0x1) << USBCORE_U1EP15_EPSTALL_Pos)        /* (USBCORE_U1EP15) Endpoint Stall Status bit Mask */
#define USBCORE_U1EP15_EPSTALL(value)         (USBCORE_U1EP15_EPSTALL_Msk & (_UINT32_(value) << USBCORE_U1EP15_EPSTALL_Pos)) /* Assigment of value for EPSTALL in the USBCORE_U1EP15 register */
#define   USBCORE_U1EP15_EPSTALL_STALL_Val    _UINT32_(0x1)                                        /* (USBCORE_U1EP15) Endpoint 15 was stalled  */
#define   USBCORE_U1EP15_EPSTALL_NOT_STALL_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP15) Endpoint 15 was not stalled  */
#define USBCORE_U1EP15_EPSTALL_STALL          (USBCORE_U1EP15_EPSTALL_STALL_Val << USBCORE_U1EP15_EPSTALL_Pos) /* (USBCORE_U1EP15) Endpoint 15 was stalled Position  */
#define USBCORE_U1EP15_EPSTALL_NOT_STALL      (USBCORE_U1EP15_EPSTALL_NOT_STALL_Val << USBCORE_U1EP15_EPSTALL_Pos) /* (USBCORE_U1EP15) Endpoint 15 was not stalled Position  */
#define USBCORE_U1EP15_EPTXEN_Pos             _UINT32_(2)                                          /* (USBCORE_U1EP15) Endpoint Transmit Enable bit Position */
#define USBCORE_U1EP15_EPTXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP15_EPTXEN_Pos)         /* (USBCORE_U1EP15) Endpoint Transmit Enable bit Mask */
#define USBCORE_U1EP15_EPTXEN(value)          (USBCORE_U1EP15_EPTXEN_Msk & (_UINT32_(value) << USBCORE_U1EP15_EPTXEN_Pos)) /* Assigment of value for EPTXEN in the USBCORE_U1EP15 register */
#define   USBCORE_U1EP15_EPTXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP15) Endpoint 15 transmit is enabled  */
#define   USBCORE_U1EP15_EPTXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP15) Endpoint 15 transmit is disabled  */
#define USBCORE_U1EP15_EPTXEN_ON              (USBCORE_U1EP15_EPTXEN_ON_Val << USBCORE_U1EP15_EPTXEN_Pos) /* (USBCORE_U1EP15) Endpoint 15 transmit is enabled Position  */
#define USBCORE_U1EP15_EPTXEN_OFF             (USBCORE_U1EP15_EPTXEN_OFF_Val << USBCORE_U1EP15_EPTXEN_Pos) /* (USBCORE_U1EP15) Endpoint 15 transmit is disabled Position  */
#define USBCORE_U1EP15_EPRXEN_Pos             _UINT32_(3)                                          /* (USBCORE_U1EP15) Endpoint Receive Enable bit Position */
#define USBCORE_U1EP15_EPRXEN_Msk             (_UINT32_(0x1) << USBCORE_U1EP15_EPRXEN_Pos)         /* (USBCORE_U1EP15) Endpoint Receive Enable bit Mask */
#define USBCORE_U1EP15_EPRXEN(value)          (USBCORE_U1EP15_EPRXEN_Msk & (_UINT32_(value) << USBCORE_U1EP15_EPRXEN_Pos)) /* Assigment of value for EPRXEN in the USBCORE_U1EP15 register */
#define   USBCORE_U1EP15_EPRXEN_ON_Val        _UINT32_(0x1)                                        /* (USBCORE_U1EP15) Endpoint 15 receive is enabled  */
#define   USBCORE_U1EP15_EPRXEN_OFF_Val       _UINT32_(0x0)                                        /* (USBCORE_U1EP15) Endpoint 15 receive is disabled  */
#define USBCORE_U1EP15_EPRXEN_ON              (USBCORE_U1EP15_EPRXEN_ON_Val << USBCORE_U1EP15_EPRXEN_Pos) /* (USBCORE_U1EP15) Endpoint 15 receive is enabled Position  */
#define USBCORE_U1EP15_EPRXEN_OFF             (USBCORE_U1EP15_EPRXEN_OFF_Val << USBCORE_U1EP15_EPRXEN_Pos) /* (USBCORE_U1EP15) Endpoint 15 receive is disabled Position  */
#define USBCORE_U1EP15_EPCONDIS_Pos           _UINT32_(4)                                          /* (USBCORE_U1EP15) Bidirectional Endpoint Control bit Position */
#define USBCORE_U1EP15_EPCONDIS_Msk           (_UINT32_(0x1) << USBCORE_U1EP15_EPCONDIS_Pos)       /* (USBCORE_U1EP15) Bidirectional Endpoint Control bit Mask */
#define USBCORE_U1EP15_EPCONDIS(value)        (USBCORE_U1EP15_EPCONDIS_Msk & (_UINT32_(value) << USBCORE_U1EP15_EPCONDIS_Pos)) /* Assigment of value for EPCONDIS in the USBCORE_U1EP15 register */
#define   USBCORE_U1EP15_EPCONDIS_DISABLE_15_Val _UINT32_(0x1)                                        /* (USBCORE_U1EP15) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 15 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored  */
#define   USBCORE_U1EP15_EPCONDIS_ENABLE_15_Val _UINT32_(0x0)                                        /* (USBCORE_U1EP15) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 15 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored  */
#define USBCORE_U1EP15_EPCONDIS_DISABLE_15    (USBCORE_U1EP15_EPCONDIS_DISABLE_15_Val << USBCORE_U1EP15_EPCONDIS_Pos) /* (USBCORE_U1EP15) (If EPTXEN is 1 and EPRXEN is 1)Disable Endpoint 15 from Control transfers; only TX and RX transfers allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP15_EPCONDIS_ENABLE_15     (USBCORE_U1EP15_EPCONDIS_ENABLE_15_Val << USBCORE_U1EP15_EPCONDIS_Pos) /* (USBCORE_U1EP15) (If EPTXEN is 1 and EPRXEN is 1)Enable Endpoint 15 for Control (SETUP) transfers; TX and RX transfers also allowed / (else)bit is ignored Position  */
#define USBCORE_U1EP15_Msk                    _UINT32_(0x0000001F)                                 /* (USBCORE_U1EP15) Register Mask  */


/* -------- USBCORE_UEP15CLR : (USBCORE Offset: 0x3F4) (R/W 32)  -------- */
#define USBCORE_UEP15CLR_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP15CLR)   Reset Value */

#define USBCORE_UEP15CLR_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP15CLR) Register Mask  */


/* -------- USBCORE_UEP15SET : (USBCORE Offset: 0x3F8) (R/W 32)  -------- */
#define USBCORE_UEP15SET_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP15SET)   Reset Value */

#define USBCORE_UEP15SET_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP15SET) Register Mask  */


/* -------- USBCORE_UEP15INV : (USBCORE Offset: 0x3FC) (R/W 32)  -------- */
#define USBCORE_UEP15INV_RESETVALUE           _UINT32_(0x00)                                       /*  (USBCORE_UEP15INV)   Reset Value */

#define USBCORE_UEP15INV_Msk                  _UINT32_(0x00000000)                                 /* (USBCORE_UEP15INV) Register Mask  */


/** \brief USBCORE register offsets definitions */
#define USBCORE_UOTGIR_REG_OFST        _UINT32_(0x40)      /* (USBCORE_UOTGIR) USB OTG Interrupt Status Register Offset */
#define USBCORE_UOTGIRCLR_REG_OFST     _UINT32_(0x44)      /* (USBCORE_UOTGIRCLR)  Offset */
#define USBCORE_UOTGIRSET_REG_OFST     _UINT32_(0x48)      /* (USBCORE_UOTGIRSET)  Offset */
#define USBCORE_UOTGIRINV_REG_OFST     _UINT32_(0x4C)      /* (USBCORE_UOTGIRINV)  Offset */
#define USBCORE_UOTGIE_REG_OFST        _UINT32_(0x50)      /* (USBCORE_UOTGIE) USB OTG Interrupt Enable Register Offset */
#define USBCORE_UOTGIECLR_REG_OFST     _UINT32_(0x54)      /* (USBCORE_UOTGIECLR)  Offset */
#define USBCORE_UOTGIESET_REG_OFST     _UINT32_(0x58)      /* (USBCORE_UOTGIESET)  Offset */
#define USBCORE_UOTGIEINV_REG_OFST     _UINT32_(0x5C)      /* (USBCORE_UOTGIEINV)  Offset */
#define USBCORE_UOTGSTAT_REG_OFST      _UINT32_(0x60)      /* (USBCORE_UOTGSTAT) USB OTG Status Register Offset */
#define USBCORE_UOTGCON_REG_OFST       _UINT32_(0x70)      /* (USBCORE_UOTGCON) USB OTG Control Register Offset */
#define USBCORE_UOTGCONCLR_REG_OFST    _UINT32_(0x74)      /* (USBCORE_UOTGCONCLR)  Offset */
#define USBCORE_UOTGCONSET_REG_OFST    _UINT32_(0x78)      /* (USBCORE_UOTGCONSET)  Offset */
#define USBCORE_UOTGCONINV_REG_OFST    _UINT32_(0x7C)      /* (USBCORE_UOTGCONINV)  Offset */
#define USBCORE_UPWRC_REG_OFST         _UINT32_(0x80)      /* (USBCORE_UPWRC) USB Power Control Register Offset */
#define USBCORE_UPWRCCLR_REG_OFST      _UINT32_(0x84)      /* (USBCORE_UPWRCCLR)  Offset */
#define USBCORE_UPWRCSET_REG_OFST      _UINT32_(0x88)      /* (USBCORE_UPWRCSET)  Offset */
#define USBCORE_UPWRCINV_REG_OFST      _UINT32_(0x8C)      /* (USBCORE_UPWRCINV)  Offset */
#define USBCORE_UIR_REG_OFST           _UINT32_(0x200)     /* (USBCORE_UIR) USB Interrupt Register Offset */
#define USBCORE_UIRCLR_REG_OFST        _UINT32_(0x204)     /* (USBCORE_UIRCLR)  Offset */
#define USBCORE_UIE_REG_OFST           _UINT32_(0x210)     /* (USBCORE_UIE) USB Interrupt Enable Register Offset */
#define USBCORE_UIECLR_REG_OFST        _UINT32_(0x214)     /* (USBCORE_UIECLR)  Offset */
#define USBCORE_UIESET_REG_OFST        _UINT32_(0x218)     /* (USBCORE_UIESET)  Offset */
#define USBCORE_UIEINV_REG_OFST        _UINT32_(0x21C)     /* (USBCORE_UIEINV)  Offset */
#define USBCORE_UEIR_REG_OFST          _UINT32_(0x220)     /* (USBCORE_UEIR) USB Error Interrupt Status Register Offset */
#define USBCORE_UEIRCLR_REG_OFST       _UINT32_(0x224)     /* (USBCORE_UEIRCLR)  Offset */
#define USBCORE_UEIE_REG_OFST          _UINT32_(0x230)     /* (USBCORE_UEIE) USB Error Interrupt Enable Register Offset */
#define USBCORE_UEIECLR_REG_OFST       _UINT32_(0x234)     /* (USBCORE_UEIECLR)  Offset */
#define USBCORE_UEIESET_REG_OFST       _UINT32_(0x238)     /* (USBCORE_UEIESET)  Offset */
#define USBCORE_UEIEINV_REG_OFST       _UINT32_(0x23C)     /* (USBCORE_UEIEINV)  Offset */
#define USBCORE_USTAT_REG_OFST         _UINT32_(0x240)     /* (USBCORE_USTAT) USB Status Register Offset */
#define USBCORE_USTATCLR_REG_OFST      _UINT32_(0x244)     /* (USBCORE_USTATCLR)  Offset */
#define USBCORE_USTATSET_REG_OFST      _UINT32_(0x248)     /* (USBCORE_USTATSET)  Offset */
#define USBCORE_USTATINV_REG_OFST      _UINT32_(0x24C)     /* (USBCORE_USTATINV)  Offset */
#define USBCORE_UCON_REG_OFST          _UINT32_(0x250)     /* (USBCORE_UCON) USB Control Register Offset */
#define USBCORE_UCONCLR_REG_OFST       _UINT32_(0x254)     /* (USBCORE_UCONCLR)  Offset */
#define USBCORE_UCONSET_REG_OFST       _UINT32_(0x258)     /* (USBCORE_UCONSET)  Offset */
#define USBCORE_UCONINV_REG_OFST       _UINT32_(0x25C)     /* (USBCORE_UCONINV)  Offset */
#define USBCORE_UADDR_REG_OFST         _UINT32_(0x260)     /* (USBCORE_UADDR) USB Address Register Offset */
#define USBCORE_UADDRCLR_REG_OFST      _UINT32_(0x264)     /* (USBCORE_UADDRCLR)  Offset */
#define USBCORE_UADDRSET_REG_OFST      _UINT32_(0x268)     /* (USBCORE_UADDRSET)  Offset */
#define USBCORE_UADDRINV_REG_OFST      _UINT32_(0x26C)     /* (USBCORE_UADDRINV)  Offset */
#define USBCORE_UBDTP1_REG_OFST        _UINT32_(0x270)     /* (USBCORE_UBDTP1) USB BDT Page 1 Register Offset */
#define USBCORE_UBDTP1CLR_REG_OFST     _UINT32_(0x274)     /* (USBCORE_UBDTP1CLR)  Offset */
#define USBCORE_UBDTP1SET_REG_OFST     _UINT32_(0x278)     /* (USBCORE_UBDTP1SET)  Offset */
#define USBCORE_UBDTP1INV_REG_OFST     _UINT32_(0x27C)     /* (USBCORE_UBDTP1INV)  Offset */
#define USBCORE_UFRML_REG_OFST         _UINT32_(0x280)     /* (USBCORE_UFRML) USB Frame Number Low Register Offset */
#define USBCORE_UFRMLCLR_REG_OFST      _UINT32_(0x284)     /* (USBCORE_UFRMLCLR)  Offset */
#define USBCORE_UFRMLSET_REG_OFST      _UINT32_(0x288)     /* (USBCORE_UFRMLSET)  Offset */
#define USBCORE_UFRMLINV_REG_OFST      _UINT32_(0x28C)     /* (USBCORE_UFRMLINV)  Offset */
#define USBCORE_UFRMH_REG_OFST         _UINT32_(0x290)     /* (USBCORE_UFRMH) USB Frame Number High Register Offset */
#define USBCORE_UFRMHCLR_REG_OFST      _UINT32_(0x294)     /* (USBCORE_UFRMHCLR)  Offset */
#define USBCORE_UFRMHSET_REG_OFST      _UINT32_(0x298)     /* (USBCORE_UFRMHSET)  Offset */
#define USBCORE_UFRMHINV_REG_OFST      _UINT32_(0x29C)     /* (USBCORE_UFRMHINV)  Offset */
#define USBCORE_UTOK_REG_OFST          _UINT32_(0x2A0)     /* (USBCORE_UTOK) USB Token Register Offset */
#define USBCORE_UTOKCLR_REG_OFST       _UINT32_(0x2A4)     /* (USBCORE_UTOKCLR)  Offset */
#define USBCORE_UTOKSET_REG_OFST       _UINT32_(0x2A8)     /* (USBCORE_UTOKSET)  Offset */
#define USBCORE_UTOKINV_REG_OFST       _UINT32_(0x2AC)     /* (USBCORE_UTOKINV)  Offset */
#define USBCORE_USOF_REG_OFST          _UINT32_(0x2B0)     /* (USBCORE_USOF) USB SOF Threshold Register Offset */
#define USBCORE_USOFCLR_REG_OFST       _UINT32_(0x2B4)     /* (USBCORE_USOFCLR)  Offset */
#define USBCORE_USOFSET_REG_OFST       _UINT32_(0x2B8)     /* (USBCORE_USOFSET)  Offset */
#define USBCORE_USOFINV_REG_OFST       _UINT32_(0x2BC)     /* (USBCORE_USOFINV)  Offset */
#define USBCORE_UBDTP2_REG_OFST        _UINT32_(0x2C0)     /* (USBCORE_UBDTP2) USB BDT PAGE 2 Register Offset */
#define USBCORE_UBDTP2CLR_REG_OFST     _UINT32_(0x2C4)     /* (USBCORE_UBDTP2CLR)  Offset */
#define USBCORE_UBDTP2SET_REG_OFST     _UINT32_(0x2C8)     /* (USBCORE_UBDTP2SET)  Offset */
#define USBCORE_UBDTP2INV_REG_OFST     _UINT32_(0x2CC)     /* (USBCORE_UBDTP2INV)  Offset */
#define USBCORE_UBDTP3_REG_OFST        _UINT32_(0x2D0)     /* (USBCORE_UBDTP3) USB BDT PAGE 3 Register Offset */
#define USBCORE_UBDTP3CLR_REG_OFST     _UINT32_(0x2D4)     /* (USBCORE_UBDTP3CLR)  Offset */
#define USBCORE_UBDTP3SET_REG_OFST     _UINT32_(0x2D8)     /* (USBCORE_UBDTP3SET)  Offset */
#define USBCORE_UBDTP3INV_REG_OFST     _UINT32_(0x2DC)     /* (USBCORE_UBDTP3INV)  Offset */
#define USBCORE_UCNFG1_REG_OFST        _UINT32_(0x2E0)     /* (USBCORE_UCNFG1) USB Configuration 1 Register Offset */
#define USBCORE_UCNFG1CLR_REG_OFST     _UINT32_(0x2E4)     /* (USBCORE_UCNFG1CLR)  Offset */
#define USBCORE_UCNFG1SET_REG_OFST     _UINT32_(0x2E8)     /* (USBCORE_UCNFG1SET)  Offset */
#define USBCORE_UCNFG1INV_REG_OFST     _UINT32_(0x2EC)     /* (USBCORE_UCNFG1INV)  Offset */
#define USBCORE_UEP0_REG_OFST          _UINT32_(0x300)     /* (USBCORE_UEP0) USB Endpoint Control Register 0 Offset */
#define USBCORE_UEP0CLR_REG_OFST       _UINT32_(0x304)     /* (USBCORE_UEP0CLR)  Offset */
#define USBCORE_UEP0SET_REG_OFST       _UINT32_(0x308)     /* (USBCORE_UEP0SET)  Offset */
#define USBCORE_UEP0INV_REG_OFST       _UINT32_(0x30C)     /* (USBCORE_UEP0INV)  Offset */
#define USBCORE_UEP1_REG_OFST          _UINT32_(0x310)     /* (USBCORE_UEP1) USB Endpoint Control Register 1 Offset */
#define USBCORE_UEP1CLR_REG_OFST       _UINT32_(0x314)     /* (USBCORE_UEP1CLR)  Offset */
#define USBCORE_UEP1SET_REG_OFST       _UINT32_(0x318)     /* (USBCORE_UEP1SET)  Offset */
#define USBCORE_UEP1INV_REG_OFST       _UINT32_(0x31C)     /* (USBCORE_UEP1INV)  Offset */
#define USBCORE_UEP2_REG_OFST          _UINT32_(0x320)     /* (USBCORE_UEP2) USB Endpoint Control Register 2 Offset */
#define USBCORE_UEP2CLR_REG_OFST       _UINT32_(0x324)     /* (USBCORE_UEP2CLR)  Offset */
#define USBCORE_UEP2SET_REG_OFST       _UINT32_(0x328)     /* (USBCORE_UEP2SET)  Offset */
#define USBCORE_UEP2INV_REG_OFST       _UINT32_(0x32C)     /* (USBCORE_UEP2INV)  Offset */
#define USBCORE_UEP3_REG_OFST          _UINT32_(0x330)     /* (USBCORE_UEP3) USB Endpoint Control Register 3 Offset */
#define USBCORE_UEP3CLR_REG_OFST       _UINT32_(0x334)     /* (USBCORE_UEP3CLR)  Offset */
#define USBCORE_UEP3SET_REG_OFST       _UINT32_(0x338)     /* (USBCORE_UEP3SET)  Offset */
#define USBCORE_UEP3INV_REG_OFST       _UINT32_(0x33C)     /* (USBCORE_UEP3INV)  Offset */
#define USBCORE_UEP4_REG_OFST          _UINT32_(0x340)     /* (USBCORE_UEP4) USB Endpoint Control Register 4 Offset */
#define USBCORE_UEP4CLR_REG_OFST       _UINT32_(0x344)     /* (USBCORE_UEP4CLR)  Offset */
#define USBCORE_UEP4SET_REG_OFST       _UINT32_(0x348)     /* (USBCORE_UEP4SET)  Offset */
#define USBCORE_UEP4INV_REG_OFST       _UINT32_(0x34C)     /* (USBCORE_UEP4INV)  Offset */
#define USBCORE_UEP5_REG_OFST          _UINT32_(0x350)     /* (USBCORE_UEP5) USB Endpoint Control Register 5 Offset */
#define USBCORE_UEP5CLR_REG_OFST       _UINT32_(0x354)     /* (USBCORE_UEP5CLR)  Offset */
#define USBCORE_UEP5SET_REG_OFST       _UINT32_(0x358)     /* (USBCORE_UEP5SET)  Offset */
#define USBCORE_UEP5INV_REG_OFST       _UINT32_(0x35C)     /* (USBCORE_UEP5INV)  Offset */
#define USBCORE_UEP6_REG_OFST          _UINT32_(0x360)     /* (USBCORE_UEP6) USB Endpoint Control Register 6 Offset */
#define USBCORE_UEP6CLR_REG_OFST       _UINT32_(0x364)     /* (USBCORE_UEP6CLR)  Offset */
#define USBCORE_UEP6SET_REG_OFST       _UINT32_(0x368)     /* (USBCORE_UEP6SET)  Offset */
#define USBCORE_UEP6INV_REG_OFST       _UINT32_(0x36C)     /* (USBCORE_UEP6INV)  Offset */
#define USBCORE_UEP7_REG_OFST          _UINT32_(0x370)     /* (USBCORE_UEP7) USB Endpoint Control Register 7 Offset */
#define USBCORE_UEP7CLR_REG_OFST       _UINT32_(0x374)     /* (USBCORE_UEP7CLR)  Offset */
#define USBCORE_UEP7SET_REG_OFST       _UINT32_(0x378)     /* (USBCORE_UEP7SET)  Offset */
#define USBCORE_UEP7INV_REG_OFST       _UINT32_(0x37C)     /* (USBCORE_UEP7INV)  Offset */
#define USBCORE_U1EP8_REG_OFST         _UINT32_(0x380)     /* (USBCORE_U1EP8) USB Endpoint Control Register 8 Offset */
#define USBCORE_UEP8CLR_REG_OFST       _UINT32_(0x384)     /* (USBCORE_UEP8CLR)  Offset */
#define USBCORE_UEP8SET_REG_OFST       _UINT32_(0x388)     /* (USBCORE_UEP8SET)  Offset */
#define USBCORE_UEP8INV_REG_OFST       _UINT32_(0x38C)     /* (USBCORE_UEP8INV)  Offset */
#define USBCORE_U1EP9_REG_OFST         _UINT32_(0x390)     /* (USBCORE_U1EP9) USB Endpoint Control Register 9 Offset */
#define USBCORE_UEP9CLR_REG_OFST       _UINT32_(0x394)     /* (USBCORE_UEP9CLR)  Offset */
#define USBCORE_UEP9SET_REG_OFST       _UINT32_(0x398)     /* (USBCORE_UEP9SET)  Offset */
#define USBCORE_UEP9INV_REG_OFST       _UINT32_(0x39C)     /* (USBCORE_UEP9INV)  Offset */
#define USBCORE_U1EP10_REG_OFST        _UINT32_(0x3A0)     /* (USBCORE_U1EP10) USB Endpoint Control Register 10 Offset */
#define USBCORE_UEP10CLR_REG_OFST      _UINT32_(0x3A4)     /* (USBCORE_UEP10CLR)  Offset */
#define USBCORE_UEP10SET_REG_OFST      _UINT32_(0x3A8)     /* (USBCORE_UEP10SET)  Offset */
#define USBCORE_UEP10INV_REG_OFST      _UINT32_(0x3AC)     /* (USBCORE_UEP10INV)  Offset */
#define USBCORE_U1EP11_REG_OFST        _UINT32_(0x3B0)     /* (USBCORE_U1EP11) USB Endpoint Control Register 11 Offset */
#define USBCORE_UEP11CLR_REG_OFST      _UINT32_(0x3B4)     /* (USBCORE_UEP11CLR)  Offset */
#define USBCORE_UEP11SET_REG_OFST      _UINT32_(0x3B8)     /* (USBCORE_UEP11SET)  Offset */
#define USBCORE_UEP11INV_REG_OFST      _UINT32_(0x3BC)     /* (USBCORE_UEP11INV)  Offset */
#define USBCORE_U1EP12_REG_OFST        _UINT32_(0x3C0)     /* (USBCORE_U1EP12) USB Endpoint Control Register 12 Offset */
#define USBCORE_UEP12CLR_REG_OFST      _UINT32_(0x3C4)     /* (USBCORE_UEP12CLR)  Offset */
#define USBCORE_UEP12SET_REG_OFST      _UINT32_(0x3C8)     /* (USBCORE_UEP12SET)  Offset */
#define USBCORE_UEP12INV_REG_OFST      _UINT32_(0x3CC)     /* (USBCORE_UEP12INV)  Offset */
#define USBCORE_U1EP13_REG_OFST        _UINT32_(0x3D0)     /* (USBCORE_U1EP13) USB Endpoint Control Register 13 Offset */
#define USBCORE_UEP13CLR_REG_OFST      _UINT32_(0x3D4)     /* (USBCORE_UEP13CLR)  Offset */
#define USBCORE_UEP13SET_REG_OFST      _UINT32_(0x3D8)     /* (USBCORE_UEP13SET)  Offset */
#define USBCORE_UEP13INV_REG_OFST      _UINT32_(0x3DC)     /* (USBCORE_UEP13INV)  Offset */
#define USBCORE_U1EP14_REG_OFST        _UINT32_(0x3E0)     /* (USBCORE_U1EP14) USB Endpoint Control Register 14 Offset */
#define USBCORE_UEP14CLR_REG_OFST      _UINT32_(0x3E4)     /* (USBCORE_UEP14CLR)  Offset */
#define USBCORE_UEP14SET_REG_OFST      _UINT32_(0x3E8)     /* (USBCORE_UEP14SET)  Offset */
#define USBCORE_UEP14INV_REG_OFST      _UINT32_(0x3EC)     /* (USBCORE_UEP14INV)  Offset */
#define USBCORE_U1EP15_REG_OFST        _UINT32_(0x3F0)     /* (USBCORE_U1EP15) USB Endpoint Control Register 15 Offset */
#define USBCORE_UEP15CLR_REG_OFST      _UINT32_(0x3F4)     /* (USBCORE_UEP15CLR)  Offset */
#define USBCORE_UEP15SET_REG_OFST      _UINT32_(0x3F8)     /* (USBCORE_UEP15SET)  Offset */
#define USBCORE_UEP15INV_REG_OFST      _UINT32_(0x3FC)     /* (USBCORE_UEP15INV)  Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief USBCORE register API structure */
typedef struct
{
  __I   uint8_t                        Reserved1[0x40];
  __IO  uint32_t                       USBCORE_UOTGIR;     /**< Offset: 0x40 (R/W  32) USB OTG Interrupt Status Register */
  __IO  uint32_t                       USBCORE_UOTGIRCLR;  /**< Offset: 0x44 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGIRSET;  /**< Offset: 0x48 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGIRINV;  /**< Offset: 0x4C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGIE;     /**< Offset: 0x50 (R/W  32) USB OTG Interrupt Enable Register */
  __IO  uint32_t                       USBCORE_UOTGIECLR;  /**< Offset: 0x54 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGIESET;  /**< Offset: 0x58 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGIEINV;  /**< Offset: 0x5C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGSTAT;   /**< Offset: 0x60 (R/W  32) USB OTG Status Register */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       USBCORE_UOTGCON;    /**< Offset: 0x70 (R/W  32) USB OTG Control Register */
  __IO  uint32_t                       USBCORE_UOTGCONCLR; /**< Offset: 0x74 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGCONSET; /**< Offset: 0x78 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UOTGCONINV; /**< Offset: 0x7C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UPWRC;      /**< Offset: 0x80 (R/W  32) USB Power Control Register */
  __IO  uint32_t                       USBCORE_UPWRCCLR;   /**< Offset: 0x84 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UPWRCSET;   /**< Offset: 0x88 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UPWRCINV;   /**< Offset: 0x8C (R/W  32)  */
  __I   uint8_t                        Reserved3[0x170];
  __IO  uint32_t                       USBCORE_UIR;        /**< Offset: 0x200 (R/W  32) USB Interrupt Register */
  __IO  uint32_t                       USBCORE_UIRCLR;     /**< Offset: 0x204 (R/W  32)  */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       USBCORE_UIE;        /**< Offset: 0x210 (R/W  32) USB Interrupt Enable Register */
  __IO  uint32_t                       USBCORE_UIECLR;     /**< Offset: 0x214 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UIESET;     /**< Offset: 0x218 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UIEINV;     /**< Offset: 0x21C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEIR;       /**< Offset: 0x220 (R/W  32) USB Error Interrupt Status Register */
  __IO  uint32_t                       USBCORE_UEIRCLR;    /**< Offset: 0x224 (R/W  32)  */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       USBCORE_UEIE;       /**< Offset: 0x230 (R/W  32) USB Error Interrupt Enable Register */
  __IO  uint32_t                       USBCORE_UEIECLR;    /**< Offset: 0x234 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEIESET;    /**< Offset: 0x238 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEIEINV;    /**< Offset: 0x23C (R/W  32)  */
  __I   uint32_t                       USBCORE_USTAT;      /**< Offset: 0x240 (R/   32) USB Status Register */
  __IO  uint32_t                       USBCORE_USTATCLR;   /**< Offset: 0x244 (R/W  32)  */
  __IO  uint32_t                       USBCORE_USTATSET;   /**< Offset: 0x248 (R/W  32)  */
  __IO  uint32_t                       USBCORE_USTATINV;   /**< Offset: 0x24C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCON;       /**< Offset: 0x250 (R/W  32) USB Control Register */
  __IO  uint32_t                       USBCORE_UCONCLR;    /**< Offset: 0x254 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCONSET;    /**< Offset: 0x258 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCONINV;    /**< Offset: 0x25C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UADDR;      /**< Offset: 0x260 (R/W  32) USB Address Register */
  __IO  uint32_t                       USBCORE_UADDRCLR;   /**< Offset: 0x264 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UADDRSET;   /**< Offset: 0x268 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UADDRINV;   /**< Offset: 0x26C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP1;     /**< Offset: 0x270 (R/W  32) USB BDT Page 1 Register */
  __IO  uint32_t                       USBCORE_UBDTP1CLR;  /**< Offset: 0x274 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP1SET;  /**< Offset: 0x278 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP1INV;  /**< Offset: 0x27C (R/W  32)  */
  __I   uint32_t                       USBCORE_UFRML;      /**< Offset: 0x280 (R/   32) USB Frame Number Low Register */
  __IO  uint32_t                       USBCORE_UFRMLCLR;   /**< Offset: 0x284 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UFRMLSET;   /**< Offset: 0x288 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UFRMLINV;   /**< Offset: 0x28C (R/W  32)  */
  __I   uint32_t                       USBCORE_UFRMH;      /**< Offset: 0x290 (R/   32) USB Frame Number High Register */
  __IO  uint32_t                       USBCORE_UFRMHCLR;   /**< Offset: 0x294 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UFRMHSET;   /**< Offset: 0x298 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UFRMHINV;   /**< Offset: 0x29C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UTOK;       /**< Offset: 0x2A0 (R/W  32) USB Token Register */
  __IO  uint32_t                       USBCORE_UTOKCLR;    /**< Offset: 0x2A4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UTOKSET;    /**< Offset: 0x2A8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UTOKINV;    /**< Offset: 0x2AC (R/W  32)  */
  __IO  uint32_t                       USBCORE_USOF;       /**< Offset: 0x2B0 (R/W  32) USB SOF Threshold Register */
  __IO  uint32_t                       USBCORE_USOFCLR;    /**< Offset: 0x2B4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_USOFSET;    /**< Offset: 0x2B8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_USOFINV;    /**< Offset: 0x2BC (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP2;     /**< Offset: 0x2C0 (R/W  32) USB BDT PAGE 2 Register */
  __IO  uint32_t                       USBCORE_UBDTP2CLR;  /**< Offset: 0x2C4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP2SET;  /**< Offset: 0x2C8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP2INV;  /**< Offset: 0x2CC (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP3;     /**< Offset: 0x2D0 (R/W  32) USB BDT PAGE 3 Register */
  __IO  uint32_t                       USBCORE_UBDTP3CLR;  /**< Offset: 0x2D4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP3SET;  /**< Offset: 0x2D8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UBDTP3INV;  /**< Offset: 0x2DC (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCNFG1;     /**< Offset: 0x2E0 (R/W  32) USB Configuration 1 Register */
  __IO  uint32_t                       USBCORE_UCNFG1CLR;  /**< Offset: 0x2E4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCNFG1SET;  /**< Offset: 0x2E8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UCNFG1INV;  /**< Offset: 0x2EC (R/W  32)  */
  __I   uint8_t                        Reserved6[0x10];
  __IO  uint32_t                       USBCORE_UEP0;       /**< Offset: 0x300 (R/W  32) USB Endpoint Control Register 0 */
  __IO  uint32_t                       USBCORE_UEP0CLR;    /**< Offset: 0x304 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP0SET;    /**< Offset: 0x308 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP0INV;    /**< Offset: 0x30C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP1;       /**< Offset: 0x310 (R/W  32) USB Endpoint Control Register 1 */
  __IO  uint32_t                       USBCORE_UEP1CLR;    /**< Offset: 0x314 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP1SET;    /**< Offset: 0x318 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP1INV;    /**< Offset: 0x31C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP2;       /**< Offset: 0x320 (R/W  32) USB Endpoint Control Register 2 */
  __IO  uint32_t                       USBCORE_UEP2CLR;    /**< Offset: 0x324 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP2SET;    /**< Offset: 0x328 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP2INV;    /**< Offset: 0x32C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP3;       /**< Offset: 0x330 (R/W  32) USB Endpoint Control Register 3 */
  __IO  uint32_t                       USBCORE_UEP3CLR;    /**< Offset: 0x334 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP3SET;    /**< Offset: 0x338 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP3INV;    /**< Offset: 0x33C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP4;       /**< Offset: 0x340 (R/W  32) USB Endpoint Control Register 4 */
  __IO  uint32_t                       USBCORE_UEP4CLR;    /**< Offset: 0x344 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP4SET;    /**< Offset: 0x348 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP4INV;    /**< Offset: 0x34C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP5;       /**< Offset: 0x350 (R/W  32) USB Endpoint Control Register 5 */
  __IO  uint32_t                       USBCORE_UEP5CLR;    /**< Offset: 0x354 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP5SET;    /**< Offset: 0x358 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP5INV;    /**< Offset: 0x35C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP6;       /**< Offset: 0x360 (R/W  32) USB Endpoint Control Register 6 */
  __IO  uint32_t                       USBCORE_UEP6CLR;    /**< Offset: 0x364 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP6SET;    /**< Offset: 0x368 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP6INV;    /**< Offset: 0x36C (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP7;       /**< Offset: 0x370 (R/W  32) USB Endpoint Control Register 7 */
  __IO  uint32_t                       USBCORE_UEP7CLR;    /**< Offset: 0x374 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP7SET;    /**< Offset: 0x378 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP7INV;    /**< Offset: 0x37C (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP8;      /**< Offset: 0x380 (R/W  32) USB Endpoint Control Register 8 */
  __IO  uint32_t                       USBCORE_UEP8CLR;    /**< Offset: 0x384 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP8SET;    /**< Offset: 0x388 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP8INV;    /**< Offset: 0x38C (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP9;      /**< Offset: 0x390 (R/W  32) USB Endpoint Control Register 9 */
  __IO  uint32_t                       USBCORE_UEP9CLR;    /**< Offset: 0x394 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP9SET;    /**< Offset: 0x398 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP9INV;    /**< Offset: 0x39C (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP10;     /**< Offset: 0x3A0 (R/W  32) USB Endpoint Control Register 10 */
  __IO  uint32_t                       USBCORE_UEP10CLR;   /**< Offset: 0x3A4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP10SET;   /**< Offset: 0x3A8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP10INV;   /**< Offset: 0x3AC (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP11;     /**< Offset: 0x3B0 (R/W  32) USB Endpoint Control Register 11 */
  __IO  uint32_t                       USBCORE_UEP11CLR;   /**< Offset: 0x3B4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP11SET;   /**< Offset: 0x3B8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP11INV;   /**< Offset: 0x3BC (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP12;     /**< Offset: 0x3C0 (R/W  32) USB Endpoint Control Register 12 */
  __IO  uint32_t                       USBCORE_UEP12CLR;   /**< Offset: 0x3C4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP12SET;   /**< Offset: 0x3C8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP12INV;   /**< Offset: 0x3CC (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP13;     /**< Offset: 0x3D0 (R/W  32) USB Endpoint Control Register 13 */
  __IO  uint32_t                       USBCORE_UEP13CLR;   /**< Offset: 0x3D4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP13SET;   /**< Offset: 0x3D8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP13INV;   /**< Offset: 0x3DC (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP14;     /**< Offset: 0x3E0 (R/W  32) USB Endpoint Control Register 14 */
  __IO  uint32_t                       USBCORE_UEP14CLR;   /**< Offset: 0x3E4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP14SET;   /**< Offset: 0x3E8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP14INV;   /**< Offset: 0x3EC (R/W  32)  */
  __IO  uint32_t                       USBCORE_U1EP15;     /**< Offset: 0x3F0 (R/W  32) USB Endpoint Control Register 15 */
  __IO  uint32_t                       USBCORE_UEP15CLR;   /**< Offset: 0x3F4 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP15SET;   /**< Offset: 0x3F8 (R/W  32)  */
  __IO  uint32_t                       USBCORE_UEP15INV;   /**< Offset: 0x3FC (R/W  32)  */
} usbcore_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WBZ65_USBCORE_COMPONENT_H_ */

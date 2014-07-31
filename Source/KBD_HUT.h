/*
 * KBD_HUT.h
 *
 *  Created on: 08/09/2013
 *      Author: CONG
 * Copyright 2014 Cong Nguyen
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); 
 * you may not use this file except in compliance with the License. 
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, 
 * software distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * See the License for the specific language governing permissions and limitations under the License. 
 */

#ifndef KBD_HUT_H_
#define KBD_HUT_H_

#define hutReserved			0x00
#define hutErrorRollOver		0x01
#define hutPOSTFail			0x02
#define hutErrorUndefined		0x03
#define hutA					0x04
#define hutB					0x05
#define hutC					0x06
#define	hutD					0x07
#define hutE					0x08
#define hutF					0x09
#define hutG					0x0A
#define hutH					0x0B
#define hutI					0x0C
#define hutJ					0x0D
#define hutK					0x0E
#define hutL					0x0F
#define hutM					0x10
#define hutN					0x11
#define hutO					0x12
#define hutP					0x13
#define hutQ					0x14
#define hutR					0x15
#define hutS					0x16
#define hutT					0x17
#define hutU					0x18
#define hutV					0x19
#define hutW					0x1A
#define hutX					0x1B
#define hutY					0x1C
#define hutZ					0x1D
#define hut1					0x1E
#define hut2					0x1F
#define hut3					0x20
#define hut4					0x21
#define hut5					0x22
#define hut6					0x23
#define hut7					0x24
#define hut8					0x25
#define hut9					0x26
#define hut0					0x27
#define hutEnter				0x28
#define hutEscape				0x29
#define hutBackspace			0x2A
#define hutTab					0x2B
#define hutSpacebar			0x2C
#define hutMinus				0x2D
#define hutEqual				0x2E
#define hutLeftBracket			0x2F
#define hutRightBracket		0x30
#define hutBackslash			0x31
#define hutVerticalBar			0x32
#define hutSemicolon			0x33
#define hutApostrophe			0x34
#define hutTilde				0x35
#define hutComma				0x36
#define hutPeriod				0x37
#define hutSlash				0x38
#define hutCapsLock			0x39
#define hutF1					0x3A
#define hutF2					0x3B
#define hutF3					0x3C
#define hutF4					0x3D
#define hutF5					0x3E
#define hutF6					0x3F
#define hutF7					0x40
#define hutF8					0x41
#define hutF9					0x42
#define hutF10					0x43
#define hutF11					0x44
#define hutF12					0x45
#define hutPrintScreen			0x46
#define hutScrollLock			0x47
#define hutPause				0x48
#define hutInsert				0x49
#define hutHome				0x4A
#define hutPageUp				0x4B
#define hutDeleteForward		0x4C
#define hutEnd					0x4D
#define hutPageDown			0x4E
#define hutRightArrow			0x4F
#define hutLeftArrow			0x50
#define hutDownArrow			0x51
#define hutUpArrow				0x52
#define hutKeypadNumlock		0x53
#define hutKeypadSlash			0x54
#define hutKeypadAsterisk		0x55
#define hutKeypadMinus			0x56
#define hutKeypadPlus			0x57
#define hutKeypadEnter			0x58
#define hutKeypad1				0x59
#define hutKeypad2				0x5A
#define hutKeypad3				0x5B
#define hutKeypad4				0x5C
#define hutKeypad5				0x5D
#define hutKeypad6				0x5E
#define hutKeypad7				0x5F
#define hutKeypad8				0x60
#define hutKeypad9				0x61
#define hutKeypad0				0x62
#define hutKeypadPeriod		0x63
#define hutNonUsBackslash		0x64
#define hutWindowsKey			0x65
#define hutPower				0x66
#define hutKeypadEqual			0x67
#define hutF13					0x68
#define hutF14					0x69
#define hutF15					0x6A
#define hutF16					0x6B
#define hutF17					0x6C
#define hutF18					0x6D
#define hutF19					0x6E
#define hutF20					0x6F
#define hutF21					0x70
#define hutF22					0x71
#define hutF23					0x72
#define hutF24					0x73
#define hutExecute				0x74
#define hutHelp				0x75
#define hutMenu				0x76
#define hutSelect				0x77
#define hutStop				0x78
#define hutAgain				0x79
#define hutUndo				0x7A
#define hutCut					0x7B
#define hutCopy				0x7C
#define hutPaste				0x7D
#define hutFind				0x7E
#define hutMute				0x7F
#define hutVolumeUp			0x80
#define hutVolumneDown			0x81
#define hutLockingCapsLock		0x82
#define hutLockingNumLock		0x83
#define hutLockingScrollLock	0x84
#define hutKeypadComma			0x85
#define hutAS400KeypadEqual	0x86
#define hutInternational1		0x87
#define hutInternational2		0x88
#define hutInternational3		0x89
#define hutInternational4		0x8A
#define hutInternational5		0x8B
#define hutInternational6		0x8C
#define hutInternational7		0x8D
#define hutInternational8		0x8E
#define hutInternational9		0x8F
#define hutLang1				0x90
#define hutLang2				0x91
#define hutLang3				0x92
#define hutLang4				0x93
#define hutLang5				0x94
#define hutLang6				0x95
#define hutLang7				0x96
#define hutLang8				0x97
#define hutLang9				0x98
#define hutAlternateErase		0x99
#define hutSysReq				0x9A
#define hutCancel				0x9B
#define hutClear				0x9C
#define hutPrior				0x9D
#define hutReturn				0x9E
#define hutSeparator			0x9F
#define hutOut					0xA0
#define hutOper				0xA1
#define hutClearAgain			0xA2
#define hutCrSelProps			0xA3
#define hutExSel				0xA4
#define hutLeftControl			0xE0
#define hutLeftShift			0xE1
#define hutLeftAlt				0xE2
#define hutLeftGUI				0xE3
#define hutRightControl		0xE4
#define hutRightShift			0xE5
#define hutRightAlt			0xE6
#define hutRightGUI			0xE7

#endif /* KBD_HUT_H_ */

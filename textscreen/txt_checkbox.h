// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id$
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2006 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//

#ifndef TXT_CHECKBOX_H
#define TXT_CHECKBOX_H

typedef struct txt_checkbox_s txt_checkbox_t;

#include "txt_widget.h"

struct txt_checkbox_s
{
    txt_widget_t widget;
    char *label;
    int *variable;
    int inverted;
};

txt_checkbox_t *TXT_NewCheckBox(char *label, int *variable);
txt_checkbox_t *TXT_NewInvertedCheckBox(char *label, int *variable);

#endif /* #ifndef TXT_CHECKBOX_H */


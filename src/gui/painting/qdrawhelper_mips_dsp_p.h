/****************************************************************************
**
** Copyright (C) 2012 MIPS Technologies, www.mips.com, author Damir Tatalovic <dtatalovic@mips.com>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QDRAWHELPER_MIPS_P_H
#define QDRAWHELPER_MIPS_P_H

#include <private/qdrawhelper_p.h>

QT_BEGIN_NAMESPACE

#if defined(QT_COMPILER_SUPPORTS_MIPS_DSP)

extern "C" void qt_memfill32_asm_mips_dsp(quint32 *dest, quint32 value, int count);

extern "C" void comp_func_SourceOver_asm_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_DestinationOver_dsp_asm_x2(uint *dest, int length, uint color);

extern "C" void comp_func_solid_Source_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_DestinationOver_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_SourceIn_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_SourceIn_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_DestinationIn_dsp_asm_x2(uint *dest, int length, uint a);

extern "C" void comp_func_DestinationIn_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_DestinationOut_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_SourceAtop_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_SourceAtop_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_DestinationAtop_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_DestinationAtop_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_XOR_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_XOR_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_solid_SourceOut_dsp_asm_x2(uint *dest, int length, uint color, uint const_alpha);

extern "C" void comp_func_SourceOut_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void comp_func_Source_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void qt_blend_argb32_on_argb32_mips_dsp_asm_x2(uint *dest, const uint *src, int length, uint const_alpha);

extern "C" void qt_blend_argb32_on_argb32_const_alpha_256_mips_dsp_asm(uint *dest, const uint *src, int length);

extern "C" uint * destfetchARGB32_asm_mips_dsp(uint *buffer, const uint *data, int length);

extern "C" uint * qt_destStoreARGB32_asm_mips_dsp(uint *buffer, const uint *data, int length);

void qt_blend_argb32_on_argb32_mips_dsp(uchar *destPixels, int dbpl,
                                      const uchar *srcPixels, int sbpl,
                                      int w, int h,
                                      int const_alpha);

void qt_blend_rgb32_on_rgb32_mips_dsp(uchar *destPixels, int dbpl,
                                    const uchar *srcPixels, int sbpl,
                                    int w, int h,
                                    int const_alpha);

void comp_func_Source_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

uint * QT_FASTCALL qt_destFetchARGB32_mips_dsp(uint *buffer,
                                          QRasterBuffer *rasterBuffer,
                                          int x, int y, int length);

void QT_FASTCALL qt_destStoreARGB32_mips_dsp(QRasterBuffer *rasterBuffer, int x, int y,
                                             const uint *buffer, int length);

void QT_FASTCALL comp_func_solid_Source_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_solid_SourceOver_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_solid_DestinationOver_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_solid_SourceOver_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_solid_DestinationOver_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_DestinationOver_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_SourceIn_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_SourceIn_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_DestinationIn_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_DestinationIn_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_DestinationOut_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_DestinationOut_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_SourceAtop_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_SourceAtop_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_DestinationAtop_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_DestinationAtop_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_solid_XOR_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_solid_SourceOut_mips_dsp(uint *dest, int length, uint color, uint const_alpha);

void QT_FASTCALL comp_func_SourceOut_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

void QT_FASTCALL comp_func_XOR_mips_dsp(uint *dest, const uint *src, int length, uint const_alpha);

#endif // QT_COMPILER_SUPPORTS_MIPS_DSP


#ifdef QT_COMPILER_SUPPORTS_MIPS_DSPR2

extern "C" void  qConvertRgb16To32_asm_mips_dspr2(quint32 *dest, const quint16 *src, int length);

#endif // QT_COMPILER_SUPPORTS_MIPS_DSPR2

QT_END_NAMESPACE

#endif // QDRAWHELPER_MIPS_P_H

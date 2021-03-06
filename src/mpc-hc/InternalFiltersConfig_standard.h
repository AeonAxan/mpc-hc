/*
 * (C) 2012 see Authors.txt
 *
 * This file is part of MPC-HC.
 *
 * MPC-HC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * MPC-HC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

// Internal source filters
#define INTERNAL_SOURCEFILTER_AVI       1
#define INTERNAL_SOURCEFILTER_CDDA      1
#define INTERNAL_SOURCEFILTER_CDXA      1
#define INTERNAL_SOURCEFILTER_DSM       1
#define INTERNAL_SOURCEFILTER_DTSAC3    1
#define INTERNAL_SOURCEFILTER_VTS       1
#define INTERNAL_SOURCEFILTER_DVSOURCE  1
#define INTERNAL_SOURCEFILTER_FLIC      1
#define INTERNAL_SOURCEFILTER_FLAC      1
#define INTERNAL_SOURCEFILTER_FLV       1
#define INTERNAL_SOURCEFILTER_MATROSKA  1
#define INTERNAL_SOURCEFILTER_MP4       1
#define INTERNAL_SOURCEFILTER_OGG       1
#define INTERNAL_SOURCEFILTER_MPEGAUDIO 1
#define INTERNAL_SOURCEFILTER_MPEG      1
#define INTERNAL_SOURCEFILTER_REALMEDIA 1
#define INTERNAL_SOURCEFILTER_SHOUTCAST 1
#define INTERNAL_SOURCEFILTER_UDP       1
#define INTERNAL_SOURCEFILTER_AVI2AC3   1

// Internal audio decoders
#define INTERNAL_DECODER_LPCM           1
#define INTERNAL_DECODER_PS2AUDIO       1
#define INTERNAL_DECODER_REALAUDIO      1
#define INTERNAL_DECODER_PCM            1

// Internal audio decoders (FFmpeg)
#define INTERNAL_DECODER_AC3            1 /* also E-AC3, TrueHD, MLP */
#define INTERNAL_DECODER_DTS            1
#define INTERNAL_DECODER_AAC            1
#define INTERNAL_DECODER_ALAC           1
#define INTERNAL_DECODER_ALS            1
#define INTERNAL_DECODER_MPEGAUDIO      1
#define INTERNAL_DECODER_VORBIS         1
#define INTERNAL_DECODER_NELLYMOSER     1
#define INTERNAL_DECODER_AMR            1
#define INTERNAL_DECODER_ADPCM          1
#define INTERNAL_DECODER_FLAC           1

// Internal video decoders
#define INTERNAL_DECODER_MPEG1          1
#define INTERNAL_DECODER_MPEG2          1
#define INTERNAL_DECODER_REALVIDEO      1

// Internal video decoders (FFmpeg)
#define INTERNAL_DECODER_H264           1
#define INTERNAL_DECODER_VC1            1
#define INTERNAL_DECODER_FLV            1
#define INTERNAL_DECODER_VP356          1
#define INTERNAL_DECODER_DIVX           1
#define INTERNAL_DECODER_XVID           1
#define INTERNAL_DECODER_WMV            1
#define INTERNAL_DECODER_MSMPEG4        1
#define INTERNAL_DECODER_SVQ            1
#define INTERNAL_DECODER_H263           1
#define INTERNAL_DECODER_THEORA         1
#define INTERNAL_DECODER_AMVV           1
#define INTERNAL_DECODER_VP8            1
#define INTERNAL_DECODER_MJPEG          1
#define INTERNAL_DECODER_INDEO          1

// DXVA decoders
#define INTERNAL_DECODER_H264_DXVA      1
#define INTERNAL_DECODER_VC1_DXVA       1
#define INTERNAL_DECODER_MPEG2_DXVA     1
#define INTERNAL_DECODER_WMV3_DXVA      1

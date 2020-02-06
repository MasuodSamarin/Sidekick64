/*
 splash_flash.h

 RasPIC64 - A framework for interfacing the C64 and a Raspberry Pi 3B/3B+
 Copyright (c) 2019,2020 Carsten Dachsbacher <frenetic@dachsbacher.de>
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _splash_ef_h
#define _splash_ef_h

/* Generated by bin2c, do not edit manually */

/* Contents of file raspi_flash.oled */
const long int raspi_flash_splash_size = 1024;
const unsigned char raspi_flash_splash[1024] = {
    0x40, 0xA8, 0x10, 0xC4, 0x10, 0xA4, 0x4A, 0xD0, 0xBA, 0x44, 0xAA, 0x00, 0x02, 0x02, 0x04, 0x2A,
    0x5C, 0x20, 0x0A, 0x20, 0x48, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x03, 0x00, 0xED, 0xD8, 0xB3, 0xA4, 0xD5, 0xAA, 0x55, 0xEC, 0xBB, 0xC2, 0xB4, 0x05, 0x02,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x92, 0xAA, 0x10, 0xA0, 0x42, 0x10, 0xA2,
    0x08, 0x50, 0x42, 0x80, 0x02, 0x08, 0x80, 0x28, 0x50, 0xD4, 0xA0, 0x00, 0xA8, 0x80, 0x20, 0x80,
    0x00, 0x20, 0x00, 0x00, 0xE0, 0xE0, 0xF8, 0xFC, 0xBE, 0xFE, 0xFE, 0x5E, 0xFF, 0xEF, 0xAF, 0x5F,
    0x03, 0x07, 0x03, 0x3F, 0x7F, 0x7E, 0x7F, 0x7E, 0xFE, 0x7C, 0xFC, 0x74, 0xF8, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x03, 0x06, 0x0D, 0x0A, 0x0F, 0x0A, 0x1F, 0x0D, 0x1F, 0x0E, 0x18, 0x08, 0x18, 0x18, 0xB8,
    0xF8, 0x78, 0xE8, 0xF8, 0xF0, 0x60, 0xD0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFB, 0xFE, 0xFF, 0xBD, 0xFF, 0xDF, 0x3E, 0xFF, 0x26, 0xDD, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0xDA, 0xF5, 0xA4, 0xDB, 0x34, 0xE5, 0x5A,
    0xF1, 0xC6, 0x98, 0x22, 0x00, 0x00, 0x00, 0xFF, 0xBA, 0xE6, 0x59, 0xEA, 0xB4, 0xE9, 0xBA, 0xC2,
    0x3A, 0x40, 0x00, 0x00, 0xDF, 0x7F, 0xFF, 0x7F, 0xD5, 0x6F, 0xDB, 0x37, 0x4A, 0x5E, 0x99, 0x22,
    0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x1D, 0x26, 0xDC, 0x52, 0xA4, 0x14, 0x28, 0x00, 0x08, 0xC0, 0xF0, 0xF0, 0xE0, 0xE0, 0x67,
    0x63, 0x33, 0x32, 0x31, 0x31, 0x30, 0x31, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80,
    0x00, 0x80, 0x00, 0x7F, 0xDB, 0x77, 0xAE, 0x53, 0xAE, 0x11, 0x4F, 0x10, 0x22, 0x84, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0xB6, 0x7F, 0xED, 0xDB, 0xFF, 0x3D, 0x0F,
    0x07, 0xE6, 0xE5, 0xE5, 0xE0, 0x60, 0x60, 0x33, 0x33, 0x33, 0x31, 0x31, 0x32, 0x03, 0x00, 0xF0,
    0xF9, 0xB8, 0x00, 0x00, 0x05, 0x1F, 0x3D, 0xA3, 0x5C, 0x93, 0x65, 0x82, 0x2D, 0x00, 0x12, 0x00,
    0x00, 0x00, 0x00, 0x48, 0x90, 0x28, 0x00, 0x24, 0x08, 0x12, 0x04, 0x40, 0x05, 0x00, 0xC0, 0xF8,
    0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0xF0, 0xFC, 0xFF, 0xC3, 0x60, 0x60, 0x60, 0x30,
    0x30, 0x30, 0x30, 0x10, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x70, 0x18, 0x18, 0x0C, 0x0C, 0xFC, 0xFC,
    0x3C, 0x01, 0x00, 0x01, 0xE0, 0xF2, 0xB0, 0x9C, 0x9C, 0x0C, 0x0C, 0x1C, 0x00, 0x00, 0x00, 0xC0,
    0xFC, 0xFC, 0x1C, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xFC, 0x7C, 0x0C, 0x00, 0x01, 0x01, 0xC0, 0xF0,
    0xFE, 0xCF, 0xC1, 0xC0, 0x60, 0x60, 0x62, 0x60, 0x62, 0x00, 0x00, 0x01, 0x00, 0xE0, 0xFE, 0x1F,
    0x0F, 0x00, 0x00, 0xC0, 0xE0, 0x70, 0x30, 0x18, 0x1C, 0x0C, 0xEC, 0xFC, 0x3C, 0x00, 0x01, 0x00,
    0x61, 0xF0, 0xF0, 0x98, 0x9C, 0x0C, 0x0C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x80, 0xFC, 0x7F, 0x83,
    0xC1, 0x60, 0x60, 0x30, 0xF0, 0xF0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7F, 0x6F, 0x61, 0x61, 0x60, 0x20, 0x30, 0x38, 0x38,
    0x18, 0x88, 0x80, 0x80, 0x00, 0x18, 0x3E, 0x3F, 0x20, 0x30, 0x18, 0x1C, 0x5E, 0x7F, 0x1F, 0x03,
    0x00, 0x00, 0x20, 0x60, 0x60, 0x61, 0x21, 0x33, 0x3B, 0x1F, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x0F,
    0x1F, 0x1D, 0x18, 0x98, 0xCC, 0xF6, 0x7F, 0x1F, 0x03, 0x60, 0xC0, 0x00, 0x00, 0x7F, 0x7F, 0x3F,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x40, 0x90, 0x00, 0x30, 0x7C, 0x7F, 0x03, 0x00,
    0x00, 0x00, 0x3E, 0x3F, 0x61, 0x20, 0x38, 0x18, 0x6E, 0x7E, 0x7F, 0x03, 0x00, 0x00, 0x00, 0x20,
    0x60, 0x61, 0x61, 0x33, 0x33, 0x1F, 0x0E, 0x84, 0x00, 0x00, 0x60, 0x78, 0x7F, 0x1F, 0x07, 0x01,
    0x01, 0x00, 0x70, 0x7E, 0x7F, 0x07, 0x00, 0xA0, 0x00, 0xE8, 0x10, 0x44, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEB,
    0x5E, 0xFA, 0xA4, 0xDA, 0x22, 0xD8, 0x25, 0xD0, 0x24, 0x4C, 0x10, 0x08, 0x10, 0x24, 0xDE, 0x72,
    0xED, 0xBA, 0xEA, 0xDA, 0xB2, 0xE4, 0xC2, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1C, 0x0C,
    0x0C, 0x0E, 0xC7, 0xE3, 0xF1, 0x78, 0xF8, 0xFC, 0x3F, 0xED, 0xDF, 0x3E, 0x44, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0xF7, 0xEE, 0xFD, 0xDC, 0xF4, 0xEC, 0x7E, 0xFB,
    0xED, 0x5A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xEA, 0xB7, 0xFD, 0xA2, 0xDA, 0x54, 0xA0, 0x4C, 0xD8, 0x20, 0x4C, 0x10, 0x08,
    0x20, 0x0C, 0xB8, 0xD4, 0x2C, 0xFA, 0x54, 0xFB, 0xB6, 0xE1, 0xC5, 0x40, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFB,
    0xEF, 0xFE, 0xBB, 0x6E, 0xFB, 0xEC, 0xDB, 0xBE, 0xE1, 0x5D, 0x00, 0x00, 0x00, 0xFB, 0xFF, 0xFB,
    0xF6, 0xED, 0xFF, 0xFF, 0xFD, 0xF7, 0x5E, 0xFD, 0x95, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80,
    0x00, 0x80, 0x7F, 0xBF, 0xA3, 0x5E, 0xA5, 0x4B, 0x1A, 0x42, 0x15, 0x41, 0x82, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x2F, 0x7F, 0xB7, 0xEE, 0xAB, 0x9F, 0x29, 0xD7,
    0x15, 0x25, 0x80, 0x00, 0x80, 0x00, 0xF8, 0x58, 0xA0, 0x2C, 0x68, 0x06, 0xAC, 0x0A, 0x16, 0x24,
    0x00, 0x00, 0x00, 0xEA, 0xFF, 0xDE, 0x7D, 0xEF, 0xFA, 0xDD, 0xF6, 0xED, 0x5B, 0xEA, 0x00, 0x00,
    0x00, 0x00, 0xEF, 0xFF, 0xED, 0x7F, 0xFD, 0xFF, 0xFE, 0xFF, 0xFB, 0xD6, 0x6D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x03, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0xFD, 0xFF, 0xDF,
    0xFF, 0xEF, 0xBF, 0x7F, 0xEF, 0x7F, 0xEB, 0xAE, 0xDA, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
    0x01, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0xF8, 0x28, 0x08, 0x00, 0x02, 0xF8, 0x28,
    0xD2, 0x00, 0x00, 0xFA, 0xA8, 0x88, 0x00, 0x00, 0xF0, 0x20, 0x78, 0x00, 0x00, 0xF9, 0xA8, 0x88,
    0x01, 0x02, 0x08, 0xFA, 0x08, 0x02, 0x00, 0x89, 0xF8, 0x89, 0x00, 0x00, 0xF8, 0x88, 0x88, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x01, 0x03, 0x01, 0x02, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x7F, 0xFF, 0xDF, 0x7F, 0xFF, 0x76, 0xDF, 0x77, 0xAA, 0x00, 0x00, 0x00
};

#endif
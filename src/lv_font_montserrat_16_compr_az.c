#include  <stdint.h>
#include "lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef LV_FONT_MONTSERRAT_16_COMPR_AZ
#define LV_FONT_MONTSERRAT_16_COMPR_AZ 1
#endif

#if LV_FONT_MONTSERRAT_16_COMPR_AZ

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */

    /* U+61 "a" */
    0x1, 0x9e, 0xfd, 0x80, 0xb, 0x5d, 0xa1, 0xdd,
    0x20, 0xe, 0xe4, 0x3d, 0x2b, 0x0, 0x8, 0x3,
    0x60, 0x10, 0x15, 0xf7, 0xfa, 0x40, 0x2c, 0x7a,
    0xdd, 0x40, 0x0, 0x86, 0x50, 0x88, 0x1, 0x10,
    0xca, 0x13, 0xc0, 0x5, 0x8f, 0x7b, 0x92, 0x0,

    /* U+62 "b" */
    0x8f, 0x0, 0xff, 0xe9, 0x15, 0xff, 0x59, 0x80,
    0x6c, 0x78, 0x65, 0xc3, 0x0, 0x93, 0x1e, 0x3c,
    0x7c, 0x2, 0x80, 0x8, 0x64, 0xc4, 0x0, 0x40,
    0x18, 0x80, 0x80, 0x4, 0x1, 0x88, 0x8, 0x1,
    0x0, 0x10, 0xc9, 0x8, 0x1, 0x31, 0xe3, 0xc7,
    0x80, 0x3, 0x8f, 0xc, 0xb8, 0x60,

    /* U+63 "c" */
    0x0, 0x1d, 0x77, 0xe2, 0x0, 0x13, 0x1d, 0xa0,
    0x2d, 0x2, 0x4b, 0x61, 0xf2, 0x14, 0xca, 0xc0,
    0x33, 0x8b, 0x82, 0x80, 0x79, 0xc1, 0x40, 0x3c,
    0x65, 0x60, 0x19, 0x84, 0x24, 0xb5, 0xdd, 0x92,
    0xa0, 0x98, 0xf3, 0x1, 0x68,

    /* U+64 "d" */
    0x0, 0xf8, 0x7d, 0xc0, 0x3f, 0xf9, 0x47, 0x7f,
    0xea, 0x20, 0x9, 0x31, 0x9e, 0x1b, 0x40, 0x2a,
    0x2d, 0x87, 0xc5, 0x0, 0x18, 0xd8, 0x6, 0x80,
    0x3, 0x82, 0x80, 0x62, 0x0, 0x38, 0x30, 0x6,
    0x20, 0x1, 0x8c, 0x80, 0x69, 0x0, 0xa8, 0xf1,
    0x96, 0xd0, 0x2, 0x4c, 0x79, 0xa0, 0xc0, 0x0,

    /* U+65 "e" */
    0x0, 0x1d, 0xff, 0x51, 0x0, 0x49, 0x8f, 0x32,
    0x4c, 0x20, 0x5, 0x1e, 0x33, 0xf8, 0x40, 0x18,
    0xc8, 0x4, 0x32, 0xa0, 0xe1, 0x5f, 0xfa, 0x0,
    0x5c, 0x23, 0x77, 0xc2, 0x63, 0x64, 0x58, 0x8,
    0x1, 0x47, 0xb0, 0xf5, 0xaa, 0x0, 0x4c, 0x76,
    0x87, 0x95, 0x0,

    /* U+66 "f" */
    0x0, 0x2e, 0xfe, 0x0, 0xa, 0x9a, 0xac, 0x0,
    0xc1, 0xa, 0xe1, 0x96, 0x19, 0xf4, 0x10, 0xe1,
    0x15, 0x20, 0x9a, 0x8, 0xa6, 0x1, 0xff, 0xdf,

    /* U+67 "g" */
    0x0, 0x1d, 0xff, 0xac, 0xba, 0x41, 0x31, 0x5e,
    0x1f, 0x44, 0x1, 0x45, 0xf0, 0xf8, 0xa0, 0x3,
    0x1b, 0x10, 0xa, 0xc0, 0xe, 0x4, 0x1, 0x84,
    0x0, 0xe0, 0x40, 0x18, 0x40, 0x6, 0x36, 0x1,
    0xa0, 0x2, 0xa2, 0xd8, 0x7c, 0x60, 0x10, 0x4c,
    0x67, 0x87, 0xc0, 0xf0, 0x1, 0xdf, 0xfa, 0xd8,
    0xc, 0x27, 0xa5, 0xdd, 0x54, 0x44, 0x4, 0x4a,
    0xc4, 0x1d, 0xd6, 0x0,

    /* U+68 "h" */
    0x8f, 0x0, 0xff, 0xe7, 0x95, 0xff, 0x50, 0x80,
    0x5a, 0xe, 0xe5, 0xc0, 0x9, 0xee, 0x26, 0x44,
    0x80, 0x9, 0x0, 0x9c, 0xc, 0x0, 0x20, 0x10,
    0x87, 0x80, 0x7f, 0xf6, 0x0,

    /* U+69 "i" */
    0x9e, 0x13, 0x13, 0xaf, 0x28, 0xf0, 0xf, 0xfe,
    0x68,

    /* U+6A "j" */
    0x0, 0x9f, 0x88, 0x2, 0xe1, 0x10, 0x5, 0x3e,
    0x60, 0x13, 0xf8, 0x80, 0x7f, 0xf9, 0xfc, 0x4,
    0x50, 0xcc, 0x30, 0x26, 0x92, 0xe0,

    /* U+6B "k" */
    0x8f, 0x0, 0xff, 0xe9, 0xe, 0xe8, 0x40, 0x30,
    0xe1, 0xf8, 0x80, 0x43, 0x87, 0x84, 0x1, 0x16,
    0x16, 0x90, 0x6, 0xc2, 0x4, 0x0, 0xf6, 0xa4,
    0x18, 0x6, 0xc2, 0xa1, 0xd1, 0x0, 0x88, 0x7,
    0x46, 0x80, 0x3c, 0x70, 0x8e,

    /* U+6C "l" */
    0x8f, 0x0, 0xff, 0xe5, 0x0,

    /* U+6D "m" */
    0x8e, 0x3c, 0xfe, 0x91, 0x3b, 0xfe, 0xa2, 0x0,
    0xe, 0x2c, 0xbb, 0x6e, 0x3c, 0xb2, 0xf8, 0x5,
    0x12, 0xd2, 0xc6, 0x6c, 0x68, 0xa2, 0x50, 0x3,
    0x0, 0x58, 0x14, 0x1, 0x20, 0x10, 0x0, 0x40,
    0x21, 0x2, 0x0, 0x84, 0x3c, 0x3, 0xff, 0xe0,

    /* U+6E "n" */
    0x8e, 0x3b, 0xfe, 0xa1, 0x0, 0xe, 0xc, 0xb2,
    0xe0, 0x4, 0xf4, 0xd1, 0x24, 0x80, 0x9, 0x0,
    0x9c, 0xc, 0x0, 0x20, 0x10, 0x87, 0x80, 0x7f,
    0xf6, 0x0,

    /* U+6F "o" */
    0x0, 0x1d, 0xf7, 0xe2, 0x0, 0x49, 0x8c, 0xc8,
    0xb, 0x60, 0x5, 0x16, 0xc3, 0xe2, 0x48, 0x98,
    0xd8, 0x6, 0x80, 0x47, 0x5, 0x0, 0xc4, 0x4,
    0xe0, 0xa0, 0x18, 0x80, 0x8c, 0x6c, 0x3, 0x40,
    0x20, 0x51, 0x6b, 0xbb, 0x12, 0x44, 0x13, 0x1a,
    0x60, 0x2d, 0x80,

    /* U+70 "p" */
    0x8e, 0x3b, 0xfe, 0xb3, 0x0, 0x87, 0x2, 0xa5,
    0xb0, 0xc0, 0x26, 0xb5, 0x7d, 0x2f, 0x0, 0xa0,
    0x3, 0x51, 0x88, 0x0, 0x40, 0x31, 0x1, 0x0,
    0x8, 0x3, 0x10, 0x10, 0x2, 0x0, 0x21, 0x92,
    0x10, 0x2, 0x63, 0xc7, 0x8f, 0x0, 0x58, 0xf0,
    0xcb, 0x86, 0x1, 0x15, 0xff, 0x59, 0x80, 0x7f,
    0xf2, 0x80,

    /* U+71 "q" */
    0x0, 0x1d, 0xff, 0xa8, 0xbd, 0xc1, 0x31, 0x9e,
    0x1f, 0x0, 0x2a, 0x2d, 0x87, 0xd5, 0x0, 0x18,
    0xd8, 0x6, 0x80, 0x3, 0x82, 0x80, 0x62, 0x0,
    0x38, 0x28, 0x6, 0x20, 0x1, 0x8d, 0x80, 0x68,
    0x0, 0xa8, 0xb5, 0xdd, 0x8a, 0x1, 0x26, 0x34,
    0x41, 0xb4, 0x3, 0x1d, 0xff, 0xa8, 0x80, 0x3f,
    0xf9, 0x40,

    /* U+72 "r" */
    0x8e, 0x2b, 0xf0, 0x0, 0xe3, 0x30, 0x2, 0x4d,
    0x90, 0xa, 0x0, 0x38, 0x80, 0x3f, 0xf9, 0xe0,

    /* U+73 "s" */
    0x2, 0xae, 0xfd, 0x91, 0x16, 0x3c, 0xc9, 0x10,
    0x2a, 0x3c, 0xed, 0x3a, 0xc, 0x10, 0x82, 0x1,
    0x14, 0xad, 0xf6, 0xb0, 0x1, 0xbb, 0x94, 0xd2,
    0xa0, 0x20, 0x2b, 0x60, 0x4b, 0xd4, 0xed, 0x60,
    0x88, 0x67, 0x88, 0x3d, 0x98,

    /* U+74 "t" */
    0x5, 0xf3, 0x0, 0xff, 0x65, 0x6, 0x7d, 0x4,
    0x38, 0x45, 0x48, 0x26, 0x82, 0x29, 0x80, 0x7f,
    0xf2, 0xc4, 0x1c, 0x3, 0x28, 0x43, 0x40, 0x0,
    0x68, 0x65, 0x4,

    /* U+75 "u" */
    0xae, 0x0, 0xc5, 0xea, 0x1, 0xff, 0xd8, 0x31,
    0x0, 0xcc, 0x0, 0xf0, 0x30, 0xb, 0x80, 0xe,
    0x3a, 0xed, 0x6a, 0x0, 0x1c, 0x59, 0x90, 0x60,
    0x0,

    /* U+76 "v" */
    0xd, 0xc0, 0xe, 0xcb, 0xb, 0x32, 0x0, 0x88,
    0xf8, 0x18, 0x2c, 0x2, 0xb1, 0x50, 0x3, 0x38,
    0x4, 0xcc, 0x0, 0xac, 0x58, 0x18, 0x24, 0x2,
    0x23, 0xa0, 0xa4, 0x10, 0xd, 0x26, 0xc7, 0xe0,
    0x1c, 0xa3, 0x24, 0x80, 0x1e, 0x60, 0xa0, 0x8,

    /* U+77 "w" */
    0xbb, 0x0, 0x69, 0xf1, 0x0, 0x93, 0xc7, 0x50,
    0x40, 0x27, 0x7, 0x0, 0xb4, 0xc5, 0x81, 0xc0,
    0xa, 0x27, 0xa0, 0x13, 0x50, 0x1, 0x68, 0x1,
    0xe9, 0x28, 0x20, 0xa0, 0xe0, 0xf, 0x31, 0x5,
    0xe5, 0x6, 0xf, 0x41, 0x0, 0x28, 0x33, 0x1,
    0x41, 0xac, 0x17, 0x80, 0x32, 0xde, 0xa8, 0x3,
    0x4e, 0x1, 0x40, 0x37, 0x1a, 0x70, 0x1, 0x5,
    0xd4, 0x3, 0x90, 0x44, 0x80, 0x13, 0x7, 0x0,
    0x40,

    /* U+78 "x" */
    0x4f, 0x70, 0xa, 0x7c, 0x91, 0xe0, 0xc1, 0x5a,
    0x88, 0x20, 0xf8, 0xad, 0x94, 0x2, 0xe2, 0xd3,
    0x90, 0xc, 0x4a, 0x16, 0x1, 0xc8, 0xa5, 0x2,
    0x1, 0xd, 0x26, 0x9e, 0x80, 0x54, 0x14, 0x1c,
    0x70, 0xc, 0x94, 0x20, 0x70, 0xe8,

    /* U+79 "y" */
    0xd, 0xc0, 0xe, 0xcb, 0xb, 0x33, 0x0, 0x44,
    0x7e, 0xc, 0x32, 0x1, 0x59, 0x20, 0x1, 0x94,
    0x40, 0x5a, 0x80, 0x29, 0x6, 0x6, 0x6, 0x0,
    0x85, 0x64, 0x29, 0x84, 0x3, 0x48, 0xc9, 0x58,
    0x7, 0x19, 0x99, 0x8, 0x3, 0xd4, 0x1e, 0x1,
    0xf6, 0x12, 0x0, 0x43, 0x8f, 0x2b, 0x0, 0x1c,
    0xd2, 0xf0, 0xa0, 0x18,

    /* U+7A "z" */
    0x4f, 0xff, 0x4a, 0xd5, 0x64, 0xd, 0x15, 0x58,
    0x51, 0xd0, 0x2, 0x1a, 0x38, 0x0, 0xd4, 0x1a,
    0x1, 0xa1, 0x28, 0x40, 0x24, 0x78, 0x40, 0x8,
    0x68, 0x49, 0x56, 0x34, 0x11, 0x55, 0x6f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 69, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 153, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 146, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 90, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 177, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 298, .adv_w = 174, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 73, .box_w = 6, .box_h = 15, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 358, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 71, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 271, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 174, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 163, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 559, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 609, .adv_w = 105, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 106, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 173, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 143, .box_w = 10, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 230, .box_w = 15, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 141, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 143, .box_w = 10, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 909, .adv_w = 133, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 2,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 3, 4, 5, 6,
    0, 1, 0, 0, 7, 4, 1, 1,
    2, 2, 8, 9, 10, 11, 0, 12,
    12, 13, 12, 14
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 3, 3, 3, 0,
    3, 2, 4, 5, 2, 2, 4, 4,
    3, 4, 3, 4, 6, 7, 8, 9,
    9, 10, 9, 11
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 1, 0, 0, 0, 0, 0,
    -3, 0, 0, -1, 0, 0, 0, 0,
    0, 0, 0, -4, -5, -2, 0, -2,
    -2, 0, 0, 0, 2, 0, -2, -4,
    -2, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, -3, -4, -1, -3,
    0, -2, 20, 11, 0, 0, 0, 3,
    0, 0, -3, 0, -6, -2, 0, -4,
    0, -3, -7, -5, -3, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0,
    -2, -2, -3, -2, 0, -1, 4, 0,
    4, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, 0, 0,
    -5, 0, 0, 0, -3, 0, -3, 0,
    0, -4, 0, -4, 0, -4, -2, 4,
    0, -2, -8, -3, -3, 0, -5, 0,
    2, -3, 0, -3, -8, 0, -3, 0,
    0, -2, 0, 0, 0, 1, 0, -3,
    -3, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 14,
    .right_class_cnt     = 11,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t lv_font_montserrat_16_compr_az = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_MONTSERRAT_16_COMPR_AZ*/


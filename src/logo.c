#include "logo.h"

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST uint8_t my_logo_map[] = {
    0x00, 0xFF, 0x00, 0xFF,  // Very tiny fake bitmap data
    0xFF, 0x00, 0xFF, 0x00
};

const lv_img_dsc_t my_logo = {
    .header.always_zero = 0,
    .header.w = 4,
    .header.h = 2,
    .data_size = sizeof(my_logo_map),
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = my_logo_map,
};
